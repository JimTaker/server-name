#define YOU_DOMAIN "jetlagstudio.ru"

#if !defined HTTP

#define HTTP_GET                        1
#define HTTP_POST                       2
#define HTTP_HEAD                       3
#define HTTP_ERROR_BAD_HOST             1
#define HTTP_ERROR_NO_SOCKET            2
#define HTTP_ERROR_CANT_CONNECT         3
#define HTTP_ERROR_CANT_WRITE           4
#define HTTP_ERROR_CONTENT_TOO_BIG      5
#define HTTP_ERROR_MALFORMED_RESPONSE   6

native HTTP(index, type, url[], data[], callback[]);

#endif

#if __Pawn >= 0x3A && defined __PawnBuild
    #if __Pawn > 0x3A || __PawnBuild >= 2
        #define static_enum        static enum
    #endif
#endif
#if !defined static_enum
    #define static_enum            enum
#endif



static inc_string[250];


SednUCaller(playerid, phone[], code)
{


    format(inc_string, sizeof inc_string, "%s/uc_sender.php?code=%d&to=%s", YOU_DOMAIN, code, phone);

    for(new i, str = strlen(inc_string); i < str; i++)
    {
        if(inc_string[i] == ' ') inc_string[i] = '+';
    }

    HTTP(playerid, HTTP_POST, inc_string, "", "@__SendMessageResponseCaller");

    return 1;
}

@__SendMessageResponseCaller(index, response_code, data[]);
@__SendMessageResponseCaller(index, response_code, data[])
{
    if(response_code == 200)
        return print("[UC Caller] Сообщение отправлено!");

    printf("[UC Caller] Сбой в запросе, код ответа: %d", response_code);

    return 1;
} 