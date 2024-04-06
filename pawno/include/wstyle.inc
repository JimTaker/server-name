#define 					WALK_DEFAULT    					(0)
#define 					WALK_NORMAL     					(1)
#define 					WALK_PED       						(2)
#define 					WALK_GANGSTA   						(3)
#define 					WALK_GANGSTA2  						(4)
#define 					WALK_OLD       						(5)
#define 					WALK_FAT_OLD   						(6)
#define 					WALK_FAT      						(7)
#define 					WALK_LADY     						(8)
#define 					WALK_LADY2    						(9)
#define 					WALK_WHORE    						(10)
#define 					WALK_WHORE2   						(11)
#define 					WALK_DRUNK     						(12)
#define 					WALK_BLIND     						(13)
new WStyle[MAX_PLAYERS];
new walktime[MAX_PLAYERS];
stock PreloadAnimLib(playerid, animlib[])
{
    ApplyAnimation(playerid,animlib,"null",0.0,0,0,0,0,0);
}
forward WalkAnim(playerid); // forwarding the timer function
public WalkAnim(playerid)  // Function of The Timer
{ 
    new keys, updown, leftright; 
    GetPlayerKeys(playerid,keys,updown,leftright); // Get The Player Pressed Key
    if ((keys & KEY_WALK && updown & KEY_UP) || (keys & KEY_WALK && updown & KEY_DOWN) || (keys & KEY_WALK && leftright & KEY_LEFT) || (keys & KEY_WALK && leftright & KEY_RIGHT))  // if player pressed Key to Walk
    { 
        KillTimer(walktime[playerid]); // kill the walk timer if player was walked before
        switch(GetPlayerWalkingStyle(playerid))  //  switching The PlayerWalkStyle
        { 
            //Aplly The Walk Anim
            case 1: ApplyAnimation(playerid,"PED","WALK_player",4.1,1,1,1,1,1); 
            case 2: ApplyAnimation(playerid,"PED","WALK_civi",4.1,1,1,1,1,1); 
            case 3: ApplyAnimation(playerid,"PED","WALK_gang1",4.1,1,1,1,1,1); 
            case 4: ApplyAnimation(playerid,"PED","WALK_gang2",4.1,1,1,1,1,1); 
            case 5: ApplyAnimation(playerid,"PED","WALK_old",4.1,1,1,1,1,1); 
            case 6: ApplyAnimation(playerid,"PED","WALK_fatold",4.1,1,1,1,1,1); 
            case 7: ApplyAnimation(playerid,"PED","WALK_fat",4.1,1,1,1,1,1); 
            case 8: ApplyAnimation(playerid,"PED","WOMAN_walknorm",4.1,1,1,1,1,1); 
            case 9: ApplyAnimation(playerid,"PED","WOMAN_walkbusy",4.1,1,1,1,1,1); 
            case 10: ApplyAnimation(playerid,"PED","WOMAN_walkpro",4.1,1,1,1,1,1); 
            case 11: ApplyAnimation(playerid,"PED","WOMAN_walksexy",4.1,1,1,1,1,1); 
            case 12: ApplyAnimation(playerid,"PED","Walk_Wuzi",4.1,1,1,1,1,1); 
            default: ClearAnimations(playerid);  // if player not choosed a Walk Style, Not Playing Anim
        } 
        walktime[playerid] = SetTimerEx("WalkAnim",200,0,"d",playerid); //Set The Timer For Looping The Anims
    } 
    return true; 
}  


stock GetPlayerWalkingStyle(playerid) return WStyle[playerid];
stock SetPlayerWalkingStyle(playerid,style) return WStyle[playerid] = style;

stock CheckW(playerid, newkeys, oldkeys)
{
	if (((newkeys & KEY_WALK && newkeys & KEY_UP) || (newkeys & KEY_WALK && newkeys & KEY_DOWN) || (newkeys & KEY_WALK && newkeys & KEY_LEFT) || (newkeys & KEY_WALK && newkeys & KEY_RIGHT)) 
        || ((oldkeys & KEY_WALK && newkeys & KEY_UP) || (oldkeys & KEY_WALK && newkeys & KEY_DOWN) || (oldkeys & KEY_WALK && newkeys & KEY_LEFT) || (oldkeys & KEY_WALK && newkeys & KEY_RIGHT)) 
        || ((newkeys & KEY_WALK && oldkeys & KEY_UP) || (newkeys & KEY_WALK && oldkeys & KEY_DOWN) || (newkeys & KEY_WALK && oldkeys & KEY_LEFT) || (newkeys & KEY_WALK && oldkeys & KEY_RIGHT)) 
        && GetPlayerState(playerid) == PLAYER_STATE_ONFOOT) { // if player are on foot, not at vehs 
            walktime[playerid] = SetTimerEx("WalkAnim",200,0,"d",playerid); // set the timer 
    } 
    return 1;
}




