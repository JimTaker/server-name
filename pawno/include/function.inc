stock GiveEx(playerid,player)
{
    new weapons[7],ammo[7],weapons1[7],ammo1[7];
	new gun;
	new str[5];
	for (new i = 0; i < 7; i++) GetPlayerWeaponData(playerid, i, weapons[i], ammo[i]),GetPlayerWeaponData(player, i, weapons1[i], ammo1[i]);
    CreateInv(playerid);
    CreateInv(player);
    for(new i = 0; i < 15; i++) TextDrawShowForPlayer(playerid,Inventory[i]),TextDrawShowForPlayer(player,Inventory[i]);
    for(new i = 0; i < 36; i++)
	{
	    if(i >= 0 && i<= 5)
	    {
	 	    if(ammo[i+1])
			{

				gun = GiveID(weapons[i+1]);
				PlayerTextDrawSetPreviewModel(playerid, InventoryP[i][playerid], InvType[gun][invObj]);
				PlayerTextDrawSetPreviewRot(playerid, InventoryP[i][playerid], InvType[gun][invRot][0], InvType[gun][invRot][1], InvType[gun][invRot][2], InvType[gun][invRot][3]);
				PlayerTextDrawShow(playerid,InvAmm[playerid][i]);
	 			format(str,sizeof(str),"%d",ammo[i+1]);
				PlayerTextDrawSetString(playerid,InvAmm[playerid][i],str);
	 	    }
	 	    else
	 	    {
				PlayerTextDrawSetPreviewModel(playerid, InventoryP[i][playerid], InvType[0][invObj]);
				PlayerTextDrawSetPreviewRot(playerid, InventoryP[i][playerid], InvType[0][invRot][0], InvType[0][invRot][1], InvType[0][invRot][2], InvType[0][invRot][3]);
	 	    }
	 	    if(ammo1[i+1])
			{

				gun = GiveID(weapons1[i+1]);
				PlayerTextDrawSetPreviewModel(player, InventoryP[i][player], InvType[gun][invObj]);
				PlayerTextDrawSetPreviewRot(player, InventoryP[i][player], InvType[gun][invRot][0], InvType[gun][invRot][1], InvType[gun][invRot][2], InvType[gun][invRot][3]);
				PlayerTextDrawShow(player,InvAmm[player][i]);
	 			format(str,sizeof(str),"%d",ammo[i+1]);
				PlayerTextDrawSetString(player,InvAmm[player][i],str);
	 	    }
	 	    else
	 	    {
				PlayerTextDrawSetPreviewModel(player, InventoryP[i][player], InvType[0][invObj]);
				PlayerTextDrawSetPreviewRot(player, InventoryP[i][player], InvType[0][invRot][0], InvType[0][invRot][1], InvType[0][invRot][2], InvType[0][invRot][3]);
	 	    }
	    }

	    if(i > 5 && i < 36)
	    {
	 	    if(InvInfo[playerid][iSlot][i-6])
	 	    {
	            PlayerTextDrawSetPreviewModel(playerid, InventoryP[i][playerid], InvType[InvInfo[playerid][iSlot][i-6]][invObj]);
	            PlayerTextDrawSetPreviewRot(playerid, InventoryP[i][playerid], InvType[InvInfo[playerid][iSlot][i-6]][invRot][0], InvType[InvInfo[playerid][iSlot][i-6]][invRot][1], InvType[InvInfo[playerid][iSlot][i-6]][invRot][2], InvType[InvInfo[playerid][iSlot][i-6]][invRot][3]);
	 			PlayerTextDrawShow(playerid,InvAmm[playerid][i]);
	 			format(str,sizeof(str),"%d",InvInfo[playerid][iKol][i-6]);
				PlayerTextDrawSetString(playerid,InvAmm[playerid][i],str);
	 		}
	 		else
	 		{
	 		    PlayerTextDrawSetPreviewModel(playerid, InventoryP[i][playerid], InvType[0][invObj]);
				PlayerTextDrawSetPreviewRot(playerid, InventoryP[i][playerid], InvType[0][invRot][0], InvType[0][invRot][1], InvType[0][invRot][2], InvType[0][invRot][3]);
	 		}
	 		if(InvInfo[player][iSlot][i-6])
	 	    {
	            PlayerTextDrawSetPreviewModel(player, InventoryP[i][player], InvType[InvInfo[player][iSlot][i-6]][invObj]);
	            PlayerTextDrawSetPreviewRot(player, InventoryP[i][player], InvType[InvInfo[player][iSlot][i-6]][invRot][0], InvType[InvInfo[player][iSlot][i-6]][invRot][1], InvType[InvInfo[player][iSlot][i-6]][invRot][2], InvType[InvInfo[player][iSlot][i-6]][invRot][3]);
	 			PlayerTextDrawShow(player,InvAmm[player][i]);
	 			format(str,sizeof(str),"%d",InvInfo[player][iKol][i-6]);
				PlayerTextDrawSetString(player,InvAmm[player][i],str);
	 		}
	 		else
	 		{
	 		    PlayerTextDrawSetPreviewModel(player, InventoryP[i][player], InvType[0][invObj]);
				PlayerTextDrawSetPreviewRot(player, InventoryP[i][player], InvType[0][invRot][0], InvType[0][invRot][1], InvType[0][invRot][2], InvType[0][invRot][3]);
	 		}
		}
		PlayerTextDrawShow(playerid,InventoryP[i][playerid]);
		PlayerTextDrawShow(player,InventoryP[i][player]);
	}
	TextDrawShowForPlayer(playerid,Inventory[22]);
	TextDrawShowForPlayer(player,Inventory[22]);
	if(!PlayerInfo[playerid][pUl][2])
	{
	    TextDrawHideForPlayer(playerid,Inventory[5]);
	    TextDrawHideForPlayer(playerid,Inventory[6]);
	    TextDrawHideForPlayer(playerid,Inventory[7]);
	    TextDrawHideForPlayer(playerid,Inventory[8]);
	    TextDrawHideForPlayer(playerid,Inventory[9]);
	    TextDrawHideForPlayer(playerid,Inventory[10]);
		TextDrawHideForPlayer(playerid,Inventory[13]);
		TextDrawHideForPlayer(playerid,Inventory[14]);
	}
	if(!PlayerInfo[player][pUl][2])
	{
	    TextDrawHideForPlayer(player,Inventory[5]);
	    TextDrawHideForPlayer(player,Inventory[6]);
	    TextDrawHideForPlayer(player,Inventory[7]);
	    TextDrawHideForPlayer(player,Inventory[8]);
	    TextDrawHideForPlayer(player,Inventory[9]);
	    TextDrawHideForPlayer(player,Inventory[10]);
		TextDrawHideForPlayer(player,Inventory[13]);
		TextDrawHideForPlayer(player,Inventory[14]);
	}
	CreateEx(playerid);
	CreateEx(player);
	for(new i = 0; i < 16; i++)
	{
		TextDrawShowForPlayer(playerid,Ext[i]),PlayerTextDrawShow(playerid,ExtP[i][playerid]);
		TextDrawShowForPlayer(player,Ext[i]),PlayerTextDrawShow(player,ExtP[i][player]);
	}
	PlayerTextDrawSetString(playerid,ExtP[14][playerid],PlayerInfo[player][pSendername]);
	PlayerTextDrawSetString(player,ExtP[14][player],PlayerInfo[playerid][pSendername]);
	SetPVarInt(playerid,"OpenEx",1);
	SetPVarInt(playerid,"OpenExP",1);
	SetPVarInt(player,"OpenEx",1);
	SetPVarInt(player,"OpenExP",2);
	SelectTextDraw(playerid, 0xFFCC00FF);
	SelectTextDraw(player, 0xFFCC00FF);
	SendClientMessage(playerid,CGREY,"Для закрытия обмена используйте кнопку 'ESC'");
	SendClientMessage(player,CGREY,"Для закрытия обмена используйте кнопку 'ESC'");
	return 1;
}

