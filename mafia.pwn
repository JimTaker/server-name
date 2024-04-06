new PlayerMafia[MAX_PLAYERS] = -1;
new MafiaCard[MAX_PLAYERS] = -1;
new PlayerKilled[MAX_PLAYERS] = 0;

enum mf
{
	mPlayers,
	mGran,
	mGame,
	mTime
	mMafia,
	mCom,
	mStatus,
	mDead,
	mKill
}
new MafiaGame[10][mf];

CMD:mafia(playerid)
{
    PlayerMafia[playerid] = com;
}


stock StartGame(com)
{
	for(new i = 0; i < MAX_PLAYERS; i++)
	{
	    if(!IsPlayerConnected(i) || PlayerLogged[i] == false || PlayerMafia[i] != com) continue;
		if(MafiaGame[com][mPlayers] == 16)
		{
		    if(MafiaGame[com][mMafia] < 6)
			{
			    MafiaGame[com][mMafia]++;
				return MafiaCard[playerid] = 1;
			}
		    else if(!MafiaGame[com][mCom])
			{
			    MafiaGame[com][mGran]++;
				return MafiaCard[playerid] = 2;
			}
		    else
			{
			    afiaGame[com][mGran]++;
				return MafiaCard[playerid] = 3;
			}
		}
		else if(MafiaGame[com][mPlayers] < 16)
		{
		    if(MafiaGame[com][mMafia] < 3)
			{
			    MafiaGame[com][mMafia]++;
				return MafiaCard[playerid] = 1;
			}
		    else if(!MafiaGame[com][mCom])
			{
			    MafiaGame[com][mGran]++;
				return MafiaCard[playerid] = 2;
			}
		    else
			{
			    afiaGame[com][mGran]++;
				return MafiaCard[playerid] = 3;
			}
		}
	}
	new names[][] = {"Мафия","Комиссар","Гражданский"};
	new cards = [][] = {"LD_CARD:cd1c","LD_CARD:cd13c","LD_CARD:cd10c"};
	MafiaGame[com][mGame] = 1;
}

#define MAFIA_TIME 0
#define MAFIA_TEXT 0

