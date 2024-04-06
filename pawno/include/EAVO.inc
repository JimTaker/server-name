#include 	<a_samp>

enum vehob
{
	StatusPlayer,
	VEditObject,
	LasObject
}
new EAVO[MAX_PLAYERS][vehob];

forward OnPlayerEditVehicleObject(playerid, objectid, response, Float:fX, Float:fY, Float:fZ, Float:fRotX, Float:fRotY, Float:fRotZ);

public OnPlayerEditObject(playerid,playerobject, objectid, response, Float:fX, Float:fY, Float:fZ, Float:fRotX, Float:fRotY, Float:fRotZ)
{
	if(playerobject && EAVO[playerid][StatusPlayer])
	{
	    CallRemoteFunction("OnPlayerEditVehicleObject","dddffffff",playerid, objectid, response, fX, fY, fZ,fRotX,fRotY,fRotZ);
	    new Float:oldX, Float:oldY, Float:oldZ,
		Float:oldRotX, Float:oldRotY, Float:oldRotZ,idcar,
		Float:vX,Float:vY,Float:vZ;
		GetPlayerObjectPos(playerid,objectid, oldX, oldY, oldZ);
		GetPlayerObjectRot(playerid,objectid, oldRotX, oldRotY, oldRotZ);
		MovePlayerObject(playerid,objectid, fX, fY, fZ, 10.0, fRotX, fRotY, fRotZ);
		if(response == EDIT_RESPONSE_FINAL)
		{
		    new obj = CreateObject(GetPlayerObjectModel(playerid,objectid),oldX,oldY,oldZ,oldRotX,oldRotY,oldRotZ);
		    DestroyObject(EAVO[playerid][LasObject]);
		    DestroyPlayerObject(playerid,EAVO[playerid][VEditObject]);
		    EAVO[playerid][StatusPlayer] = 0;
		    idcar = GetPlayerVehicleID(playerid);
			GetVehiclePos(idcar,vX,vY,vZ);
		    AttachObjectToVehicle(obj,idcar,fX-vX, fY-vY, vZ-fZ, fRotX, fRotY, fRotZ);
		    printf("1 [include EAVO]: AttachObjectToVehicle(%d,%d,%f, %f, %f, %f, %f, %f);",GetObjectModel(obj),idcar,vX-fX, vY-fY, vZ-fZ, fRotX, fRotY, fRotZ);
		    printf("2 [include EAVO]: AttachObjectToVehicle(%d,%d,%f, %f, %f, %f, %f, %f);",GetObjectModel(obj),idcar,fX-vX, fY-vY, fZ-vZ, fRotX, fRotY, fRotZ);
		    
		}
		if(response == EDIT_RESPONSE_CANCEL)
		{
		    DestroyPlayerObject(playerid,EAVO[playerid][VEditObject]);
		    EAVO[playerid][StatusPlayer] = 0;
		}
	}
	#if defined ac_OnPlayerEditObject
		return ac_OnPlayerEditObject(playerid,playerobject, objectid, response, fX, fY, fZ, fRotX, fRotY,fRotZ);
	#else
		return 1;
	#endif
}
#if defined _ALS_OnPlayerEditObject
		#undef OnPlayerEditObject
	#else
		#define _ALS_OnPlayerEditObject
	#endif
	#define OnPlayerEditObject ac_OnPlayerEditObject
	#if defined ac_OnPlayerEditObject
		forward ac_OnPlayerEditObject(playerid,playerobject, objectid, response, Float:fX, Float:fY, Float:fZ, Float:fRotX, Float:fRotY, Float:fRotZ);
	#endif

stock EditVehicleObject(playerid,objectid)
{
	if(!IsValidObject(objectid) || !IsPlayerInAnyVehicle(playerid)) return true;
	new Float:oldX, Float:oldY, Float:oldZ,
	Float:oldRotX, Float:oldRotY, Float:oldRotZ;
	GetObjectPos(objectid, oldX, oldY, oldZ);
	GetObjectRot(objectid, oldRotX, oldRotY, oldRotZ);
	EAVO[playerid][StatusPlayer] = 1;
	EAVO[playerid][LasObject] = objectid;
	EAVO[playerid][VEditObject] = CreatePlayerObject(playerid,GetObjectModel(objectid),oldX,oldY,oldZ,oldRotX,oldRotY,oldRotZ);
	EditPlayerObject(playerid,EAVO[playerid][VEditObject]);
	return 1;
}

