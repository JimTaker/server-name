/*
 * Фикс функций Kick(), Ban(), BanEx()
 * (C) 2015, Untonyst
 */

#if defined INC_K2BEx
	#endinput
#endif
#define INC_K2BEx

// Если время на функцию не валидно  или оно было не указано, то время ставится на это
#define DEFAULT_TIME_K2BEx (200)

// Типы
#define NORMAL_FUNCTION (0)		// Использовать функцию до исправления
#define FIX_FUNCTION (1)		// Использовать исправленную функцию

// Варианты
#define DONT_SHOW_REASON (0)	// НЕ выводим причину кика игрока перед баном
#define SHOW_REASON (1)			// Выводим причину кика игрока перед баном

static PlayerReasonText[MAX_PLAYERS][144];

// Фикс функции Kick()
forward time_Kick(playerid);
public time_Kick(playerid) 
{
	Kick(playerid);
}

stock fix_Kick(playerid, const type=0, time=0) 
{
	if(type == 0) 
	{
		Kick(playerid);
		return 1;
	}
	else if(type == 1) 
	{
		if((time  == 0) || (time <= 200) && (time > 1000))
			time = DEFAULT_TIME_K2BEx;
		SetTimerEx("time_Kick", time, false, "i", playerid);
		return 1;
	}
	else
		return 0;
}
#if defined _ALS_Kick
	#undef Kick
#else
	#define _ALS_Kick
#endif
#define Kick fix_Kick

// Фикс функции Ban()
forward time_Ban(playerid);
public time_Ban(playerid) 
{
	Ban(playerid);
}

stock fix_Ban(playerid, const type=0, time=0)
{
	if(type == 0) 
	{
		Ban(playerid);
		return 1;
	}
	else if(type == 1) 
	{
		if((time  == 0) || (time <= 200) && (time > 1000))
			time = DEFAULT_TIME_K2BEx;
		SetTimerEx("time_Ban", 200, false, "i", playerid);
		return 1;
	}
	else
		return 0;
}
#if defined _ALS_Ban
	#undef Ban
#else
	#define _ALS_Ban
#endif
#define Ban fix_Ban

// Фикс функции BanEx()
forward time_BanEx(playerid);
public time_BanEx(playerid)
{
	BanEx(playerid, PlayerReasonText[playerid]);
	PlayerReasonText[playerid][0] = EOS;
}

stock fix_BanEx(playerid, reason[], const type=0, time=0, show=0)
{
	if(type == 0) 
	{
		BanEx(playerid, reason);
		return 1;
	}
	else if(type == 1) 
	{
		if((time  == 0) || (time <= 200) && (time > 1000))
			time = DEFAULT_TIME_K2BEx;
		strins(PlayerReasonText[playerid], reason, 0);
		if(show == 1)
			SendClientMessage(playerid, 0xAAC5E3FF, PlayerReasonText[playerid]);
		SetTimerEx("time_BanEx", 200, false, "i", playerid);
		return 1;
	}
	else
		return 0;
}
#if defined _ALS_BanEx
	#undef BanEx
#else
	#define _ALS_BanEx
#endif
#define BanEx fix_BanEx