stock CreateEx(playerid)
{
	ExtP[0][playerid] = CreatePlayerTextDraw(playerid, 195.433059, 306.967102, "LD_SPAC:white"); // 2 active slots player
	PlayerTextDrawLetterSize(playerid, ExtP[0][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, ExtP[0][playerid], 22.333360, 26.962970);
	PlayerTextDrawAlignment(playerid, ExtP[0][playerid], 1);
	PlayerTextDrawColor(playerid, ExtP[0][playerid], -1);
	PlayerTextDrawUseBox(playerid, ExtP[0][playerid], true);
	PlayerTextDrawBoxColor(playerid, ExtP[0][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, ExtP[0][playerid], 0);
	PlayerTextDrawSetOutline(playerid, ExtP[0][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, ExtP[0][playerid], -37548836);
	PlayerTextDrawFont(playerid, ExtP[0][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, ExtP[0][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, ExtP[0][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, ExtP[0][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	ExtP[1][playerid] = CreatePlayerTextDraw(playerid, 249.833038, 155.470352, "LD_SPAC:white"); // box active slots Inventory2
	PlayerTextDrawLetterSize(playerid, ExtP[1][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, ExtP[1][playerid], 22.333360, 26.962970);
	PlayerTextDrawAlignment(playerid, ExtP[1][playerid], 1);
	PlayerTextDrawColor(playerid, ExtP[1][playerid], -1);
	PlayerTextDrawUseBox(playerid, ExtP[1][playerid], true);
	PlayerTextDrawBoxColor(playerid, ExtP[1][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, ExtP[1][playerid], 0);
	PlayerTextDrawSetOutline(playerid, ExtP[1][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, ExtP[1][playerid], -37548836);
	PlayerTextDrawFont(playerid, ExtP[1][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, ExtP[1][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, ExtP[1][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, ExtP[1][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	ExtP[2][playerid] = CreatePlayerTextDraw(playerid, 273.499664, 155.385177, "LD_SPAC:white"); // box active slots Inventory2
	PlayerTextDrawLetterSize(playerid, ExtP[2][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, ExtP[2][playerid], 22.333360, 26.962970);
	PlayerTextDrawAlignment(playerid, ExtP[2][playerid], 1);
	PlayerTextDrawColor(playerid, ExtP[2][playerid], -1);
	PlayerTextDrawUseBox(playerid, ExtP[2][playerid], true);
	PlayerTextDrawBoxColor(playerid, ExtP[2][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, ExtP[2][playerid], 0);
	PlayerTextDrawSetOutline(playerid, ExtP[2][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, ExtP[2][playerid], -37548836);
	PlayerTextDrawFont(playerid, ExtP[2][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, ExtP[2][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, ExtP[2][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, ExtP[2][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	ExtP[3][playerid] = CreatePlayerTextDraw(playerid, 297.166320, 155.385192, "LD_SPAC:white"); // box active slots Inventory2
	PlayerTextDrawLetterSize(playerid, ExtP[3][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, ExtP[3][playerid], 22.333360, 26.962970);
	PlayerTextDrawAlignment(playerid, ExtP[3][playerid], 1);
	PlayerTextDrawColor(playerid, ExtP[3][playerid], -1);
	PlayerTextDrawUseBox(playerid, ExtP[3][playerid], true);
	PlayerTextDrawBoxColor(playerid, ExtP[3][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, ExtP[3][playerid], 0);
	PlayerTextDrawSetOutline(playerid, ExtP[3][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, ExtP[3][playerid], -37548836);
	PlayerTextDrawFont(playerid, ExtP[3][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, ExtP[3][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, ExtP[3][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, ExtP[3][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	ExtP[4][playerid] = CreatePlayerTextDraw(playerid, 297.166320, 183.885192, "LD_SPAC:white"); // box active slots Inventory2
	PlayerTextDrawLetterSize(playerid, ExtP[4][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, ExtP[4][playerid], 22.333360, 26.962970);
	PlayerTextDrawAlignment(playerid, ExtP[4][playerid], 1);
	PlayerTextDrawColor(playerid, ExtP[4][playerid], -1);
	PlayerTextDrawUseBox(playerid, ExtP[4][playerid], true);
	PlayerTextDrawBoxColor(playerid, ExtP[4][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, ExtP[4][playerid], 0);
	PlayerTextDrawSetOutline(playerid, ExtP[4][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, ExtP[4][playerid], -37548836);
	PlayerTextDrawFont(playerid, ExtP[4][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, ExtP[4][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, ExtP[4][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, ExtP[4][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	ExtP[5][playerid] = CreatePlayerTextDraw(playerid, 273.666320, 183.885192, "LD_SPAC:white"); // box active slots Inventory2
	PlayerTextDrawLetterSize(playerid, ExtP[5][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, ExtP[5][playerid], 22.333360, 26.962970);
	PlayerTextDrawAlignment(playerid, ExtP[5][playerid], 1);
	PlayerTextDrawColor(playerid, ExtP[5][playerid], -1);
	PlayerTextDrawUseBox(playerid, ExtP[5][playerid], true);
	PlayerTextDrawBoxColor(playerid, ExtP[5][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, ExtP[5][playerid], 0);
	PlayerTextDrawSetOutline(playerid, ExtP[5][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, ExtP[5][playerid], -37548836);
	PlayerTextDrawFont(playerid, ExtP[5][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, ExtP[5][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, ExtP[5][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, ExtP[5][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	ExtP[6][playerid] = CreatePlayerTextDraw(playerid, 249.832992, 183.970382, "LD_SPAC:white"); // box active slots Inventory2
	PlayerTextDrawLetterSize(playerid, ExtP[6][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, ExtP[6][playerid], 22.333360, 26.962970);
	PlayerTextDrawAlignment(playerid, ExtP[6][playerid], 1);
	PlayerTextDrawColor(playerid, ExtP[6][playerid], -1);
	PlayerTextDrawUseBox(playerid, ExtP[6][playerid], true);
	PlayerTextDrawBoxColor(playerid, ExtP[6][playerid], -37549056);
	PlayerTextDrawSetShadow(playerid, ExtP[6][playerid], 0);
	PlayerTextDrawSetOutline(playerid, ExtP[6][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, ExtP[6][playerid], -37548836);
	PlayerTextDrawFont(playerid, ExtP[6][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, ExtP[6][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, ExtP[6][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, ExtP[6][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	ExtP[7][playerid] = CreatePlayerTextDraw(playerid, 219.266433, 306.967102, "LD_SPAC:white"); // 2 active slots player
	PlayerTextDrawLetterSize(playerid, ExtP[7][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, ExtP[7][playerid], 22.333360, 26.962970);
	PlayerTextDrawAlignment(playerid, ExtP[7][playerid], 1);
	PlayerTextDrawColor(playerid, ExtP[7][playerid], -1);
	PlayerTextDrawUseBox(playerid, ExtP[7][playerid], true);
	PlayerTextDrawBoxColor(playerid, ExtP[7][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, ExtP[7][playerid], 0);
	PlayerTextDrawSetOutline(playerid, ExtP[7][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, ExtP[7][playerid], -37548836);
	PlayerTextDrawFont(playerid, ExtP[7][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, ExtP[7][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, ExtP[7][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, ExtP[7][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	ExtP[8][playerid] = CreatePlayerTextDraw(playerid, 242.932998, 306.967102, "LD_SPAC:white"); // 2 active slots player
	PlayerTextDrawLetterSize(playerid, ExtP[8][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, ExtP[8][playerid], 22.333360, 26.962970);
	PlayerTextDrawAlignment(playerid, ExtP[8][playerid], 1);
	PlayerTextDrawColor(playerid, ExtP[8][playerid], -1);
	PlayerTextDrawUseBox(playerid, ExtP[8][playerid], true);
	PlayerTextDrawBoxColor(playerid, ExtP[8][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, ExtP[8][playerid], 0);
	PlayerTextDrawSetOutline(playerid, ExtP[8][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, ExtP[8][playerid], -37548836);
	PlayerTextDrawFont(playerid, ExtP[8][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, ExtP[8][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, ExtP[8][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, ExtP[8][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	ExtP[9][playerid] = CreatePlayerTextDraw(playerid, 195.599685, 278.344787, "LD_SPAC:white"); // 2 active slots player
	PlayerTextDrawLetterSize(playerid, ExtP[9][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, ExtP[9][playerid], 22.333360, 26.962970);
	PlayerTextDrawAlignment(playerid, ExtP[9][playerid], 1);
	PlayerTextDrawColor(playerid, ExtP[9][playerid], -1);
	PlayerTextDrawUseBox(playerid, ExtP[9][playerid], true);
	PlayerTextDrawBoxColor(playerid, ExtP[9][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, ExtP[9][playerid], 0);
	PlayerTextDrawSetOutline(playerid, ExtP[9][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, ExtP[9][playerid], -37548836);
	PlayerTextDrawFont(playerid, ExtP[9][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, ExtP[9][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, ExtP[9][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, ExtP[9][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	ExtP[10][playerid] = CreatePlayerTextDraw(playerid, 219.099655, 278.429962, "LD_SPAC:white"); // 2 active slots player
	PlayerTextDrawLetterSize(playerid, ExtP[10][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, ExtP[10][playerid], 22.333360, 26.962970);
	PlayerTextDrawAlignment(playerid, ExtP[10][playerid], 1);
	PlayerTextDrawColor(playerid, ExtP[10][playerid], -1);
	PlayerTextDrawUseBox(playerid, ExtP[10][playerid], true);
	PlayerTextDrawBoxColor(playerid, ExtP[10][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, ExtP[10][playerid], 0);
	PlayerTextDrawSetOutline(playerid, ExtP[10][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, ExtP[10][playerid], -37548836);
	PlayerTextDrawFont(playerid, ExtP[10][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, ExtP[10][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, ExtP[10][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, ExtP[10][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	ExtP[11][playerid] = CreatePlayerTextDraw(playerid, 195.833358, 245.040725, "LD_SPAC:white"); // box decline
	PlayerTextDrawLetterSize(playerid, ExtP[11][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, ExtP[11][playerid], 60.999984, 21.570350);
	PlayerTextDrawAlignment(playerid, ExtP[11][playerid], 1);
	PlayerTextDrawColor(playerid, ExtP[11][playerid], -962850561);
	PlayerTextDrawUseBox(playerid, ExtP[11][playerid], true);
	PlayerTextDrawBoxColor(playerid, ExtP[11][playerid], 255);
	PlayerTextDrawSetShadow(playerid, ExtP[11][playerid], 0);
	PlayerTextDrawSetOutline(playerid, ExtP[11][playerid], 0);
	PlayerTextDrawFont(playerid, ExtP[11][playerid], 4);
	PlayerTextDrawSetSelectable(playerid, ExtP[11][playerid], true);

	ExtP[12][playerid] = CreatePlayerTextDraw(playerid, 242.766326, 278.515136, "LD_SPAC:white"); // 2 active slots player
	PlayerTextDrawLetterSize(playerid, ExtP[12][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, ExtP[12][playerid], 22.333360, 26.962970);
	PlayerTextDrawAlignment(playerid, ExtP[12][playerid], 1);
	PlayerTextDrawColor(playerid, ExtP[12][playerid], -1);
	PlayerTextDrawUseBox(playerid, ExtP[12][playerid], true);
	PlayerTextDrawBoxColor(playerid, ExtP[12][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, ExtP[12][playerid], 0);
	PlayerTextDrawSetOutline(playerid, ExtP[12][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, ExtP[12][playerid], -37548836);
	PlayerTextDrawFont(playerid, ExtP[12][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, ExtP[12][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, ExtP[12][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, ExtP[12][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	ExtP[13][playerid] = CreatePlayerTextDraw(playerid, 222.333541, 183.022186, "0$"); // 1 player set money
	PlayerTextDrawLetterSize(playerid, ExtP[13][playerid], 0.149993, 0.969479);
	PlayerTextDrawAlignment(playerid, ExtP[13][playerid], 2);
	PlayerTextDrawColor(playerid, ExtP[13][playerid], -37548801);
	PlayerTextDrawSetShadow(playerid, ExtP[13][playerid], 0);
	PlayerTextDrawSetOutline(playerid, ExtP[13][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, ExtP[13][playerid], 255);
	PlayerTextDrawFont(playerid, ExtP[13][playerid], 2);
	PlayerTextDrawSetProportional(playerid, ExtP[13][playerid], 1);

	ExtP[14][playerid] = CreatePlayerTextDraw(playerid, 294.000152, 297.392608, "alex_light"); // name of player
	PlayerTextDrawLetterSize(playerid, ExtP[14][playerid], 0.149993, 0.969479);
	PlayerTextDrawAlignment(playerid, ExtP[14][playerid], 2);
	PlayerTextDrawColor(playerid, ExtP[14][playerid], -37548801);
	PlayerTextDrawSetShadow(playerid, ExtP[14][playerid], 0);
	PlayerTextDrawSetOutline(playerid, ExtP[14][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, ExtP[14][playerid], 255);
	PlayerTextDrawFont(playerid, ExtP[14][playerid], 2);
	PlayerTextDrawSetProportional(playerid, ExtP[14][playerid], 1);

	ExtP[15][playerid] = CreatePlayerTextDraw(playerid, 293.833526, 305.977783, "0$"); // 2 player set money
	PlayerTextDrawLetterSize(playerid, ExtP[15][playerid], 0.149993, 0.969479);
	PlayerTextDrawAlignment(playerid, ExtP[15][playerid], 2);
	PlayerTextDrawColor(playerid, ExtP[15][playerid], -37548801);
	PlayerTextDrawSetShadow(playerid, ExtP[15][playerid], 0);
	PlayerTextDrawSetOutline(playerid, ExtP[15][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, ExtP[15][playerid], 255);
	PlayerTextDrawFont(playerid, ExtP[15][playerid], 2);
	PlayerTextDrawSetProportional(playerid, ExtP[15][playerid], 1);
	return 1;
}
stock GetFreeHouse(playerid,idmodel,kolvo)
{
	new maxslots,dob;
	new x = GetPVarInt(playerid,"PlayerHouse");
    if(!HInfo[x][hUl][2]) maxslots = 36;
	else maxslots = 72;
	for(new i = 0; i < maxslots; i++)
	{
  		if(HInfo[x][hInvSlot][i] == idmodel)
  		{
  		    if(HInfo[x][hInvKol][i]+kolvo > InvType[idmodel][invMax]) dob++;
  		    else dob = 0;
  		}
		if(!HInfo[x][hInvSlot][i]) dob = 0;
	}
	return dob;
}
stock GetFreeTrunk(x,idmodel,kolvo)
{
	new dob;
	for(new i = 0; i < 36; i++)
	{
  		if(BInfo[x][bInvSlot][i] == idmodel)
  		{
  		    if(BInfo[x][bInvKol][i]+kolvo > InvType[idmodel][invMax]) dob++;
  		    else dob = 0;
		}
		if(!BInfo[x][bInvSlot][i]) dob = 0;
	}
	return dob;
}
stock GetFree(playerid,idmodel,kolvo)
{
	new maxslots,dob;
    if(!PlayerInfo[playerid][pUl][2]) maxslots = 30;
	else maxslots = 66;
	for(new i = 0; i < maxslots; i++)
	{
  		if(InvInfo[playerid][iSlot][i] == idmodel)
 		{
 			if(InvInfo[playerid][iKol][i]+kolvo > InvType[idmodel][invMax]) dob++;
 			else dob = 0;
		}
		if(!InvInfo[playerid][iSlot][i]) dob = 0;
	}
	return dob;
}
stock IfHave(playerid,idmodel,kolvo)
{
	new maxslots;
	for(new i = 0; i < 66; i++)
	{
  		if(InvInfo[playerid][iSlot][i] != idmodel) continue;
		if(InvInfo[playerid][iKol][i] >= kolvo) dob = 1;
		else dob = 0;
	}
	return dob;
}
stock InvMinus(playerid,idmodel,kolvo)
{
	new maxslots;
    if(!PlayerInfo[playerid][pUl][2]) maxslots = 30;
	else maxslots = 66;
	new str[5];
    for(new i = 0; i < maxslots; i++)
	{
	    if(InvInfo[playerid][iSlot][i] != idmodel) continue;
	    InvInfo[playerid][iKol][i] -= kolvo;


		format(str,sizeof(str),"%d",InvInfo[playerid][iKol][i]);
		PlayerTextDrawSetString(playerid,InvAmm[playerid][i+6],str);
		switch(idmodel)
		{
		    case I_TIE: PlayerInfo[playerid][pTie] -= kolvo;
		    case I_MASK: PlayerInfo[playerid][pMask] -= kolvo;
		    case I_PHONE: PlayerInfo[playerid][pPhone] = 0;
		    case I_SMOKE: PlayerInfo[playerid][pSmoke] -= kolvo;
		    case I_HEAL: PlayerInfo[playerid][pApt] -= kolvo;
		    case I_KAN: PlayerInfo[playerid][pKan] -= kolvo;
		    case I_DRUGS: PlayerInfo[playerid][pDrugs] -= kolvo;
		    case I_CASE: PlayerInfo[playerid][pPriz] -= kolvo;
		    case I_TAXI: PlayerInfo[playerid][pShash] -= kolvo;
		    case I_MATS: PlayerInfo[playerid][pMats] -= kolvo;
		}
	    if(!InvInfo[playerid][iKol][i])
		{
			InvInfo[playerid][iSlot][i] = 0;
			if(GetPVarInt(playerid,"InvOpen") || GetPVarInt(playerid,"OpenHouse") || GetPVarInt(playerid,"OpenTrunk"))
			{
				PlayerTextDrawHide(playerid,InvAmm[playerid][i+6]);
				PlayerTextDrawHide(playerid,InventoryP[i+6][playerid]);
				PlayerTextDrawSetPreviewModel(playerid, InventoryP[i+6][playerid], InvType[0][invObj]);
				PlayerTextDrawSetPreviewRot(playerid, InventoryP[i+6][playerid], InvType[0][invRot][0], InvType[0][invRot][1], InvType[0][invRot][2], InvType[0][invRot][3]);
                PlayerTextDrawShow(playerid,InventoryP[i+6][playerid]);
			}
		}
	    break;
	}
	return 1;
}
stock InvTrunkMinus(x,idmodel,kolvo,playerid = INVALID_PLAYER_ID,slot = 0)
{
	new str[5];
    for(new i = 0; i < 36; i++)
	{
	    if(BInfo[x][bInvSlot][i] != idmodel) continue;
	    BInfo[x][bInvKol][i] -= kolvo;

		if(playerid != INVALID_PLAYER_ID)
		{
			format(str,sizeof(str),"%d",BInfo[x][bInvKol][i]);
			PlayerTextDrawSetString(playerid,InvAmm1[playerid][i],str);
		}

	    if(!BInfo[x][bInvKol][i])
		{
			BInfo[x][bInvSlot][i] = 0;
			if(playerid != INVALID_PLAYER_ID)
			{
				if(GetPVarInt(playerid,"InvOpen") || GetPVarInt(playerid,"OpenTrunk"))
				{
					PlayerTextDrawHide(playerid,InvAmm1[playerid][slot]);
					PlayerTextDrawHide(playerid,InventoryP1[slot][playerid]);
					PlayerTextDrawSetPreviewModel(playerid, InventoryP1[slot][playerid], InvType[0][invObj]);
					PlayerTextDrawSetPreviewRot(playerid, InventoryP1[slot][playerid], InvType[0][invRot][0], InvType[0][invRot][1], InvType[0][invRot][2], InvType[0][invRot][3]);
	                PlayerTextDrawShow(playerid,InventoryP1[slot][playerid]);
				}
			}
		}
	    break;
	}
	return 1;
}
stock InvHouseMinus(playerid,idmodel,kolvo,slot = 0)
{
	new maxslots;
	new x = GetPVarInt(playerid,"PlayerHouse");
	if(!HInfo[x][hUl][2]) maxslots = 36;
	else maxslots = 72;
	new str[5];
    for(new i = 0; i < maxslots; i++)
	{
	    if(HInfo[x][hInvSlot][i] != idmodel) continue;
	    HInfo[x][hInvKol][i] -= kolvo;


		format(str,sizeof(str),"%d",HInfo[x][hInvKol][i]);
		PlayerTextDrawSetString(playerid,InvAmm1[playerid][i],str);

	    if(!HInfo[x][hInvKol][i])
		{
			HInfo[x][hInvSlot][i] = 0;
			if(GetPVarInt(playerid,"InvOpen") || GetPVarInt(playerid,"OpenHouse"))
			{
				PlayerTextDrawHide(playerid,InvAmm1[playerid][slot]);
				PlayerTextDrawHide(playerid,InventoryP1[slot][playerid]);
				PlayerTextDrawSetPreviewModel(playerid, InventoryP1[slot][playerid], InvType[0][invObj]);
				PlayerTextDrawSetPreviewRot(playerid, InventoryP1[slot][playerid], InvType[0][invRot][0], InvType[0][invRot][1], InvType[0][invRot][2], InvType[0][invRot][3]);
                PlayerTextDrawShow(playerid,InventoryP1[slot][playerid]);
			}
		}
	    break;
	}
	return 1;
}
stock GiveTrunkInv(x,idmodel,kolvo,playerid = INVALID_PLAYER_ID)
{
	new dob;
	new raz;
	if(InvType[idmodel][invMax] > 1)
	{
	    for(new i = 0; i < 36; i++)
		{
		    if(BInfo[x][bInvSlot][i] != idmodel) continue;
		    if(kolvo+BInfo[x][bInvKol][i] > InvType[idmodel][invMax])
		    {
				raz = InvType[idmodel][invMax]-BInfo[x][bInvKol][i];
		        BInfo[x][bInvKol][i] += raz;
		        kolvo = kolvo-raz;
		    }
		    else BInfo[x][bInvKol][i] += kolvo,dob++;
            if(playerid != INVALID_PLAYER_ID && GetPVarInt(playerid,"OpenTrunk")) UpdateTrunkInventory(playerid,x,i);
		    break;
		}
	}
	if(!dob)
	{
	    for(new a = 0; a < 36; a++)
        {
            if(BInfo[x][bInvSlot][a]) continue;
            BInfo[x][bInvSlot][a] = idmodel;
            if(kolvo > InvType[idmodel][invMax])
			{
			    raz = InvType[idmodel][invMax];
				kolvo -= InvType[idmodel][invMax];
			}
            else
			{
			    raz = kolvo;
		 		kolvo = 0;
	 		}
			BInfo[x][bInvKol][a] += raz;
			if(playerid != INVALID_PLAYER_ID && GetPVarInt(playerid,"OpenTrunk"))  UpdateTrunkInventory(playerid,x,a,1);
			if(!kolvo) break;
        }
	}
	return 1;
}
stock UpdateTrunkInventory(playerid,x,cid = -1,dob = 0)
{
	PlayerTextDrawHide(playerid,InventoryP1[cid][playerid]);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[cid][playerid], InvType[BInfo[x][bInvSlot][cid]][invObj]);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[cid][playerid], InvType[BInfo[x][bInvSlot][cid]][invRot][0], InvType[BInfo[x][bInvSlot][cid]][invRot][1], InvType[BInfo[x][bInvSlot][cid]][invRot][2], InvType[BInfo[x][bInvSlot][cid]][invRot][3]);
	PlayerTextDrawShow(playerid,InventoryP1[cid][playerid]);
	if(dob) PlayerTextDrawShow(playerid,InvAmm1[playerid][cid]);
	new str[5];
	format(str,sizeof(str),"%d",BInfo[x][bInvKol][cid]);
	PlayerTextDrawSetString(playerid,InvAmm1[playerid][cid],str);
}
/*stock GiveTrunkInv(x,idmodel,kolvo,playerid = INVALID_PLAYER_ID)
{
	new dob,cid = -1;
	//new x = GetPVarInt(playerid,"Car");
	if(InvType[idmodel][invMax] > 1)
	{
	    for(new i = 0; i < 36; i++)
		{
		    if(BInfo[x][bInvSlot][i] != idmodel) continue;
	        BInfo[x][bInvKol][i]+= kolvo;
	        dob++;
			cid = i;
	        break;
		}
	}
	if(!dob)
	{
	    for(new i = 0; i < 36; i++)
		{
		    if(BInfo[x][bInvSlot][i]) continue;
	        BInfo[x][bInvSlot][i] = idmodel;
	        BInfo[x][bInvKol][i]+= kolvo;
	        cid = i;
	        break;
		}
	}
	if(playerid != INVALID_PLAYER_ID)
	{
		if(GetPVarInt(playerid,"OpenTrunk") && cid != -1)
		{
		    PlayerTextDrawHide(playerid,InventoryP1[cid][playerid]);
		  //  PlayerTextDrawBackgroundColor(playerid, InventoryP[cid+6][playerid], 0x8C8C8C00);
		    PlayerTextDrawSetPreviewModel(playerid, InventoryP1[cid][playerid], InvType[BInfo[x][bInvSlot][cid]][invObj]);
	 		PlayerTextDrawSetPreviewRot(playerid, InventoryP1[cid][playerid], InvType[BInfo[x][bInvSlot][cid]][invRot][0], InvType[BInfo[x][bInvSlot][cid]][invRot][1], InvType[BInfo[x][bInvSlot][cid]][invRot][2], InvType[BInfo[x][bInvSlot][cid]][invRot][3]);
	        PlayerTextDrawShow(playerid,InventoryP1[cid][playerid]);
			if(!dob) PlayerTextDrawShow(playerid,InvAmm1[playerid][cid]);
			new str[5];
			format(str,sizeof(str),"%d",BInfo[x][bInvKol][cid]);
			PlayerTextDrawSetString(playerid,InvAmm1[playerid][cid],str);
		}
	}
	return 1;
}*/
stock GiveHouseInv(playerid,idmodel,kolvo)
{
	new dob,maxslots;
	new raz;
	new x = GetPVarInt(playerid,"PlayerHouse");
	if(!HInfo[x][hUl][2]) maxslots = 36;
	else maxslots = 72;
	if(InvType[idmodel][invMax] > 1)
	{
	    for(new i = 0; i < maxslots; i++)
		{
		    if(HInfo[x][hInvSlot][i] != idmodel) continue;
		    if(kolvo+HInfo[x][hInvKol][i] > InvType[idmodel][invMax])
		    {
				raz = InvType[idmodel][invMax]-HInfo[x][hInvKol][i];
		        HInfo[x][hInvKol][i] += raz;
		        kolvo = kolvo-raz;
		    }
		    else HInfo[x][hInvKol][i] += kolvo,dob++;
            if(GetPVarInt(playerid,"OpenHouse")) UpdateHouseInventory(playerid,x,i);
		    break;
		}
	}
	if(!dob)
	{
	    for(new a = 0; a < maxslots; a++)
        {
            if(HInfo[x][hInvSlot][a]) continue;
            HInfo[x][hInvSlot][a] = idmodel;
            if(kolvo > InvType[idmodel][invMax])
			{
			    raz = InvType[idmodel][invMax];
				kolvo -= InvType[idmodel][invMax];
			}
            else
			{
			    raz = kolvo;
		 		kolvo = 0;
	 		}
			HInfo[x][hInvKol][a] += raz;
			if(GetPVarInt(playerid,"OpenHouse")) UpdateHouseInventory(playerid,x,a,1);
			if(!kolvo) break;
        }
	}
	return 1;
}
stock UpdateHouseInventory(playerid,x,cid = -1,dob = 0)
{
    if(cid > 35)
	{
	    if(!GetPVarInt(playerid,"InvS")) return 1;
		cid -= 36;
	}
	PlayerTextDrawHide(playerid,InventoryP1[cid][playerid]);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[cid][playerid], InvType[HInfo[x][hInvSlot][cid]][invObj]);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[cid][playerid], InvType[HInfo[x][hInvSlot][cid]][invRot][0], InvType[HInfo[x][hInvSlot][cid]][invRot][1], InvType[HInfo[x][hInvSlot][cid]][invRot][2], InvType[HInfo[x][hInvSlot][cid]][invRot][3]);
	PlayerTextDrawShow(playerid,InventoryP1[cid][playerid]);
	if(dob) PlayerTextDrawShow(playerid,InvAmm1[playerid][cid]);
	new str[5];
	format(str,sizeof(str),"%d",HInfo[x][hInvKol][cid]);
	PlayerTextDrawSetString(playerid,InvAmm1[playerid][cid],str);
	return 1;
}
stock InvTorgMinus(playerid,idmodel,kolvo)
{
	new minfor,maxfor;
	if(GetPVarInt(playerid,"OpenTorg")) minfor = 0,maxfor = 36;
    else if(GetPVarInt(playerid,"OpenBlackTorg")) minfor = 36; maxfor = 72;
	new str[5];
    for(new i = minfor; i < maxfor; i++)
	{
	    if(TorgInfo[tSlot][i] != idmodel) continue;
	    TorgInfo[tKol][i] -= kolvo;
		format(str,sizeof(str),"%d",TorgInfo[tKol][i]);
		PlayerTextDrawSetString(playerid,InvAmm1[playerid][i],str);
	    if(!TorgInfo[tKol][i])
		{
			TorgInfo[tSlot][i] = 0;
			if(GetPVarInt(playerid,"InvOpen") || GetPVarInt(playerid,"OpenTorg") || GetPVarInt(playerid,"OpenBlackTorg"))
			{
				PlayerTextDrawHide(playerid,InvAmm1[playerid][i]);
				PlayerTextDrawHide(playerid,InventoryP1[i][playerid]);
				PlayerTextDrawSetPreviewModel(playerid, InventoryP1[i][playerid], InvType[0][invObj]);
				PlayerTextDrawSetPreviewRot(playerid, InventoryP1[i][playerid], InvType[0][invRot][0], InvType[0][invRot][1], InvType[0][invRot][2], InvType[0][invRot][3]);
                PlayerTextDrawShow(playerid,InventoryP1[i][playerid]);
			}
		}
	    break;
	}
	return 1;
}
stock GetTorgFree(playerid,idmodel,kolvo)
{
	new dob;
	new minfor,maxfor;
	if(GetPVarInt(playerid,"OpenTorg")) minfor = 0,maxfor = 36;
    else if(GetPVarInt(playerid,"OpenBlackTorg")) minfor = 36; maxfor = 72;
	for(new i = minfor; i < maxfor; i++)
	{
  		if(TorgInfo[tSlot][i] == idmodel)
 		{

 			if(TorgInfo[tKol][i]+kolvo > InvType[idmodel][invMax])
			{
			    if(TorgInfo[tIDacc][i] != PlayerInfo[playerid][pID]) dob = 0;
		 		else dob++;
			}
 			else dob = 0;
		}
		if(!TorgInfo[tSlot][i]) dob = 0;
	}
	return dob;
}
stock SaveTorg(i)
{
    query = "";
	format(query,sizeof(query),"UPDATE `torg` SET `price` = '%d',`slot` = '%d',`kol` = '%d' \
	,`idacc` = '%d' WHERE id = '%d' LIMIT 1",TorgInfo[tPrice][i],TorgInfo[tSlot][i],TorgInfo[tKol][i],
	TorgInfo[tIDacc][i],TorgInfo[tID][i]);
	mysql_tquery(mysql,query);
	return 1;
}
stock GiveTorgInv(playerid,idmodel,kolvo,cena = 0)
{
	new dob,raz;
	new minfor,maxfor;
    if(GetPVarInt(playerid,"OpenTorg")) minfor = 0,maxfor = 36;
    else if(GetPVarInt(playerid,"OpenBlackTorg")) minfor = 36; maxfor = 72;
	if(InvType[idmodel][invMax] > 1)
	{
	    for(new i = minfor; i < maxfor; i++)
		{
		    if(TorgInfo[tSlot][i] != idmodel) continue;
		    if(TorgInfo[tIDacc][i] != PlayerInfo[playerid][pID]) continue;
		    if(cena && TorgInfo[tPrice][i] != cena) continue;
		    if(kolvo+TorgInfo[tKol][i] > InvType[idmodel][invMax])
		    {
				raz = InvType[idmodel][invMax]-TorgInfo[tKol][i];
		        TorgInfo[tKol][i] += raz;
		        kolvo = kolvo-raz;
		    }
		    else TorgInfo[tKol][i] += kolvo,dob++;
		    SaveTorg(i);
            if(GetPVarInt(playerid,"OpenTorg") || GetPVarInt(playerid,"OpenBlackTorg")) UpdateTorgInventory(playerid,i);
		    break;
		}
	}
	if(!dob)
	{
	    for(new a = minfor; a < maxfor; a++)
        {
            if(TorgInfo[tSlot][a]) continue;
            TorgInfo[tSlot][a] = idmodel;
            TorgInfo[tPrice][a] = cena;
            TorgInfo[tIDacc][a] = PlayerInfo[playerid][pID];
            if(kolvo > InvType[idmodel][invMax])
			{
			    raz = InvType[idmodel][invMax];
				kolvo -= InvType[idmodel][invMax];
			}
            else
			{
			    raz = kolvo;
		 		kolvo = 0;
	 		}
			TorgInfo[tKol][a] += raz;
			SaveTorg(a);
			if(GetPVarInt(playerid,"OpenTorg") || GetPVarInt(playerid,"OpenBlackTorg"))  UpdateTorgInventory(playerid,a,1);
			if(!kolvo) break;
        }
	}
	return 1;
}
stock UpdateTorgInventory(playerid,cid = -1,dob = 0)
{
	PlayerTextDrawHide(playerid,InventoryP1[cid][playerid]);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[cid][playerid], InvType[TorgInfo[tSlot][cid]][invObj]);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[cid][playerid], InvType[TorgInfo[tSlot][cid]][invRot][0], InvType[TorgInfo[tSlot][cid]][invRot][1], InvType[TorgInfo[tSlot][cid]][invRot][2], InvType[TorgInfo[tSlot][cid]][invRot][3]);
	PlayerTextDrawShow(playerid,InventoryP1[cid][playerid]);
	if(dob) PlayerTextDrawShow(playerid,InvAmm1[playerid][cid]);
	new str[5];
	format(str,sizeof(str),"%d",TorgInfo[tKol][cid]);
	PlayerTextDrawSetString(playerid,InvAmm1[playerid][cid],str);
}

/*stock GiveHouseInv(playerid,idmodel,kolvo)
{
	new dob,maxslots,cid = -1;
	new x = GetPVarInt(playerid,"PlayerHouse");
	if(!HInfo[x][hUl][2]) maxslots = 36;
	else maxslots = 72;
	if(InvType[idmodel][invMax] > 1)
	{
	    for(new i = 0; i < maxslots; i++)
		{
		    if(HInfo[x][hInvSlot][i] != idmodel) continue;
	        HInfo[x][hInvKol][i]+= kolvo;
	        dob++;
			cid = i;
	        break;
		}
	}
	if(!dob)
	{
	    for(new i = 0; i < maxslots; i++)
		{
		    if(HInfo[x][hInvSlot][i]) continue;
	        HInfo[x][hInvSlot][i] = idmodel;
	        HInfo[x][hInvKol][i]+= kolvo;
	        cid = i;
	        break;
		}
	}
	if(GetPVarInt(playerid,"OpenHouse") && cid != -1)
	{
	    PlayerTextDrawHide(playerid,InventoryP1[cid][playerid]);
	  //  PlayerTextDrawBackgroundColor(playerid, InventoryP[cid+6][playerid], 0x8C8C8C00);
	    PlayerTextDrawSetPreviewModel(playerid, InventoryP1[cid][playerid], InvType[HInfo[x][hInvSlot][cid]][invObj]);
 		PlayerTextDrawSetPreviewRot(playerid, InventoryP1[cid][playerid], InvType[HInfo[x][hInvSlot][cid]][invRot][0], InvType[HInfo[x][hInvSlot][cid]][invRot][1], InvType[HInfo[x][hInvSlot][cid]][invRot][2], InvType[HInfo[x][hInvSlot][cid]][invRot][3]);
        PlayerTextDrawShow(playerid,InventoryP1[cid][playerid]);
		if(!dob) PlayerTextDrawShow(playerid,InvAmm1[playerid][cid]);
		new str[5];
		format(str,sizeof(str),"%d",HInfo[x][hInvKol][cid]);
		PlayerTextDrawSetString(playerid,InvAmm1[playerid][cid],str);
	}
	return 1;
}*/

/*stock GiveInv(playerid,idmodel,kolvo)
{
	new dob,maxslots,cid = -1;
	if(!PlayerInfo[playerid][pUl][2]) maxslots = 30;
	else maxslots = 66;
	printf("1 | GiveInv %d %d",idmodel,kolvo);
	if(InvType[idmodel][invMax] > 1)
	{
	    printf("2 | GiveInv %d %d",idmodel,kolvo);
	    for(new i = 0; i < maxslots; i++)
		{
		    if(InvInfo[playerid][iSlot][i] != idmodel) continue;
		    if(kolvo > InvType[idmodel][invMax])
		    {
		        printf("3 | GiveInv %d %d",idmodel,kolvo);
				InvInfo[playerid][iKol][i]+= InvType[idmodel][invMax];
				GiveInv(playerid,idmodel,kolvo-InvType[idmodel][invMax]);
		    }
			else
			{
			    printf("4 | GiveInv %d %d",idmodel,kolvo);
		        InvInfo[playerid][iKol][i]+= kolvo;
	        }
	        dob++;
			cid = i;
	        break;
		}
	}
	if(!dob)
	{
	    for(new i = 0; i < maxslots; i++)
		{
		    if(InvInfo[playerid][iSlot][i]) continue;
		    if(kolvo > InvType[idmodel][invMax])
		    {
				GiveInv(playerid,idmodel,kolvo-InvType[idmodel][invMax]);
				kolvo = InvType[idmodel][invMax];
		    }
	        InvInfo[playerid][iSlot][i] = idmodel;
	        InvInfo[playerid][iKol][i]+= kolvo;

	        cid = i;
	        break;
		}
	}
	if((GetPVarInt(playerid,"InvOpen") || GetPVarInt(playerid,"OpenHouse") || GetPVarInt(playerid,"OpenTrunk")) && cid != -1)
	{
	    PlayerTextDrawHide(playerid,InventoryP[cid+6][playerid]);
	  //  PlayerTextDrawBackgroundColor(playerid, InventoryP[cid+6][playerid], 0x8C8C8C00);
	    PlayerTextDrawSetPreviewModel(playerid, InventoryP[cid+6][playerid], InvType[InvInfo[playerid][iSlot][cid]][invObj]);
 		PlayerTextDrawSetPreviewRot(playerid, InventoryP[cid+6][playerid], InvType[InvInfo[playerid][iSlot][cid]][invRot][0], InvType[InvInfo[playerid][iSlot][cid]][invRot][1], InvType[InvInfo[playerid][iSlot][cid]][invRot][2], InvType[InvInfo[playerid][iSlot][cid]][invRot][3]);
        PlayerTextDrawShow(playerid,InventoryP[cid+6][playerid]);
        if(!dob) PlayerTextDrawShow(playerid,InvAmm[playerid][cid+6]);
		new str[5];
		format(str,sizeof(str),"%d",InvInfo[playerid][iKol][cid]);
		PlayerTextDrawSetString(playerid,InvAmm[playerid][cid+6],str);
	}
	return 1;
}*/
stock GiveInv(playerid,idmodel,kolvo)
{
	new dob,maxslots,raz;
	if(!PlayerInfo[playerid][pUl][2]) maxslots = 30;
	else maxslots = 66;
	if(InvType[idmodel][invMax] > 1)
	{
	    for(new i = 0; i < maxslots; i++)
		{
		    if(InvInfo[playerid][iSlot][i] != idmodel) continue;
		    if(kolvo+InvInfo[playerid][iKol][i] > InvType[idmodel][invMax])
		    {
				raz = InvType[idmodel][invMax]-InvInfo[playerid][iKol][i];
		        InvInfo[playerid][iKol][i] += raz;
		        kolvo = kolvo-raz;
		    }
		    else InvInfo[playerid][iKol][i] += kolvo,dob++;
            if(GetPVarInt(playerid,"InvOpen") || GetPVarInt(playerid,"OpenHouse") || GetPVarInt(playerid,"OpenTrunk")) UpdateInventory(playerid,i);
		    break;
		}
	}
	if(!dob)
	{
	    for(new a = 0; a < maxslots; a++)
        {
            if(InvInfo[playerid][iSlot][a]) continue;
            InvInfo[playerid][iSlot][a] = idmodel;
            if(kolvo > InvType[idmodel][invMax])
			{
			    raz = InvType[idmodel][invMax];
				kolvo -= InvType[idmodel][invMax];
			}
            else
			{
			    raz = kolvo;
		 		kolvo = 0;
	 		}
			InvInfo[playerid][iKol][a] += raz;
			if(GetPVarInt(playerid,"InvOpen") || GetPVarInt(playerid,"OpenHouse") || GetPVarInt(playerid,"OpenTrunk")) UpdateInventory(playerid,a,1);
			if(!kolvo) break;
        }
	}
	return 1;
}
stock UpdateInventory(playerid,cid = -1,dob  = 0)
{
    if((GetPVarInt(playerid,"InvOpen") || GetPVarInt(playerid,"OpenHouse") || GetPVarInt(playerid,"OpenTrunk")) && cid != -1)
	{

	    if(cid > 29)
		{
		    if(!GetPVarInt(playerid,"InvS")) return 1;
			cid -= 30;
		}
	    else cid += 6;
	    
	    PlayerTextDrawHide(playerid,InventoryP[cid][playerid]);
	  //  PlayerTextDrawBackgroundColor(playerid, InventoryP[cid][playerid], 0x8C8C8C00);
	    PlayerTextDrawSetPreviewModel(playerid, InventoryP[cid][playerid], InvType[InvInfo[playerid][iSlot][cid]][invObj]);
 		PlayerTextDrawSetPreviewRot(playerid, InventoryP[cid][playerid], InvType[InvInfo[playerid][iSlot][cid]][invRot][0], InvType[InvInfo[playerid][iSlot][cid]][invRot][1], InvType[InvInfo[playerid][iSlot][cid]][invRot][2], InvType[InvInfo[playerid][iSlot][cid]][invRot][3]);
        PlayerTextDrawShow(playerid,InventoryP[cid][playerid]);
        if(dob) PlayerTextDrawShow(playerid,InvAmm[playerid][cid]);
		new str[5];
		format(str,sizeof(str),"%d",InvInfo[playerid][iKol][cid]);
		PlayerTextDrawSetString(playerid,InvAmm[playerid][cid],str);
	}
	return 1;
}










stock CreateTrunk(playerid)
{
	InvAmm1[playerid][0] = CreatePlayerTextDraw(playerid,151.833175, 164.970321, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][0], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][0], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][0], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][0], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][0], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][0], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][0], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][0], 1);
	InvAmm1[playerid][1] = CreatePlayerTextDraw(playerid,185.166397, 164.970321, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][1], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][1], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][1], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][1], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][1], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][1], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][1], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][1], 1);
	InvAmm1[playerid][2] = CreatePlayerTextDraw(playerid,218.666397, 164.970321, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][2], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][2], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][2], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][2], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][2], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][2], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][2], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][2], 1);
	InvAmm1[playerid][3] = CreatePlayerTextDraw(playerid,251.999740, 164.970321, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][3], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][3], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][3], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][3], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][3], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][3], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][3], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][3], 1);
	InvAmm1[playerid][4] = CreatePlayerTextDraw(playerid,285.166381, 164.970306, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][4], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][4], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][4], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][4], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][4], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][4], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][4], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][4], 1);
	InvAmm1[playerid][5] = CreatePlayerTextDraw(playerid,318.499755, 164.970336, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][5], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][5], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][5], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][5], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][5], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][5], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][5], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][5], 1);
	InvAmm1[playerid][6] = CreatePlayerTextDraw(playerid,151.833114, 206.037033, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][6], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][6], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][6], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][6], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][6], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][6], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][6], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][6], 1);
	InvAmm1[playerid][7] = CreatePlayerTextDraw(playerid,185.166458, 206.037017, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][7], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][7], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][7], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][7], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][7], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][7], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][7], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][7], 1);
	InvAmm1[playerid][8] = CreatePlayerTextDraw(playerid,218.666549, 205.951828, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][8], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][8], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][8], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][8], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][8], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][8], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][8], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][8], 1);
	InvAmm1[playerid][9] = CreatePlayerTextDraw(playerid,251.999862, 206.037033, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][9], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][9], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][9], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][9], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][9], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][9], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][9], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][9], 1);
	InvAmm1[playerid][10] = CreatePlayerTextDraw(playerid,285.333312, 206.037048, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][10], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][10], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][10], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][10], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][10], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][10], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][10], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][10], 1);
	InvAmm1[playerid][11] = CreatePlayerTextDraw(playerid,318.666564, 206.037048, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][11], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][11], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][11], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][11], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][11], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][11], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][11], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][11], 1);
	InvAmm1[playerid][12] = CreatePlayerTextDraw(playerid,151.999862, 247.018569, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][12], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][12], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][12], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][12], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][12], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][12], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][12], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][12], 1);
	InvAmm1[playerid][13] = CreatePlayerTextDraw(playerid,185.333206, 247.018585, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][13], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][13], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][13], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][13], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][13], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][13], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][13], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][13], 1);
	InvAmm1[playerid][14] = CreatePlayerTextDraw(playerid,218.666519, 247.018554, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][14], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][14], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][14], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][14], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][14], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][14], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][14], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][14], 1);
	InvAmm1[playerid][15] = CreatePlayerTextDraw(playerid,251.999740, 247.018554, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][15], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][15], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][15], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][15], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][15], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][15], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][15], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][15], 1);
	InvAmm1[playerid][16] = CreatePlayerTextDraw(playerid,285.333038, 247.018554, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][16], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][16], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][16], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][16], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][16], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][16], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][16], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][16], 1);
	InvAmm1[playerid][17] = CreatePlayerTextDraw(playerid,318.666381, 246.933395, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][17], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][17], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][17], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][17], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][17], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][17], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][17], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][17], 1);
	InvAmm1[playerid][18] = CreatePlayerTextDraw(playerid,151.999679, 288.085266, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][18], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][18], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][18], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][18], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][18], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][18], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][18], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][18], 1);
	InvAmm1[playerid][19] = CreatePlayerTextDraw(playerid,185.332992, 288.085266, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][19], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][19], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][19], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][19], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][19], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][19], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][19], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][19], 1);
	InvAmm1[playerid][20] = CreatePlayerTextDraw(playerid,218.666366, 288.085266, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][20], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][20], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][20], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][20], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][20], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][20], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][20], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][20], 1);
	InvAmm1[playerid][21] = CreatePlayerTextDraw(playerid,251.999740, 288.000091, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][21], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][21], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][21], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][21], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][21], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][21], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][21], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][21], 1);
	InvAmm1[playerid][22] = CreatePlayerTextDraw(playerid,285.332885, 288.000061, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][22], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][22], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][22], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][22], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][22], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][22], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][22], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][22], 1);
	InvAmm1[playerid][23] = CreatePlayerTextDraw(playerid,318.666168, 288.000061, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][23], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][23], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][23], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][23], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][23], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][23], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][23], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][23], 1);
	InvAmm1[playerid][24] = CreatePlayerTextDraw(playerid,151.999588, 329.066711, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][24], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][24], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][24], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][24], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][24], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][24], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][24], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][24], 1);
	InvAmm1[playerid][25] = CreatePlayerTextDraw(playerid,185.332901, 329.066619, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][25], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][25], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][25], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][25], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][25], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][25], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][25], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][25], 1);
	InvAmm1[playerid][26] = CreatePlayerTextDraw(playerid,218.666366, 329.066589, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][26], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][26], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][26], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][26], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][26], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][26], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][26], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][26], 1);
	InvAmm1[playerid][27] = CreatePlayerTextDraw(playerid,251.999649, 329.066589, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][27], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][27], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][27], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][27], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][27], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][27], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][27], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][27], 1);
	InvAmm1[playerid][28] = CreatePlayerTextDraw(playerid,285.166290, 329.066619, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][28], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][28], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][28], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][28], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][28], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][28], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][28], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][28], 1);
	InvAmm1[playerid][29] = CreatePlayerTextDraw(playerid,318.666229, 329.396179, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][29], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][29], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][29], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][29], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][29], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][29], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][29], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][29], 1);
	InvAmm1[playerid][30] = CreatePlayerTextDraw(playerid,151.999557, 370.133209, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][30], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][30], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][30], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][30], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][30], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][30], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][30], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][30], 1);
	InvAmm1[playerid][31] = CreatePlayerTextDraw(playerid,185.332839, 370.133178, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][31], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][31], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][31], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][31], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][31], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][31], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][31], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][31], 1);
	InvAmm1[playerid][32] = CreatePlayerTextDraw(playerid,218.666244, 370.133178, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][32], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][32], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][32], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][32], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][32], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][32], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][32], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][32], 1);
	InvAmm1[playerid][33] = CreatePlayerTextDraw(playerid,251.999496, 370.133148, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][33], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][33], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][33], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][33], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][33], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][33], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][33], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][33], 1);
	InvAmm1[playerid][34] = CreatePlayerTextDraw(playerid,285.166107, 370.133117, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][34], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][34], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][34], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][34], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][34], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][34], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][34], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][34], 1);
	InvAmm1[playerid][35] = CreatePlayerTextDraw(playerid,318.666137, 370.133117, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm1[playerid][35], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm1[playerid][35], 3);
	PlayerTextDrawColor(playerid,InvAmm1[playerid][35], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm1[playerid][35], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm1[playerid][35], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm1[playerid][35], 51);
	PlayerTextDrawFont(playerid,InvAmm1[playerid][35], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm1[playerid][35], 1);
	InventoryP1[0][playerid] = CreatePlayerTextDraw(playerid, 323.499908-202.666717, 134.644454, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[0][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[0][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[0][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[0][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[0][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[0][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[0][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[0][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[0][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[0][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[0][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[0][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[0][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[1][playerid] = CreatePlayerTextDraw(playerid, 356.833129-202.666717, 134.644454, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[1][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[1][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[1][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[1][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[1][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[1][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[1][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[1][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[1][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[1][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[1][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[1][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[1][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[2][playerid] = CreatePlayerTextDraw(playerid, 390.333129-202.666717, 134.644454, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[2][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[2][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[2][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[2][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[2][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[2][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[2][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[2][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[2][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[2][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[2][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[2][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[2][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[3][playerid] = CreatePlayerTextDraw(playerid, 423.666473-202.666717, 134.644454, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[3][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[3][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[3][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[3][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[3][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[3][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[3][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[3][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[3][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[3][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[3][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[3][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[3][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[4][playerid] = CreatePlayerTextDraw(playerid, 456.833129-202.666717, 134.644439, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[4][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[4][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[4][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[4][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[4][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[4][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[4][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[4][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[4][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[4][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[4][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[4][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[4][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[5][playerid] = CreatePlayerTextDraw(playerid, 490.166503-202.666717, 134.644470, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[5][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[5][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[5][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[5][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[5][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[5][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[5][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[5][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[5][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[5][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[5][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[5][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[5][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[6][playerid] = CreatePlayerTextDraw(playerid, 323.499847-202.666717, 175.711166, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[6][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[6][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[6][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[6][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[6][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[6][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[6][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[6][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[6][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[6][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[6][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[6][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[6][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[7][playerid] = CreatePlayerTextDraw(playerid, 356.833190-202.666717, 175.711151, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[7][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[7][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[7][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[7][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[7][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[7][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[7][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[7][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[7][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[7][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[7][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[7][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[7][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[8][playerid] = CreatePlayerTextDraw(playerid, 390.333282-202.666717, 175.625961, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[8][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[8][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[8][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[8][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[8][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[8][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[8][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[8][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[8][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[8][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[8][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[8][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[8][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[9][playerid] = CreatePlayerTextDraw(playerid, 423.666595-202.666717, 175.711166, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[9][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[9][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[9][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[9][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[9][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[9][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[9][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[9][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[9][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[9][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[9][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[9][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[9][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[10][playerid] = CreatePlayerTextDraw(playerid, 457.000061-202.666717, 175.711181, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[10][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[10][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[10][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[10][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[10][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[10][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[10][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[10][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[10][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[10][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[10][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[10][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[10][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[11][playerid] = CreatePlayerTextDraw(playerid, 490.333312-202.666717, 175.711181, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[11][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[11][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[11][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[11][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[11][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[11][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[11][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[11][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[11][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[11][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[11][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[11][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[11][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[12][playerid] = CreatePlayerTextDraw(playerid, 323.666595-202.666717, 216.692703, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[12][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[12][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[12][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[12][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[12][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[12][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[12][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[12][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[12][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[12][playerid], 5);
	PlayerTextDrawSetProportional(playerid, InventoryP1[12][playerid], 1);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[12][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[12][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[12][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[13][playerid] = CreatePlayerTextDraw(playerid, 356.999938-202.666717, 216.692718, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[13][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[13][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[13][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[13][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[13][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[13][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[13][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[13][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[13][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[13][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[13][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[13][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[13][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[14][playerid] = CreatePlayerTextDraw(playerid, 390.333251-202.666717, 216.692687, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[14][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[14][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[14][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[14][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[14][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[14][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[14][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[14][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[14][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[14][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[14][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[14][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[14][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[15][playerid] = CreatePlayerTextDraw(playerid, 423.666473-202.666717, 216.692687, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[15][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[15][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[15][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[15][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[15][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[15][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[15][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[15][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[15][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[15][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[15][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[15][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[15][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[16][playerid] = CreatePlayerTextDraw(playerid, 456.999786-202.666717, 216.692687, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[16][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[16][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[16][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[16][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[16][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[16][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[16][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[16][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[16][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[16][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[16][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[16][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[16][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[17][playerid] = CreatePlayerTextDraw(playerid, 490.333129-202.666717, 216.607528, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[17][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[17][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[17][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[17][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[17][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[17][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[17][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[17][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[17][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[17][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[17][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[17][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[17][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[18][playerid] = CreatePlayerTextDraw(playerid, 323.666412-202.666717, 257.759399, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[18][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[18][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[18][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[18][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[18][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[18][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[18][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[18][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[18][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[18][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[18][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[18][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[18][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[19][playerid] = CreatePlayerTextDraw(playerid, 356.999725-202.666717, 257.759399, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[19][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[19][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[19][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[19][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[19][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[19][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[19][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[19][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[19][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[19][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[19][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[19][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[19][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[20][playerid] = CreatePlayerTextDraw(playerid, 390.333099-202.666717, 257.759399, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[20][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[20][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[20][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[20][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[20][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[20][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[20][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[20][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[20][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[20][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[20][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[20][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[20][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[21][playerid] = CreatePlayerTextDraw(playerid, 423.666473-202.666717, 257.674224, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[21][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[21][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[21][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[21][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[21][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[21][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[21][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[21][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[21][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[21][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[21][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[21][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[21][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[22][playerid] = CreatePlayerTextDraw(playerid, 456.999633-202.666717, 257.674194, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[22][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[22][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[22][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[22][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[22][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[22][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[22][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[22][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[22][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[22][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[22][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[22][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[22][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[23][playerid] = CreatePlayerTextDraw(playerid, 490.332916-202.666717, 257.674194, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[23][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[23][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[23][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[23][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[23][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[23][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[23][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[23][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[23][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[23][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[23][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[23][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[23][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[24][playerid] = CreatePlayerTextDraw(playerid, 323.666320-202.666717, 298.740844, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[24][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[24][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[24][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[24][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[24][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[24][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[24][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[24][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[24][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[24][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[24][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[24][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[24][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[25][playerid] = CreatePlayerTextDraw(playerid, 356.999633-202.666717, 298.740753, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[25][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[25][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[25][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[25][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[25][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[25][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[25][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[25][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[25][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[25][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[25][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[25][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[25][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[26][playerid] = CreatePlayerTextDraw(playerid, 390.333099-202.666717, 298.740722, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[26][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[26][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[26][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[26][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[26][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[26][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[26][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[26][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[26][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[26][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[26][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[26][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[26][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[27][playerid] = CreatePlayerTextDraw(playerid, 423.666381-202.666717, 298.740722, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[27][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[27][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[27][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[27][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[27][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[27][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[27][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[27][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[27][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[27][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[27][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[27][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[27][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[28][playerid] = CreatePlayerTextDraw(playerid, 456.833038-202.666717, 298.740753, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[28][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[28][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[28][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[28][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[28][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[28][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[28][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[28][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[28][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[28][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[28][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[28][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[28][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[29][playerid] = CreatePlayerTextDraw(playerid, 490.332977-202.666717, 299.070312, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[29][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[29][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[29][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[29][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[29][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[29][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[29][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[29][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[29][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[29][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[29][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[29][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[29][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[30][playerid] = CreatePlayerTextDraw(playerid, 323.666290-202.666717, 339.807342, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[30][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[30][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[30][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[30][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[30][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[30][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[30][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[30][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[30][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[30][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[30][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[30][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[30][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[31][playerid] = CreatePlayerTextDraw(playerid, 356.999572-202.666717, 339.807312, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[31][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[31][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[31][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[31][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[31][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[31][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[31][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[31][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[31][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[31][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[31][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[31][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[31][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[32][playerid] = CreatePlayerTextDraw(playerid, 390.332977-202.666717, 339.807312, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[32][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[32][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[32][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[32][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[32][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[32][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[32][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[32][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[32][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[32][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[32][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[32][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[32][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[33][playerid] = CreatePlayerTextDraw(playerid, 423.666229-202.666717, 339.807281, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[33][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[33][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[33][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[33][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[33][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[33][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[33][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[33][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[33][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[33][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[33][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[33][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[33][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[34][playerid] = CreatePlayerTextDraw(playerid, 456.832855-202.666717, 339.807250, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[34][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[34][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[34][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[34][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[34][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[34][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[34][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[34][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[34][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[34][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[34][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[34][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[34][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP1[35][playerid] = CreatePlayerTextDraw(playerid, 490.332885-202.666717, 339.807250, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP1[35][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP1[35][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP1[35][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP1[35][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP1[35][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP1[35][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP1[35][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP1[35][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP1[35][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP1[35][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP1[35][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP1[35][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP1[35][playerid], 0.000000, 0.000000, 0.000000, 1.000000);
}


stock CreateInv(playerid)
{
    InventoryP[0][playerid] = CreatePlayerTextDraw(playerid, 323.499908, 134.644454, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[0][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[0][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[0][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[0][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[0][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[0][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[0][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[0][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[0][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[0][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[0][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[0][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[0][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[1][playerid] = CreatePlayerTextDraw(playerid, 356.833129, 134.644454, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[1][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[1][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[1][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[1][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[1][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[1][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[1][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[1][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[1][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[1][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[1][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[1][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[1][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[2][playerid] = CreatePlayerTextDraw(playerid, 390.333129, 134.644454, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[2][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[2][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[2][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[2][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[2][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[2][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[2][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[2][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[2][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[2][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[2][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[2][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[2][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[3][playerid] = CreatePlayerTextDraw(playerid, 423.666473, 134.644454, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[3][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[3][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[3][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[3][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[3][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[3][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[3][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[3][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[3][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[3][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[3][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[3][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[3][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[4][playerid] = CreatePlayerTextDraw(playerid, 456.833129, 134.644439, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[4][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[4][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[4][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[4][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[4][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[4][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[4][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[4][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[4][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[4][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[4][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[4][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[4][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[5][playerid] = CreatePlayerTextDraw(playerid, 490.166503, 134.644470, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[5][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[5][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[5][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[5][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[5][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[5][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[5][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[5][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[5][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[5][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[5][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[5][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[5][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[6][playerid] = CreatePlayerTextDraw(playerid, 323.499847, 175.711166, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[6][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[6][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[6][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[6][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[6][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[6][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[6][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[6][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[6][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[6][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[6][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[6][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[6][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[7][playerid] = CreatePlayerTextDraw(playerid, 356.833190, 175.711151, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[7][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[7][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[7][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[7][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[7][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[7][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[7][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[7][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[7][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[7][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[7][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[7][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[7][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[8][playerid] = CreatePlayerTextDraw(playerid, 390.333282, 175.625961, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[8][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[8][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[8][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[8][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[8][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[8][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[8][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[8][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[8][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[8][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[8][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[8][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[8][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[9][playerid] = CreatePlayerTextDraw(playerid, 423.666595, 175.711166, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[9][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[9][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[9][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[9][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[9][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[9][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[9][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[9][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[9][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[9][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[9][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[9][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[9][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[10][playerid] = CreatePlayerTextDraw(playerid, 457.000061, 175.711181, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[10][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[10][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[10][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[10][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[10][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[10][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[10][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[10][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[10][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[10][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[10][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[10][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[10][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[11][playerid] = CreatePlayerTextDraw(playerid, 490.333312, 175.711181, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[11][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[11][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[11][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[11][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[11][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[11][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[11][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[11][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[11][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[11][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[11][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[11][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[11][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[12][playerid] = CreatePlayerTextDraw(playerid, 323.666595, 216.692703, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[12][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[12][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[12][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[12][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[12][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[12][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[12][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[12][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[12][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[12][playerid], 5);
	PlayerTextDrawSetProportional(playerid, InventoryP[12][playerid], 1);
	PlayerTextDrawSetSelectable(playerid, InventoryP[12][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[12][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[12][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[13][playerid] = CreatePlayerTextDraw(playerid, 356.999938, 216.692718, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[13][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[13][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[13][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[13][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[13][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[13][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[13][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[13][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[13][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[13][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[13][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[13][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[13][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[14][playerid] = CreatePlayerTextDraw(playerid, 390.333251, 216.692687, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[14][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[14][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[14][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[14][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[14][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[14][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[14][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[14][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[14][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[14][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[14][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[14][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[14][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[15][playerid] = CreatePlayerTextDraw(playerid, 423.666473, 216.692687, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[15][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[15][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[15][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[15][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[15][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[15][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[15][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[15][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[15][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[15][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[15][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[15][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[15][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[16][playerid] = CreatePlayerTextDraw(playerid, 456.999786, 216.692687, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[16][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[16][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[16][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[16][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[16][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[16][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[16][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[16][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[16][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[16][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[16][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[16][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[16][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[17][playerid] = CreatePlayerTextDraw(playerid, 490.333129, 216.607528, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[17][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[17][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[17][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[17][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[17][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[17][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[17][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[17][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[17][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[17][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[17][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[17][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[17][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[18][playerid] = CreatePlayerTextDraw(playerid, 323.666412, 257.759399, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[18][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[18][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[18][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[18][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[18][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[18][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[18][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[18][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[18][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[18][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[18][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[18][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[18][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[19][playerid] = CreatePlayerTextDraw(playerid, 356.999725, 257.759399, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[19][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[19][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[19][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[19][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[19][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[19][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[19][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[19][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[19][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[19][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[19][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[19][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[19][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[20][playerid] = CreatePlayerTextDraw(playerid, 390.333099, 257.759399, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[20][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[20][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[20][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[20][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[20][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[20][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[20][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[20][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[20][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[20][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[20][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[20][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[20][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[21][playerid] = CreatePlayerTextDraw(playerid, 423.666473, 257.674224, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[21][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[21][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[21][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[21][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[21][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[21][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[21][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[21][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[21][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[21][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[21][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[21][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[21][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[22][playerid] = CreatePlayerTextDraw(playerid, 456.999633, 257.674194, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[22][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[22][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[22][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[22][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[22][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[22][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[22][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[22][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[22][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[22][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[22][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[22][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[22][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[23][playerid] = CreatePlayerTextDraw(playerid, 490.332916, 257.674194, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[23][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[23][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[23][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[23][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[23][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[23][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[23][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[23][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[23][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[23][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[23][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[23][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[23][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[24][playerid] = CreatePlayerTextDraw(playerid, 323.666320, 298.740844, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[24][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[24][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[24][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[24][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[24][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[24][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[24][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[24][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[24][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[24][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[24][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[24][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[24][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[25][playerid] = CreatePlayerTextDraw(playerid, 356.999633, 298.740753, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[25][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[25][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[25][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[25][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[25][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[25][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[25][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[25][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[25][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[25][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[25][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[25][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[25][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[26][playerid] = CreatePlayerTextDraw(playerid, 390.333099, 298.740722, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[26][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[26][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[26][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[26][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[26][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[26][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[26][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[26][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[26][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[26][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[26][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[26][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[26][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[27][playerid] = CreatePlayerTextDraw(playerid, 423.666381, 298.740722, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[27][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[27][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[27][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[27][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[27][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[27][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[27][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[27][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[27][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[27][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[27][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[27][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[27][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[28][playerid] = CreatePlayerTextDraw(playerid, 456.833038, 298.740753, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[28][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[28][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[28][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[28][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[28][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[28][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[28][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[28][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[28][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[28][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[28][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[28][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[28][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[29][playerid] = CreatePlayerTextDraw(playerid, 490.332977, 299.070312, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[29][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[29][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[29][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[29][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[29][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[29][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[29][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[29][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[29][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[29][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[29][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[29][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[29][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[30][playerid] = CreatePlayerTextDraw(playerid, 323.666290, 339.807342, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[30][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[30][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[30][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[30][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[30][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[30][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[30][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[30][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[30][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[30][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[30][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[30][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[30][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[31][playerid] = CreatePlayerTextDraw(playerid, 356.999572, 339.807312, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[31][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[31][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[31][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[31][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[31][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[31][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[31][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[31][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[31][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[31][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[31][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[31][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[31][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[32][playerid] = CreatePlayerTextDraw(playerid, 390.332977, 339.807312, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[32][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[32][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[32][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[32][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[32][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[32][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[32][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[32][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[32][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[32][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[32][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[32][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[32][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[33][playerid] = CreatePlayerTextDraw(playerid, 423.666229, 339.807281, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[33][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[33][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[33][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[33][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[33][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[33][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[33][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[33][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[33][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[33][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[33][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[33][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[33][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[34][playerid] = CreatePlayerTextDraw(playerid, 456.832855, 339.807250, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[34][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[34][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[34][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[34][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[34][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[34][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[34][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[34][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[34][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[34][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[34][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[34][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[34][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[35][playerid] = CreatePlayerTextDraw(playerid, 490.332885, 339.807250, "LD_SPAC:white"); // box object in the inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[35][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[35][playerid], 31.666700, 38.992580);
	PlayerTextDrawAlignment(playerid, InventoryP[35][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[35][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[35][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[35][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[35][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[35][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[35][playerid], 589505535);
	PlayerTextDrawFont(playerid, InventoryP[35][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[35][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[35][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[35][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[36][playerid] = CreatePlayerTextDraw(playerid, 188.166778, 155.407409, "LD_SPAC:white"); // box player skin
	PlayerTextDrawLetterSize(playerid, InventoryP[36][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[36][playerid], 64.333282, 89.185180);
	PlayerTextDrawAlignment(playerid, InventoryP[36][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[36][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[36][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[36][playerid], 0);
	PlayerTextDrawSetShadow(playerid, InventoryP[36][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[36][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[36][playerid], 0x14141400);
	PlayerTextDrawFont(playerid, InventoryP[36][playerid], 5);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[36][playerid], 70);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[36][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[37][playerid] = CreatePlayerTextDraw(playerid, 249.833038, 155.470352, "LD_SPAC:white"); // box active slots inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[37][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[37][playerid], 22.333360, 26.962970);
	PlayerTextDrawAlignment(playerid, InventoryP[37][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[37][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[37][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[37][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[37][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[37][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[37][playerid], -37548836);
	PlayerTextDrawFont(playerid, InventoryP[37][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[37][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[37][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[37][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[38][playerid] = CreatePlayerTextDraw(playerid, 273.499664, 155.385177, "LD_SPAC:white"); // box active slots inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[38][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[38][playerid], 22.333360, 26.962970);
	PlayerTextDrawAlignment(playerid, InventoryP[38][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[38][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[38][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[38][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[38][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[38][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[38][playerid], -37548836);
	PlayerTextDrawFont(playerid, InventoryP[38][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[38][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[38][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[38][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[39][playerid] = CreatePlayerTextDraw(playerid, 297.166320, 155.385192, "LD_SPAC:white"); // box active slots inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[39][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[39][playerid], 22.333360, 26.962970);
	PlayerTextDrawAlignment(playerid, InventoryP[39][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[39][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[39][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[39][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[39][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[39][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[39][playerid], -37548836);
	PlayerTextDrawFont(playerid, InventoryP[39][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[39][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[39][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[39][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[40][playerid] = CreatePlayerTextDraw(playerid, 297.166320, 183.885192, "LD_SPAC:white"); // box active slots inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[40][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[40][playerid], 22.333360, 26.962970);
	PlayerTextDrawAlignment(playerid, InventoryP[40][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[40][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[40][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[40][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[40][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[40][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[40][playerid], -37548836);
	PlayerTextDrawFont(playerid, InventoryP[40][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[40][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[40][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[40][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[41][playerid] = CreatePlayerTextDraw(playerid, 273.666320, 183.885192, "LD_SPAC:white"); // box active slots inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[41][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[41][playerid], 22.333360, 26.962970);
	PlayerTextDrawAlignment(playerid, InventoryP[41][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[41][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[41][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[41][playerid], 623191551);
	PlayerTextDrawSetShadow(playerid, InventoryP[41][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[41][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[41][playerid], -37548836);
	PlayerTextDrawFont(playerid, InventoryP[41][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[41][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[41][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[41][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[42][playerid] = CreatePlayerTextDraw(playerid, 249.832992, 183.970382, "LD_SPAC:white"); // box active slots inventory
	PlayerTextDrawLetterSize(playerid, InventoryP[42][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[42][playerid], 22.333360, 26.962970);
	PlayerTextDrawAlignment(playerid, InventoryP[42][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[42][playerid], -1);
	PlayerTextDrawUseBox(playerid, InventoryP[42][playerid], true);
	PlayerTextDrawBoxColor(playerid, InventoryP[42][playerid], -37549056);
	PlayerTextDrawSetShadow(playerid, InventoryP[42][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[42][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[42][playerid], -37548836);
	PlayerTextDrawFont(playerid, InventoryP[42][playerid], 5);
	PlayerTextDrawSetSelectable(playerid, InventoryP[42][playerid], true);
	PlayerTextDrawSetPreviewModel(playerid, InventoryP[42][playerid], 1455);
	PlayerTextDrawSetPreviewRot(playerid, InventoryP[42][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

	InventoryP[43][playerid] = CreatePlayerTextDraw(playerid, 251.000000, 221.385177, "LD_SPAC:white"); // box status of hunger stripe
	PlayerTextDrawLetterSize(playerid, InventoryP[43][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[43][playerid], 38.666690, 2.903702);
	PlayerTextDrawAlignment(playerid, InventoryP[43][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[43][playerid], -37548801);
	PlayerTextDrawSetShadow(playerid, InventoryP[43][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[43][playerid], 0);
	PlayerTextDrawFont(playerid, InventoryP[43][playerid], 4);

	InventoryP[44][playerid] = CreatePlayerTextDraw(playerid, 308.333831, 217.437133, "95%"); // box percent of hunger
	PlayerTextDrawLetterSize(playerid, InventoryP[44][playerid], 0.149329, 0.990220);
	PlayerTextDrawAlignment(playerid, InventoryP[44][playerid], 2);
	PlayerTextDrawColor(playerid, InventoryP[44][playerid], -37548801);
	PlayerTextDrawSetShadow(playerid, InventoryP[44][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[44][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[44][playerid], 255);
	PlayerTextDrawFont(playerid, InventoryP[44][playerid], 2);
	PlayerTextDrawSetProportional(playerid, InventoryP[44][playerid], 1);

	InventoryP[45][playerid] = CreatePlayerTextDraw(playerid, 258.666656, 247.981475, "LD_SPAC:white"); // buttom report
	PlayerTextDrawLetterSize(playerid, InventoryP[45][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, InventoryP[45][playerid], 60.999984, 21.570350);
	PlayerTextDrawAlignment(playerid, InventoryP[45][playerid], 1);
	PlayerTextDrawColor(playerid, InventoryP[45][playerid], -37548801);
	PlayerTextDrawSetShadow(playerid, InventoryP[45][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[45][playerid], 0);
	PlayerTextDrawFont(playerid, InventoryP[45][playerid], 4);

	InventoryP[45][playerid] = CreatePlayerTextDraw(playerid, 215.500152, 137.963012, "100%"); // percent of hp
	PlayerTextDrawLetterSize(playerid, InventoryP[45][playerid], 0.134994, 0.849183);
	PlayerTextDrawAlignment(playerid, InventoryP[45][playerid], 2);
	PlayerTextDrawColor(playerid, InventoryP[45][playerid], -37548801);
	PlayerTextDrawSetShadow(playerid, InventoryP[45][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[45][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[45][playerid], 255);
	PlayerTextDrawFont(playerid, InventoryP[45][playerid], 2);
	PlayerTextDrawSetProportional(playerid, InventoryP[45][playerid], 1);

	InventoryP[46][playerid] = CreatePlayerTextDraw(playerid, 240.833526, 138.048202, "100%"); // percent of hp armour
	PlayerTextDrawLetterSize(playerid, InventoryP[46][playerid], 0.134994, 0.849183);
	PlayerTextDrawAlignment(playerid, InventoryP[46][playerid], 2);
	PlayerTextDrawColor(playerid, InventoryP[46][playerid], -37548801);
	PlayerTextDrawSetShadow(playerid, InventoryP[46][playerid], 0);
	PlayerTextDrawSetOutline(playerid, InventoryP[46][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, InventoryP[46][playerid], 255);
	PlayerTextDrawFont(playerid, InventoryP[46][playerid], 2);
	PlayerTextDrawSetProportional(playerid, InventoryP[46][playerid], 1);
	
	
	InvAmm[playerid][0] = CreatePlayerTextDraw(playerid,354.499877, 164.970321, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][0], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][0], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][0], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][0], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][0], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][0], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][0], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][0], 1);
	InvAmm[playerid][1] = CreatePlayerTextDraw(playerid,387.833099, 164.970321, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][1], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][1], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][1], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][1], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][1], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][1], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][1], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][1], 1);
	InvAmm[playerid][2] = CreatePlayerTextDraw(playerid,421.333099, 164.970321, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][2], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][2], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][2], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][2], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][2], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][2], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][2], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][2], 1);
	InvAmm[playerid][3] = CreatePlayerTextDraw(playerid,454.666442, 164.970321, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][3], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][3], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][3], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][3], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][3], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][3], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][3], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][3], 1);
	InvAmm[playerid][4] = CreatePlayerTextDraw(playerid,487.833099, 164.970306, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][4], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][4], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][4], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][4], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][4], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][4], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][4], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][4], 1);
	InvAmm[playerid][5] = CreatePlayerTextDraw(playerid,521.166503, 164.970336, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][5], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][5], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][5], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][5], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][5], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][5], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][5], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][5], 1);
	InvAmm[playerid][6] = CreatePlayerTextDraw(playerid,354.499816, 206.037033, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][6], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][6], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][6], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][6], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][6], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][6], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][6], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][6], 1);
	InvAmm[playerid][7] = CreatePlayerTextDraw(playerid,387.833160, 206.037017, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][7], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][7], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][7], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][7], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][7], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][7], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][7], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][7], 1);
	InvAmm[playerid][8] = CreatePlayerTextDraw(playerid,421.333251, 205.951828, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][8], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][8], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][8], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][8], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][8], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][8], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][8], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][8], 1);
	InvAmm[playerid][9] = CreatePlayerTextDraw(playerid,454.666564, 206.037033, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][9], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][9], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][9], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][9], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][9], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][9], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][9], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][9], 1);
	InvAmm[playerid][10] = CreatePlayerTextDraw(playerid,488.000030, 206.037048, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][10], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][10], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][10], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][10], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][10], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][10], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][10], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][10], 1);
	InvAmm[playerid][11] = CreatePlayerTextDraw(playerid,521.333312, 206.037048, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][11], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][11], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][11], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][11], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][11], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][11], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][11], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][11], 1);
	InvAmm[playerid][12] = CreatePlayerTextDraw(playerid,354.666564, 247.018569, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][12], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][12], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][12], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][12], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][12], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][12], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][12], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][12], 1);
	InvAmm[playerid][13] = CreatePlayerTextDraw(playerid,387.999908, 247.018585, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][13], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][13], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][13], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][13], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][13], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][13], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][13], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][13], 1);
	InvAmm[playerid][14] = CreatePlayerTextDraw(playerid,421.333221, 247.018554, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][14], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][14], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][14], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][14], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][14], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][14], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][14], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][14], 1);
	InvAmm[playerid][15] = CreatePlayerTextDraw(playerid,454.666442, 247.018554, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][15], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][15], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][15], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][15], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][15], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][15], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][15], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][15], 1);
	InvAmm[playerid][16] = CreatePlayerTextDraw(playerid,487.999755, 247.018554, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][16], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][16], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][16], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][16], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][16], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][16], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][16], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][16], 1);
	InvAmm[playerid][17] = CreatePlayerTextDraw(playerid,521.333129, 246.933395, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][17], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][17], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][17], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][17], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][17], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][17], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][17], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][17], 1);
	InvAmm[playerid][18] = CreatePlayerTextDraw(playerid,354.666381, 288.085266, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][18], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][18], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][18], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][18], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][18], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][18], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][18], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][18], 1);
	InvAmm[playerid][19] = CreatePlayerTextDraw(playerid,387.999694, 288.085266, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][19], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][19], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][19], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][19], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][19], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][19], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][19], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][19], 1);
	InvAmm[playerid][20] = CreatePlayerTextDraw(playerid,421.333068, 288.085266, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][20], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][20], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][20], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][20], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][20], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][20], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][20], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][20], 1);
	InvAmm[playerid][21] = CreatePlayerTextDraw(playerid,454.666442, 288.000091, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][21], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][21], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][21], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][21], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][21], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][21], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][21], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][21], 1);
	InvAmm[playerid][22] = CreatePlayerTextDraw(playerid,487.999603, 288.000061, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][22], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][22], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][22], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][22], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][22], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][22], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][22], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][22], 1);
	InvAmm[playerid][23] = CreatePlayerTextDraw(playerid,521.332946, 288.000061, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][23], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][23], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][23], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][23], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][23], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][23], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][23], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][23], 1);
	InvAmm[playerid][24] = CreatePlayerTextDraw(playerid,354.666290, 329.066711, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][24], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][24], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][24], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][24], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][24], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][24], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][24], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][24], 1);
	InvAmm[playerid][25] = CreatePlayerTextDraw(playerid,387.999603, 329.066619, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][25], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][25], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][25], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][25], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][25], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][25], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][25], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][25], 1);
	InvAmm[playerid][26] = CreatePlayerTextDraw(playerid,421.333068, 329.066589, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][26], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][26], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][26], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][26], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][26], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][26], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][26], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][26], 1);
	InvAmm[playerid][27] = CreatePlayerTextDraw(playerid,454.666351, 329.066589, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][27], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][27], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][27], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][27], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][27], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][27], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][27], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][27], 1);
	InvAmm[playerid][28] = CreatePlayerTextDraw(playerid,487.833007, 329.066619, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][28], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][28], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][28], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][28], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][28], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][28], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][28], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][28], 1);
	InvAmm[playerid][29] = CreatePlayerTextDraw(playerid,521.333007, 329.396179, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][29], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][29], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][29], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][29], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][29], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][29], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][29], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][29], 1);
	InvAmm[playerid][30] = CreatePlayerTextDraw(playerid,354.666259, 370.133209, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][30], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][30], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][30], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][30], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][30], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][30], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][30], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][30], 1);
	InvAmm[playerid][31] = CreatePlayerTextDraw(playerid,387.999542, 370.133178, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][31], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][31], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][31], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][31], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][31], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][31], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][31], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][31], 1);
	InvAmm[playerid][32] = CreatePlayerTextDraw(playerid,421.332946, 370.133178, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][32], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][32], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][32], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][32], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][32], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][32], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][32], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][32], 1);
	InvAmm[playerid][33] = CreatePlayerTextDraw(playerid,454.666198, 370.133148, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][33], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][33], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][33], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][33], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][33], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][33], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][33], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][33], 1);
	InvAmm[playerid][34] = CreatePlayerTextDraw(playerid,487.832824, 370.133117, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][34], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][34], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][34], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][34], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][34], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][34], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][34], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][34], 1);
	InvAmm[playerid][35] = CreatePlayerTextDraw(playerid,521.332885, 370.133117, "ID: 100");
	PlayerTextDrawLetterSize(playerid,InvAmm[playerid][35], 0.128222, 0.962844);
	PlayerTextDrawAlignment(playerid,InvAmm[playerid][35], 3);
	PlayerTextDrawColor(playerid,InvAmm[playerid][35], -1);
	PlayerTextDrawSetShadow(playerid,InvAmm[playerid][35], 0);
	PlayerTextDrawSetOutline(playerid,InvAmm[playerid][35], 0);
	PlayerTextDrawBackgroundColor(playerid,InvAmm[playerid][35], 51);
	PlayerTextDrawFont(playerid,InvAmm[playerid][35], 2);
	PlayerTextDrawSetProportional(playerid,InvAmm[playerid][35], 1);
	return 1;
}

stock SpawnPlayerEx(playerid)
{
	SettingSpawn(playerid);
	return SpawnPlayer(playerid);
}
#if defined _ALS_SpawnPlayer
	#undef SpawnPlayer
#else
	#define _ALS_SpawnPlayer
#endif

#define SpawnPlayer SpawnPlayerEx


stock SelectTextDrawEx(playerid, hovercolor)
{
	SetPVarInt(playerid,"TextDrawSelect",1);
	return SelectTextDraw(playerid, hovercolor);
}
#if defined _ALS_SelectTextDraw
	#undef SelectTextDraw
#else
	#define _ALS_SelectTextDraw
#endif

#define SelectTextDraw SelectTextDrawEx

/*stock mysql_queryex(handle = mysql,query[], bool:use_cache = true);
{
    return mysql_query(handle,query,use_cache);
}
#if defined _ALS_mysql_query
	#undef mysql_query
#else
	#define _ALS_mysql_query
#endif

#define mysql_query mysql_queryex*/
stock CancelSelectTextDrawEx(playerid)
{
	DeletePVar(playerid,"TextDrawSelect");
	return CancelSelectTextDraw(playerid);
}
#if defined _ALS_CancelSelectTextDraw
	#undef CancelSelectTextDraw
#else
	#define _ALS_CancelSelectTextDraw
#endif

#define CancelSelectTextDraw CancelSelectTextDrawEx

stock gc_SetPlayerInterior(playerid, worldid)
{
	if(GetPVarInt(playerid,"AttachPlayer"))
	{
		SetPlayerInterior(GetPVarInt(playerid,"AttachPlayer")-1, worldid);
	}
	return SetPlayerInterior(playerid, worldid);
}
#if defined _ALS_SetPlayerInterior
	#undef SetPlayerInterior
#else
	#define _ALS_SetPlayerInterior
#endif

#define SetPlayerInterior gc_SetPlayerInterior

stock gc_SetPlayerVirtualWorld(playerid, worldid)
{
	if(GetPVarInt(playerid,"AttachPlayer"))
	{
		SetPlayerVirtualWorld(GetPVarInt(playerid,"AttachPlayer")-1, worldid);
	}
	return SetPlayerVirtualWorld(playerid, worldid);
}
#if defined _ALS_SetPlayerVirtualWorld
	#undef SetPlayerVirtualWorld
#else
	#define _ALS_SetPlayerVirtualWorld
#endif

#define SetPlayerVirtualWorld gc_SetPlayerVirtualWorld


//#define Create3DTextLabelEx(%1,%2,%3,%4,%5,%6,%7,%8 = 0) CreateDynamic3DTextLabel(%1,%2,%3,%4,%5,%6,INVALID_PLAYER_ID, INVALID_VEHICLE_ID,%8,%7)

#define Update3DTextLabelTextEx(%1,%2,%3) UpdateDynamic3DTextLabelText(%1,%2,%3)

stock Text3D:Create3DTextLabelEx(const text[], color, Float:X, Float:Y, Float:Z, Float:DrawDistance, virtualworld = -1, testLOS = 0)
{

	return CreateDynamic3DTextLabel(text, color, X, Y,Z, DrawDistance, INVALID_PLAYER_ID, INVALID_VEHICLE_ID, testLOS, virtualworld );
          // CreateDynamic3DTextLabel(const text[], color, Float:x, Float:y, Float:z, Float:drawdistance, attachedplayer = INVALID_PLAYER_ID, attachedvehicle = INVALID_VEHICLE_ID, testlos = 0, worldid = -1, interiorid = -1, playerid = -1, Float:streamdistance = STREAMER_3D_TEXT_LABEL_SD, STREAMER_TAG_AREA areaid = STREAMER_TAG_AREA -1, priority = 0);
}

static stock const gc_vehicle_max_seats[212] =
{
	4, 2, 2, 2, 4, 4, 1, 2, 2, 4, 2, 2, 2, 4, 2, 2, 4, 2, 4, 2, 4, 4, 2, 2, 2,
	1, 4, 4, 4, 2, 1, 9, 1, 2, 2, 1, 2, 9, 4, 2, 4, 1, 2, 2, 2, 4, 1, 2, 1, 6,
	1, 2, 1, 1, 1, 2, 2, 2, 4, 4, 2, 2, 2, 2, 2, 2, 4, 4, 2, 2, 4, 2, 1, 1, 2,
	2, 1, 2, 2, 4, 2, 1, 4, 3, 1, 1, 1, 4, 2, 2, 4, 2, 4, 1, 2, 2, 2, 4, 4, 2,
	2, 2, 2, 2, 2, 2, 2, 4, 2, 1, 1, 2, 1, 1, 2, 2, 4, 2, 2, 1, 1, 2, 2, 2, 2,
	2, 2, 2, 2, 4, 1, 1, 1, 2, 2, 2, 2, 0, 0, 1, 4, 2, 2, 2, 2, 2, 4, 4, 2, 2,
	4, 4, 2, 1, 2, 2, 2, 2, 2, 2, 4, 4, 2, 2, 1, 2, 4, 4, 1, 0, 0, 1, 1, 2, 1,
	2, 2, 2, 2, 4, 4, 2, 4, 1, 1, 4, 2, 2, 2, 2, 6, 1, 2, 2, 2, 1, 4, 4, 4, 2,
	2, 2, 2, 2, 4, 2, 1, 1, 1, 4, 1, 1
};


//stock Update3DTextLabelTextEx(Text3D:id, color, text[])

stock Float: gc_GetDistanceBetweenPlayers(player_x, player_y)
{
	new
		Float: x,
		Float: y,
		Float: z,
		Float: x2,
		Float: y2,
		Float: z2;

	GetPlayerPos(player_x, x, y, z);
	GetPlayerPos(player_y, x2, y2, z2);
	return VectorSize(x-x2, y-y2, z-z2);
}
new MonthTimes[12][4] =
{
        { 31, 31, 2678400, 2678400 },
        { 28, 29, 2419200, 2505600 },
        { 31, 31, 2678400, 2678400 },
        { 30, 30, 2592000, 2592000 },
        { 31, 31, 2678400, 2678400 },
        { 30, 30, 2592000, 2592000 },
        { 31, 31, 2678400, 2678400 },
        { 31, 31, 2678400, 2678400 },
        { 30, 30, 2592000, 2592000 },
        { 31, 31, 2678400, 2678400 },
        { 30, 30, 2592000, 2592000 },
        { 31, 31, 2678400, 2678400 }
};
stock TimestampToDate(Timestamp, &year, &month, &day, &hour, &minute, &second, HourGMT, MinuteGMT = 0)
{
    new tmp = 2;
    year = 1970;
    month = 1;
    Timestamp -= 172800; // Delete two days from the current timestamp. This is necessary, because the timestamp retrieved using gettime() includes two too many days.
    for(;;)
    {
            if(Timestamp >= 31536000)
            {
                    year ++;
                    Timestamp -= 31536000;
                    tmp ++;
                    if(tmp == 4)
                    {
                            if(Timestamp >= 31622400)
                            {
                                    tmp = 0;
                                    year ++;
                                    Timestamp -= 31622400;
                            }
                            else break;
                    }
            }
            else break;
    }
    for(new i = 0; i < 12; i ++)
    {
            if(Timestamp >= MonthTimes[i][2 + IsLeapYear(year)])
            {
                    month ++;
                    Timestamp -= MonthTimes[i][2 + IsLeapYear(year)];
            }
            else break;
    }
    day = 1 + (Timestamp / 86400);
    Timestamp %= 86400;
    hour = HourGMT + (Timestamp / 3600);
    Timestamp %= 3600;
    minute = MinuteGMT + (Timestamp / 60);
    second = (Timestamp % 60);
    if(minute > 59)
    {
            minute = 0;
            hour ++;
    }
    if(hour > 23)
    {
            hour -= 24;
            day ++;
    }
    if(day > MonthTimes[month][IsLeapYear(year)])
    {
            day = 1;
            month ++;
    }
    if(month > 12)
    {
            month = 1;
            year ++;
    }
    return 1;
}

stock gc_SetSuspectLook(suspectid, Float: look_x, Float: look_y)
{
	new
		Float: x,
		Float: y,
		Float: a;

	GetPlayerPos(suspectid, x, y, a);
	a = atan2(look_y - y, look_x - x) - 90.0;
	SetPlayerFacingAngle(suspectid, a);
	return 1;
}


stock gc_GetFreeSeat(vehicleid)
{
    new
        tmp,
        seat;

#if defined foreach
    foreach(Player, i)
#else
    for(new i = 0; i < GetPlayerPoolSize(); i++)
#endif
    {
        if(GetPlayerVehicleID(i) == vehicleid)
        {
            if(0 <= (seat = GetPlayerVehicleSeat(i)) < cellbits)
            {
                tmp |= 1 << seat;
            }
        }
    }

    tmp = ~tmp;
    for(new i = 1; i < gc_vehicle_max_seats[GetVehicleModel(vehicleid) - 400];
    	i++)
    {
    	if((~(tmp - 1) & tmp) == 1 << i)
    	{
    		return i;
    	}
    }
    return -1;
}
/*stock CreateDynamicObjectExEx(modelid, Float:x, Float:y, Float:z, Float:rx, Float:ry, Float:rz, Float:streamdistance = 700.0, Float:drawdistance = 700.0,const worlds[] = { -1 })
{
	return CreateDynamicObjectEx(modelid, x, y, z, rx, ry,rz, streamdistance,drawdistance);
}
#if	defined	_ALS_CreateDynamicObjectEx
	#undef	CreateDynamicObjectEx
#else
	#define	_ALS_CreateDynamicObjectEx
#endif
#define CreateDynamicObjectEx CreateDynamicObjectExEx*/
stock RepairVehicleEx(vehicleid)
{
    ServerHPVehicle[vehicleid] = 1000.0;
   	car__ignore_tick[vehicleid] = GetTickCount()+GUN__IGNORE_TIME;
    return RepairVehicle(vehicleid);
}
#if	defined	_ALS_RepairVehicle
	#undef	RepairVehicle
#else
	#define	_ALS_RepairVehicle
#endif
#define RepairVehicle RepairVehicleEx
stock okSetVehicleHealth(vehicleid, Float:Health)
{
	ServerHPVehicle[vehicleid] = Health;
	car__ignore_tick[vehicleid] = GetTickCount()+GUN__IGNORE_TIME;
	return SetVehicleHealth(vehicleid, Health);
}
#if	defined	_ALS_SetVehicleHealth
	#undef	SetVehicleHealth
#else
	#define	_ALS_SetVehicleHealth
#endif
#define SetVehicleHealth okSetVehicleHealth
new dialog__id[MAX_PLAYERS];
stock id__ShowPlayerDialog(playerid, dialogid, style, caption[], info[], button1[], button2[])
{
    dialog__id[playerid] = dialogid;
    return ShowPlayerDialog(playerid,dialogid,style,caption,info,button1,button2);
}
#if	defined	_ALS_ShowPlayerDialog
	#undef	ShowPlayerDialog
#else
	#define	_ALS_ShowPlayerDialog
#endif
#define ShowPlayerDialog id__ShowPlayerDialog
stock CreateVehicleEx(modelid, Float:x, Float:y, Float:z, Float:angle, color1, color2, respawn_delay)
{
	new carid = CreateVehicle(modelid, x, y, z, angle, color1, color2, respawn_delay);
	veh__pos[carid][0] = x;
	veh__pos[carid][1] = y;
	veh__pos[carid][2] = z;
	veh__pos[carid][3] = angle;
	for(new i = 0; i<= 35; i++)
  	{
  	    BInfo[carid][bInvSlot][i] = 0;
  	    BInfo[carid][bInvKol][i] = 0;
  	}
  	BInfo[carid][bMoney] = 0;
	BInfo[carid][bBox] = 0;
    BInfo[carid][bWork] = 0;
    BInfo[carid][bMats] = 0;
    BInfo[carid][bDrugs] = 0;
    BInfo[carid][bHeal] = 0;
	Trunk[carid] = false;
	Lights[carid] = false;
	Capot[carid] = false;
	Okna[carid][0] = false;
	Okna[carid][1] = false;
	Okna[carid][2] = false;
	Okna[carid][3] = false;

	BInfo[carid][bLock] = 1;
	veh__pos[carid][2] = z;
	veh__pos[carid][3] = angle;
	strmid(LastDriver[carid], "Никто", 0, strlen("Никто"), MAX_PLAYER_NAME);
	return carid;
}
#if	defined	_ALS_CreateVehicle
	#undef	CreateVehicle
#else
	#define	_ALS_CreateVehicle
#endif
#define CreateVehicle CreateVehicleEx

stock AddStaticVehicleExEx(modelid, Float:x, Float:y, Float:z, Float:angle, color1, color2, respawn_delay)
{
	new carid = AddStaticVehicleEx(modelid, x, y, z, angle, color1, color2, respawn_delay);
 	veh__pos[carid][0] = x;
	veh__pos[carid][1] = y;
	veh__pos[carid][2] = z;
	veh__pos[carid][3] = angle;
	for(new i = 0; i<= 35; i++)
  	{
  	    BInfo[carid][bInvSlot][i] = 0;
  	    BInfo[carid][bInvKol][i] = 0;
  	}
  	BInfo[carid][bMoney] = 0;
	BInfo[carid][bBox] = 0;
    BInfo[carid][bWork] = 0;
    BInfo[carid][bMats] = 0;
    BInfo[carid][bDrugs] = 0;
    BInfo[carid][bHeal] = 0;
	strmid(LastDriver[carid], "Никто", 0, strlen("Никто"), MAX_PLAYER_NAME);
	return carid;
}
#if	defined	_ALS_AddStaticVehicleEx
	#undef	AddStaticVehicleEx
#else
	#define	_ALS_AddStaticVehicleEx
#endif
#define AddStaticVehicleEx AddStaticVehicleExEx
stock Set1Skin(playerid,skin)
{
    SetPlayerSkin(playerid,skin);
	SetAcs(playerid);
	return true;
}
#if	defined	_ALS_SetPlayerSkin
	#undef	SetPlayerSkin
#else
	#define	_ALS_SetPlayerSkin
#endif
#define SetPlayerSkin Set1Skin

CreateDynamicPickupAC(modelid, type, Float:x, Float:y, Float:z, worldid = -1, interiorid = -1, playerid = -1, Float:streamdistance = STREAMER_PICKUP_SD)
{
	new TempID = CreateDynamicPickup(modelid, type, x, y, z, worldid,interiorid,playerid,streamdistance);
	PickupInfo[TempID][PickX] = x;
	PickupInfo[TempID][PickY] = y;
	PickupInfo[TempID][PickZ] = z;
	return TempID;
}
#if	defined	_ALS_CreateDynamicPickup
	#undef	CreateDynamicPickup
#else
	#define	_ALS_CreateDynamicPickup
#endif
#define CreateDynamicPickup CreateDynamicPickupAC
Text:CreateSprite(Float:X,Float:Y,Nameb[],Float:Width,Float:Height)
{
	new Text:RetSprite;
	RetSprite = TextDrawCreate(X, Y, Nameb);
	TextDrawFont(RetSprite, 4);
	TextDrawColor(RetSprite,0xFFFFFFFF);
	TextDrawTextSize(RetSprite,Width,Height);
	return RetSprite;
}

stock timec(timestamp, compare = -1) {
    if (compare == -1) {
        compare = gettime();
    }
    new
        n,
        // on the following line, I have removed the need for the diff() function.
        // if you want to use the diff() function in pawn, replace the following with:
        // Float:d = diff(timestamp, compare),
        Float:d = (timestamp > compare) ? timestamp - compare : compare - timestamp,
        returnstr[32];
    if (d < 60) {
        format(returnstr, sizeof(returnstr), "меньше минуты");
        return returnstr;
    } else if (d < 3600) { // 3600 = 1 hour
        n = floatround(floatdiv(d, 60.0), floatround_floor);
        format(returnstr, sizeof(returnstr), "мин.");
    } else if (d < 86400) { // 86400 = 1 day
        n = floatround(floatdiv(d, 3600.0), floatround_floor);
        format(returnstr, sizeof(returnstr), "ч.");
    } else if (d < 2592000) { // 2592000 = 1 month
        n = floatround(floatdiv(d, 86400.0), floatround_floor);
        format(returnstr, sizeof(returnstr), "дн.");
    } else if (d < 31536000) { // 31536000 = 1 year
        n = floatround(floatdiv(d, 2592000.0), floatround_floor);
        format(returnstr, sizeof(returnstr), "мес.");
    } else {
        n = floatround(floatdiv(d, 31536000.0), floatround_floor);
        format(returnstr, sizeof(returnstr), "г.");
    }
    if (n == 1) {
        format(returnstr, sizeof(returnstr), "1 %s", returnstr);
    } else {
        format(returnstr, sizeof(returnstr), "%d %s", n, returnstr);
    }
    return returnstr;
}


stock GetDay(year, month, day, name[], const size = sizeof(name))
{
	static const
	days_week[][] =
	{
		!"Понедельник",
		!"Вторник",
		!"Среда",
		!"Четверг",
		!"Пятница",
		!"Суббота",
		!"Воскресенье"
	};
	new
	a = (12 - month) / 12,
	y = year - a,
	m = month + 12 * a - 2,
	d = (7000 + day + y + (y/4) - (y/100) + (y/400) + ((31*m)/12))%7;
	return strunpack(name, days_week[(d-1 < 0) ? (6) : (d-1)], size);
}
stock IsLeapYear(year)
{
    if(year % 4 == 0) return 1;
    else return 0;
}
stock DateToTimestamp(str[])
{
    new date[3]; // date[0] = day           date[1] = month                 date[2] = year
    if(!sscanf(str,"p<,>ddd",date[0],date[1],date[2]))
    {
            new total = 0, tmp = 0;
            total += date[0] * 86400;
            if(date[1] == 2 && date[0] < 29) tmp = ((date[2] - 1968) / 4 - 2);
            else tmp = ((date[2] - 1968) / 4 - 1);
            total += tmp * 31622400;
            total += (date[2] - 1970 - tmp) * 31536000;
            for(new i = 1; i < date[1]; i ++) total += MonthTimes[i][0 + IsLeapYear(date[2])] * 86400;
            return total;
    }
    else return -1;
}
Text:CreateBox(Float:X,Float:Y,Float:Width,Float:Height,color)
{
	new Text[500];
	for(new i=floatround(Y); i < floatround(Y+Height);i++) {
		strcat(Text,"~n~_");
	}
    new Text:RetSprite;
	RetSprite = TextDrawCreate(X, Y, Text);
	TextDrawFont(RetSprite, 0);
	TextDrawColor(RetSprite,0xFFFFFFFF);
	TextDrawTextSize(RetSprite,Width+X,Height+Y);
	TextDrawUseBox(RetSprite,1);
	TextDrawBoxColor(RetSprite,color);
	TextDrawLetterSize(RetSprite,0.0001,0.1158);
	return RetSprite;
}

stock GiveWeapon(const playerid,const weapon,const ammo)
{
    gun__ignore_tick[playerid] = GetTickCount()+GUN__IGNORE_TIME;
    if(!GetPVarInt(playerid,"GiveGun"))
    {
	    switch(weapon)
	    {
	        case 0..15,40,44..46: return GunInfo[playerid][pWeapon][Slot(weapon)] = weapon, GivePlayerWeapon(playerid, weapon, ammo);
	        case 39:
	        {
	            GunInfo[playerid][pAmmo][Slot(weapon)] += ammo;
	            GunInfo[playerid][pWeapon][Slot(40)] = 40;
	        }
	        default:
			{
			    if(GunInfo[playerid][pWeapon][Slot(weapon)]) GunInfo[playerid][pAmmo][Slot(weapon)] += ammo;
			    else GunInfo[playerid][pAmmo][Slot(weapon)] = ammo;
			}
	    }
	    GunInfo[playerid][pWeapon][Slot(weapon)] = weapon;
    }
    return GivePlayerWeapon(playerid, weapon, ammo);
}
#if	defined	_ALS_GivePlayerWeapon
	#undef	GivePlayerWeapon
#else
	#define	_ALS_GivePlayerWeapon
#endif
#define GivePlayerWeapon GiveWeapon
stock gun__ResetPlayerWeapons(const playerid)
{
    gun__ignore_tick[playerid] = GetTickCount()+GUN__IGNORE_TIME;
    if(!GetPVarInt(playerid,"GiveGun"))
	{
		for(new i = 0; i < 13; i++ ) GunInfo[playerid][pAmmo][i] = 0, GunInfo[playerid][pWeapon][i] = 0;
	}
    return ResetPlayerWeapons(playerid);
}
#if	defined	_ALS_ResetPlayerWeapons
	#undef	ResetPlayerWeapons
#else
	#define	_ALS_ResetPlayerWeapons
#endif
#define ResetPlayerWeapons gun__ResetPlayerWeapons
new ostrov;

stock SetSpawnInfoEx(playerid, Float:x, Float:y, Float:z, Float:a = 0.0)
{
    tp__ignore_tick[playerid] = GetTickCount()+TP__IGNORE_TIME;
    return SetSpawnInfo(playerid, 255, PlayerInfo[playerid][pModel], x, y, z-0.2, a, 0, 0, 0, 0, 0, 0);
}
new Text:TexturesLoading[8];
new PlayerText:TexturesLoadingP[MAX_PLAYERS];


stock SPPos (playerid, Float:x, Float:y, Float:z)
{
    tp__ignore_tick[playerid] = GetTickCount()+TP__IGNORE_TIME;
    player__pos[0][playerid] = x;
    player__pos[1][playerid] = y;
    player__pos[2][playerid] = z;
	SetPlayerPos(playerid,x,y,z);
	if(IsPointInDynamicArea(ostrov,x,y,z) || GetPVarInt(playerid,"Freeze")/*&& !GetPlayerInterior(playerid) && !GetPlayerVirtualWorld(playerid)*/)
    {
        FreezePlayer(playerid,x,z);
    }
	return true;
}
#if	defined	_ALS_SetPlayerPos
	#undef	SetPlayerPos
#else
	#define	_ALS_SetPlayerPos
#endif
#define SetPlayerPos SPPos

/*stock mysql_query_my(str[],resultid = (-1),extraid = (-1),connectionHandle = 1)
{
	new rows = mysql_query(str,resultid,extraid,connectionHandle);
    if(!rows)
	{
		mysql_debug(1);
		mysql_query(str);
		mysql_debug(0);
	}
	return rows;
}

#if	defined	_ALS_mysql_query
	#undef	mysql_query
#else
	#define	_ALS_mysql_query
#endif
#define mysql_query mysql_query_my*/

stock SetVPos(vehicleid, Float:x, Float:y, Float:z)
{
    veh__pos[vehicleid][0] = x;
    veh__pos[vehicleid][1] = y;
    veh__pos[vehicleid][2] = z;
    SetVehiclePos(vehicleid,x,y,z);
    return true;
}
#if	defined	_ALS_SetVehiclePos
	#undef	SetVehiclePos
#else
	#define	_ALS_SetVehiclePos
#endif
#define SetVehiclePos SetVPos
new narkopic[2];
stock vehicle__PutPlayerInVehicle(playerid,vehicleid,seatid)
{
    SetPVarInt(playerid,"CarID",vehicleid);
    tp__ignore_tick[playerid] = GetTickCount()+TP__IGNORE_TIME;
    PutPlayerInVehicle(playerid, vehicleid, seatid);
}
#if	defined	_ALS_PutPlayerInVehicle
	#undef	PutPlayerInVehicle
#else
	#define	_ALS_PutPlayerInVehicle
#endif
#define PutPlayerInVehicle vehicle__PutPlayerInVehicle