for(new i = 0; i < 10; i++)
{
	if(!MafiaGame[i][mGame]) continue;
	switch(MafiaGame[i][mStatus])
	{
		case 0:
		{
			if(!MafiaGame[i][mTime])
			{
			    MafiaGame[i][mTime] = 30;
				TextDrawSetString(MafiaText[MAFIA_TEXT][i],"MAFIA'S TURN TO PICK");
				SendMafiasMes(i,CREWARD,"Мафия делает свой выбор!");
			}
			else
			{
			    if(MafiaGame[i][mTime] > 1)
			    {
			        MafiaGame[i][mTime]--;
			        format(str,sizeof(str),"00:%02d",MafiaGame[i][mTime]);
			        TextDrawSetString(MafiaText[17][i],str);
			    }
			    else if(MafiaGame[i][mTime] == 1)
			    {
			        TextDrawSetString(MafiaText[MAFIA_TIME][i],"00:00");
			        MafiaGame[i][mStatus] = 1;
			    }
			}
		}
		case 1:
		{
			if(!MafiaGame[i][mTime])
			{
			    MafiaGame[i][mTime] = 30;
				TextDrawSetString(MafiaText[MAFIA_TEXT][i],"COMMISSIONER TURN TO PICK");
				SendMafiasMes(i,CREWARD,"Комиссар делает свой выбор!");
			}
			else
			{
			    if(MafiaGame[i][mTime] > 1)
			    {
			        MafiaGame[i][mTime]--;
			        format(str,sizeof(str),"00:%02d",MafiaGame[i][mTime]);
			        TextDrawSetString(MafiaText[MAFIA_TIME][i],str);
			    }
			    else if(MafiaGame[i][mTime] == 1)
			    {
			        TextDrawSetString(MafiaText[MAFIA_TIME][i],"00:00");
			        MafiaGame[i][mStatus] = 2;
			    }
			}
		}
		case 3:
		{
		    if(!MafiaGame[i][mTime])
			{
				if(MafiaGame[i][mKill] != -1)
				{
				    format(str,sizeof(str),"В эту ночь мафия убила: %s",PlayerInfo[MafiaGame[i][mKill]][pSendername]);
				    SendMafiasMes(i,CREWARD,str);
				    MafiaGame[i][mDead]++;
				    MafiaGame[i][mPlayers]--;
				    switch(MafiaCard[MafiaGame[i][mKill]])
				    {
				        case 1: MafiaGame[i][mMafia]--;
				        case 2,3: MafiaGame[i][mGran]--;
				    }
				    SendClientMessage(MafiaGame[i][mKill],CREWARD,"Вас убили!");
					CloseMafia(MafiaGame[i][mKill]);
				    format(str,sizeof(str),"%d~n~%d",MafiaGame[i][mDead],MafiaGame[i][mPlayers]);
				    TextDrawSetString(MafiaText[MAFIA_INFO][i],"00:00");
			     	MafiaGame[i][mTime] = 180;
					TextDrawSetString(MafiaText[MAFIA_TEXT][i],"PEOPLE TURN TO PICK");
					SendMafiasMes(i,CREWARD,"Люди делают свой выбор!");
					CheckWinner(i);
				}
				else
				{
                    if(MafiaGame[i][mTime] > 1)
				    {
				        MafiaGame[i][mTime]--;
				        format(str,sizeof(str),"00:%02d",MafiaGame[i][mTime]);
				        TextDrawSetString(MafiaText[MAFIA_TIME][i],str);
				    }
				    else if(MafiaGame[i][mTime] == 1)
				    {
				        TextDrawSetString(MafiaText[MAFIA_TIME][i],"00:00");
				        MafiaGame[i][mStatus] = 4;
				    }
				}
			}
		}
		case 4:
		{
		    new maxkill = 0, killid = -1, ravno = 0;
		    for(new i = 0; i < MAX_PLAYERS; i++)
			{
	    		if(!IsPlayerConnected(i) || PlayerLogged[i] == false || PlayerMafia[i] != com || !PlayerMafiaKilled[i]) continue;
	    	    if(maxkill < PlayerMafiaKilled[i])
	    	    {
	    	        maxkill = PlayerMafiaKilled[i];
					killid = i;
					ravno = 0;
	    	    }
	    	    else if(maxkill == PlayerMafiaKilled[i] && killid != -1) ravno = 1;
	    	}
	    	if(!ravno)
	    	{
	    	    if(killid != -1)
	    	    {
	    	        format(str,sizeof(str),"Большинство проголосовало за: %s",PlayerInfo[killid][pSendername]);
				    SendMafiasMes(i,CREWARD,str);
				    MafiaGame[i][mPlayers]--;
				    switch(MafiaCard[MafiaGame[i][mKill]])
				    {
				        case 1: MafiaGame[i][mMafia]--;
				        case 2,3: MafiaGame[i][mGran]--;
				    }
				    SendClientMessage(killid,CREWARD,"Вы выбыли из игры!");
					CloseMafia(killid);
				    format(str,sizeof(str),"%d~n~%d",MafiaGame[i][mDead],MafiaGame[i][mPlayers]);
				    TextDrawSetString(MafiaText[MAFIA_INFO][i],"00:00");
	    	    }
				else
				{
				    SendMafiasMes(i,CREWARD,"Люди не смогли выбрать одного игрока!");
				    MafiaGame[i][mStatus] = 0;
				}
	    	}
	    	else
			{
			    SendMafiasMes(i,CREWARD,"Люди не смогли выбрать одного игрока!");
			    MafiaGame[i][mStatus] = 0;
			}
			CheckWinner(i);
		}
	}
}

stock CheckWinner(com)
{
	if(!MafiaGame[i][mMafia])
	{
	    SendMafiasMes(i,CREWARD,"Гражданские победили!");
	}
	else if(!MafiaGame[i][mGrn])
	{
	    SendMafiasMes(i,CREWARD,"Мафия победила!");
	}
}
