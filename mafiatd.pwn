/*
     TD-проект создан в Juicy TextDraw Editor.
     Версия: v2.5 - 25/04/2019

     Связь: vk.com/juicytd
*/

// Глобальные текстдравы (Global Textdraws):

new Text:Mafia[12];

Mafia[0] = TextDrawCreate(155.333282, 140.622222, "LD_SPAC:white"); // Texture element
TextDrawLetterSize(Mafia[0], 0.000000, 0.000000);
TextDrawTextSize(Mafia[0], 313.666687, 204.088897);
TextDrawAlignment(Mafia[0], 1);
TextDrawColor(Mafia[0], 336860415);
TextDrawSetShadow(Mafia[0], 0);
TextDrawSetOutline(Mafia[0], 0);
TextDrawFont(Mafia[0], 4);

Mafia[1] = TextDrawCreate(409.000000, 140.366683, "LD_SPAC:white"); // Texture element
TextDrawLetterSize(Mafia[1], 0.000000, 0.000000);
TextDrawTextSize(Mafia[1], 60.000003, 22.399963);
TextDrawAlignment(Mafia[1], 1);
TextDrawColor(Mafia[1], -37548801);
TextDrawSetShadow(Mafia[1], 0);
TextDrawSetOutline(Mafia[1], 0);
TextDrawFont(Mafia[1], 4);

Mafia[2] = TextDrawCreate(155.166671, 161.374099, "LD_SPAC:white"); // Texture element
TextDrawLetterSize(Mafia[2], 0.000000, 0.000000);
TextDrawTextSize(Mafia[2], 312.666687, 1.244408);
TextDrawAlignment(Mafia[2], 1);
TextDrawColor(Mafia[2], -37548801);
TextDrawSetShadow(Mafia[2], 0);
TextDrawSetOutline(Mafia[2], 0);
TextDrawFont(Mafia[2], 4);

Mafia[3] = TextDrawCreate(426.500000, 145.600021, "game"); // Text element
TextDrawLetterSize(Mafia[3], 0.225333, 1.351111);
TextDrawAlignment(Mafia[3], 1);
TextDrawColor(Mafia[3], 336860415);
TextDrawSetShadow(Mafia[3], 0);
TextDrawSetOutline(Mafia[3], 0);
TextDrawBackgroundColor(Mafia[3], 255);
TextDrawFont(Mafia[3], 2);
TextDrawSetProportional(Mafia[3], 1);

Mafia[4] = TextDrawCreate(411.333160, 174.637084, "next_page"); // Text element
TextDrawLetterSize(Mafia[4], 0.180665, 1.118813);
TextDrawTextSize(Mafia[4], 52.000000, 97.000000);
TextDrawAlignment(Mafia[4], 2);
TextDrawColor(Mafia[4], 336860415);
TextDrawUseBox(Mafia[4], true);
TextDrawBoxColor(Mafia[4], 1640450303);
TextDrawSetShadow(Mafia[4], 0);
TextDrawSetOutline(Mafia[4], 0);
TextDrawBackgroundColor(Mafia[4], -37549056);
TextDrawFont(Mafia[4], 2);
TextDrawSetProportional(Mafia[4], 1);
TextDrawSetSelectable(Mafia[4], true);

Mafia[5] = TextDrawCreate(411.333160, 194.137084, "back_page"); // Text element
TextDrawLetterSize(Mafia[5], 0.180665, 1.118813);
TextDrawTextSize(Mafia[5], 52.000000, 97.000000);
TextDrawAlignment(Mafia[5], 2);
TextDrawColor(Mafia[5], 336860415);
TextDrawUseBox(Mafia[5], true);
TextDrawBoxColor(Mafia[5], -314885121);
TextDrawSetShadow(Mafia[5], 0);
TextDrawSetOutline(Mafia[5], 0);
TextDrawBackgroundColor(Mafia[5], -37549056);
TextDrawFont(Mafia[5], 2);
TextDrawSetProportional(Mafia[5], 1);
TextDrawSetSelectable(Mafia[5], true);

Mafia[6] = TextDrawCreate(411.333160, 307.711212, "exit_game"); // Text element
TextDrawLetterSize(Mafia[6], 0.180665, 1.118813);
TextDrawTextSize(Mafia[6], 52.000000, 97.000000);
TextDrawAlignment(Mafia[6], 2);
TextDrawColor(Mafia[6], 336860415);
TextDrawUseBox(Mafia[6], true);
TextDrawBoxColor(Mafia[6], 1162167807);
TextDrawSetShadow(Mafia[6], 0);
TextDrawSetOutline(Mafia[6], 0);
TextDrawBackgroundColor(Mafia[6], -256);
TextDrawFont(Mafia[6], 2);
TextDrawSetProportional(Mafia[6], 1);
TextDrawSetSelectable(Mafia[6], true);

Mafia[7] = TextDrawCreate(411.333129, 288.040863, "select_player"); // box select (text)
TextDrawLetterSize(Mafia[7], 0.180665, 1.118813);
TextDrawTextSize(Mafia[7], 52.000000, 97.000000);
TextDrawAlignment(Mafia[7], 2);
TextDrawColor(Mafia[7], 336860415);
TextDrawUseBox(Mafia[7], true);
TextDrawBoxColor(Mafia[7], -36827905);
TextDrawSetShadow(Mafia[7], 0);
TextDrawSetOutline(Mafia[7], 0);
TextDrawBackgroundColor(Mafia[7], -256);
TextDrawFont(Mafia[7], 2);
TextDrawSetProportional(Mafia[7], 1);
TextDrawSetSelectable(Mafia[7], true);

Mafia[8] = TextDrawCreate(404.333129, 215.618652, "your_card"); // text nick of game card
TextDrawLetterSize(Mafia[8], 0.146666, 0.990221);
TextDrawAlignment(Mafia[8], 1);
TextDrawColor(Mafia[8], -1);
TextDrawSetShadow(Mafia[8], 0);
TextDrawSetOutline(Mafia[8], 0);
TextDrawBackgroundColor(Mafia[8], 255);
TextDrawFont(Mafia[8], 2);
TextDrawSetProportional(Mafia[8], 1);

Mafia[9] = TextDrawCreate(404.333129, 254.533462, "dead~n~killed"); // text nick of game card
TextDrawLetterSize(Mafia[9], 0.146666, 0.990221);
TextDrawAlignment(Mafia[9], 1);
TextDrawColor(Mafia[9], -1);
TextDrawSetShadow(Mafia[9], 0);
TextDrawSetOutline(Mafia[9], 0);
TextDrawBackgroundColor(Mafia[9], 255);
TextDrawFont(Mafia[9], 2);
TextDrawSetProportional(Mafia[9], 1);

Mafia[10] = TextDrawCreate(404.666473, 221.511276, "12:00"); // timer
TextDrawLetterSize(Mafia[10], 0.316666, 1.952592);
TextDrawAlignment(Mafia[10], 1);
TextDrawColor(Mafia[10], -37548801);
TextDrawSetShadow(Mafia[10], 0);
TextDrawSetOutline(Mafia[10], 0);
TextDrawBackgroundColor(Mafia[10], 255);
TextDrawFont(Mafia[10], 2);
TextDrawSetProportional(Mafia[10], 1);

Mafia[11] = TextDrawCreate(429.833099, 254.203811, "15~n~20"); // box dead and killed amount
TextDrawLetterSize(Mafia[11], 0.146666, 0.990221);
TextDrawAlignment(Mafia[11], 1);
TextDrawColor(Mafia[11], -37548801);
TextDrawSetShadow(Mafia[11], 0);
TextDrawSetOutline(Mafia[11], 0);
TextDrawBackgroundColor(Mafia[11], 255);
TextDrawFont(Mafia[11], 2);
TextDrawSetProportional(Mafia[11], 1);


// Приватные текстдравы (Player Textdraws):

new PlayerText:MafiaP[18][MAX_PLAYERS];

MafiaP[0][playerid] = CreatePlayerTextDraw(playerid, 160.666671, 146.429702, "mafia's turn to pick"); // Text element
PlayerTextDrawLetterSize(playerid, MafiaP[0][playerid], 0.172997, 1.056591);
PlayerTextDrawAlignment(playerid, MafiaP[0][playerid], 1);
PlayerTextDrawColor(playerid, MafiaP[0][playerid], -1);
PlayerTextDrawSetShadow(playerid, MafiaP[0][playerid], 0);
PlayerTextDrawSetOutline(playerid, MafiaP[0][playerid], 0);
PlayerTextDrawBackgroundColor(playerid, MafiaP[0][playerid], 255);
PlayerTextDrawFont(playerid, MafiaP[0][playerid], 2);
PlayerTextDrawSetProportional(playerid, MafiaP[0][playerid], 1);

MafiaP[1][playerid] = CreatePlayerTextDraw(playerid, 163.666656, 172.977752, "LD_SPAC:white"); // box game card
PlayerTextDrawLetterSize(playerid, MafiaP[1][playerid], 0.000000, 0.000000);
PlayerTextDrawTextSize(playerid, MafiaP[1][playerid], 41.666690, 57.659217);
PlayerTextDrawAlignment(playerid, MafiaP[1][playerid], 1);
PlayerTextDrawColor(playerid, MafiaP[1][playerid], -1);
PlayerTextDrawUseBox(playerid, MafiaP[1][playerid], true);
PlayerTextDrawBoxColor(playerid, MafiaP[1][playerid], 336860160);
PlayerTextDrawSetShadow(playerid, MafiaP[1][playerid], 0);
PlayerTextDrawSetOutline(playerid, MafiaP[1][playerid], 0);
PlayerTextDrawBackgroundColor(playerid, MafiaP[1][playerid], 1162167807);
PlayerTextDrawFont(playerid, MafiaP[1][playerid], 5);
PlayerTextDrawSetProportional(playerid, MafiaP[1][playerid], 1);
PlayerTextDrawSetSelectable(playerid, MafiaP[1][playerid], true);
PlayerTextDrawSetPreviewModel(playerid, MafiaP[1][playerid], 292);
PlayerTextDrawSetPreviewRot(playerid, MafiaP[1][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

MafiaP[2][playerid] = CreatePlayerTextDraw(playerid, 213.333343, 172.977767, "LD_SPAC:white"); // box game card
PlayerTextDrawLetterSize(playerid, MafiaP[2][playerid], 0.000000, 0.000000);
PlayerTextDrawTextSize(playerid, MafiaP[2][playerid], 41.666690, 57.659217);
PlayerTextDrawAlignment(playerid, MafiaP[2][playerid], 1);
PlayerTextDrawColor(playerid, MafiaP[2][playerid], -1);
PlayerTextDrawUseBox(playerid, MafiaP[2][playerid], true);
PlayerTextDrawBoxColor(playerid, MafiaP[2][playerid], 336860160);
PlayerTextDrawSetShadow(playerid, MafiaP[2][playerid], 0);
PlayerTextDrawSetOutline(playerid, MafiaP[2][playerid], 0);
PlayerTextDrawBackgroundColor(playerid, MafiaP[2][playerid], 1162167807);
PlayerTextDrawFont(playerid, MafiaP[2][playerid], 5);
PlayerTextDrawSetProportional(playerid, MafiaP[2][playerid], 1);
PlayerTextDrawSetSelectable(playerid, MafiaP[2][playerid], true);
PlayerTextDrawSetPreviewModel(playerid, MafiaP[2][playerid], 292);
PlayerTextDrawSetPreviewRot(playerid, MafiaP[2][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

MafiaP[3][playerid] = CreatePlayerTextDraw(playerid, 262.833343, 172.977767, "LD_SPAC:white"); // box game card
PlayerTextDrawLetterSize(playerid, MafiaP[3][playerid], 0.000000, 0.000000);
PlayerTextDrawTextSize(playerid, MafiaP[3][playerid], 41.666690, 57.659217);
PlayerTextDrawAlignment(playerid, MafiaP[3][playerid], 1);
PlayerTextDrawColor(playerid, MafiaP[3][playerid], -1);
PlayerTextDrawUseBox(playerid, MafiaP[3][playerid], true);
PlayerTextDrawBoxColor(playerid, MafiaP[3][playerid], 336860160);
PlayerTextDrawSetShadow(playerid, MafiaP[3][playerid], 0);
PlayerTextDrawSetOutline(playerid, MafiaP[3][playerid], 0);
PlayerTextDrawBackgroundColor(playerid, MafiaP[3][playerid], 1162167807);
PlayerTextDrawFont(playerid, MafiaP[3][playerid], 5);
PlayerTextDrawSetProportional(playerid, MafiaP[3][playerid], 1);
PlayerTextDrawSetSelectable(playerid, MafiaP[3][playerid], true);
PlayerTextDrawSetPreviewModel(playerid, MafiaP[3][playerid], 292);
PlayerTextDrawSetPreviewRot(playerid, MafiaP[3][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

MafiaP[4][playerid] = CreatePlayerTextDraw(playerid, 311.999969, 172.977752, "LD_SPAC:white"); // box game card
PlayerTextDrawLetterSize(playerid, MafiaP[4][playerid], 0.000000, 0.000000);
PlayerTextDrawTextSize(playerid, MafiaP[4][playerid], 41.666690, 57.659217);
PlayerTextDrawAlignment(playerid, MafiaP[4][playerid], 1);
PlayerTextDrawColor(playerid, MafiaP[4][playerid], -1);
PlayerTextDrawUseBox(playerid, MafiaP[4][playerid], true);
PlayerTextDrawBoxColor(playerid, MafiaP[4][playerid], 336860160);
PlayerTextDrawSetShadow(playerid, MafiaP[4][playerid], 0);
PlayerTextDrawSetOutline(playerid, MafiaP[4][playerid], 0);
PlayerTextDrawBackgroundColor(playerid, MafiaP[4][playerid], 1162167807);
PlayerTextDrawFont(playerid, MafiaP[4][playerid], 5);
PlayerTextDrawSetProportional(playerid, MafiaP[4][playerid], 1);
PlayerTextDrawSetSelectable(playerid, MafiaP[4][playerid], true);
PlayerTextDrawSetPreviewModel(playerid, MafiaP[4][playerid], 292);
PlayerTextDrawSetPreviewRot(playerid, MafiaP[4][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

MafiaP[5][playerid] = CreatePlayerTextDraw(playerid, 311.999969, 262.477752, "LD_SPAC:white"); // box game card
PlayerTextDrawLetterSize(playerid, MafiaP[5][playerid], 0.000000, 0.000000);
PlayerTextDrawTextSize(playerid, MafiaP[5][playerid], 41.666690, 57.659217);
PlayerTextDrawAlignment(playerid, MafiaP[5][playerid], 1);
PlayerTextDrawColor(playerid, MafiaP[5][playerid], -1);
PlayerTextDrawUseBox(playerid, MafiaP[5][playerid], true);
PlayerTextDrawBoxColor(playerid, MafiaP[5][playerid], 336860160);
PlayerTextDrawSetShadow(playerid, MafiaP[5][playerid], 0);
PlayerTextDrawSetOutline(playerid, MafiaP[5][playerid], 0);
PlayerTextDrawBackgroundColor(playerid, MafiaP[5][playerid], 1162167807);
PlayerTextDrawFont(playerid, MafiaP[5][playerid], 5);
PlayerTextDrawSetProportional(playerid, MafiaP[5][playerid], 1);
PlayerTextDrawSetSelectable(playerid, MafiaP[5][playerid], true);
PlayerTextDrawSetPreviewModel(playerid, MafiaP[5][playerid], 292);
PlayerTextDrawSetPreviewRot(playerid, MafiaP[5][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

MafiaP[6][playerid] = CreatePlayerTextDraw(playerid, 262.833282, 262.477722, "LD_SPAC:white"); // box game card
PlayerTextDrawLetterSize(playerid, MafiaP[6][playerid], 0.000000, 0.000000);
PlayerTextDrawTextSize(playerid, MafiaP[6][playerid], 41.666690, 57.659217);
PlayerTextDrawAlignment(playerid, MafiaP[6][playerid], 1);
PlayerTextDrawColor(playerid, MafiaP[6][playerid], -1);
PlayerTextDrawUseBox(playerid, MafiaP[6][playerid], true);
PlayerTextDrawBoxColor(playerid, MafiaP[6][playerid], 336860160);
PlayerTextDrawSetShadow(playerid, MafiaP[6][playerid], 0);
PlayerTextDrawSetOutline(playerid, MafiaP[6][playerid], 0);
PlayerTextDrawBackgroundColor(playerid, MafiaP[6][playerid], 1162167807);
PlayerTextDrawFont(playerid, MafiaP[6][playerid], 5);
PlayerTextDrawSetProportional(playerid, MafiaP[6][playerid], 1);
PlayerTextDrawSetSelectable(playerid, MafiaP[6][playerid], true);
PlayerTextDrawSetPreviewModel(playerid, MafiaP[6][playerid], 292);
PlayerTextDrawSetPreviewRot(playerid, MafiaP[6][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

MafiaP[7][playerid] = CreatePlayerTextDraw(playerid, 213.166595, 262.477722, "LD_SPAC:white"); // box game card
PlayerTextDrawLetterSize(playerid, MafiaP[7][playerid], 0.000000, 0.000000);
PlayerTextDrawTextSize(playerid, MafiaP[7][playerid], 41.666690, 57.659217);
PlayerTextDrawAlignment(playerid, MafiaP[7][playerid], 1);
PlayerTextDrawColor(playerid, MafiaP[7][playerid], -1);
PlayerTextDrawUseBox(playerid, MafiaP[7][playerid], true);
PlayerTextDrawBoxColor(playerid, MafiaP[7][playerid], 336860160);
PlayerTextDrawSetShadow(playerid, MafiaP[7][playerid], 0);
PlayerTextDrawSetOutline(playerid, MafiaP[7][playerid], 0);
PlayerTextDrawBackgroundColor(playerid, MafiaP[7][playerid], 1162167807);
PlayerTextDrawFont(playerid, MafiaP[7][playerid], 5);
PlayerTextDrawSetProportional(playerid, MafiaP[7][playerid], 1);
PlayerTextDrawSetSelectable(playerid, MafiaP[7][playerid], true);
PlayerTextDrawSetPreviewModel(playerid, MafiaP[7][playerid], 292);
PlayerTextDrawSetPreviewRot(playerid, MafiaP[7][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

MafiaP[8][playerid] = CreatePlayerTextDraw(playerid, 163.499938, 262.477722, "LD_SPAC:white"); // box game card
PlayerTextDrawLetterSize(playerid, MafiaP[8][playerid], 0.000000, 0.000000);
PlayerTextDrawTextSize(playerid, MafiaP[8][playerid], 41.666690, 57.659217);
PlayerTextDrawAlignment(playerid, MafiaP[8][playerid], 1);
PlayerTextDrawColor(playerid, MafiaP[8][playerid], -1);
PlayerTextDrawUseBox(playerid, MafiaP[8][playerid], true);
PlayerTextDrawBoxColor(playerid, MafiaP[8][playerid], 336860160);
PlayerTextDrawSetShadow(playerid, MafiaP[8][playerid], 0);
PlayerTextDrawSetOutline(playerid, MafiaP[8][playerid], 0);
PlayerTextDrawBackgroundColor(playerid, MafiaP[8][playerid], 1162167807);
PlayerTextDrawFont(playerid, MafiaP[8][playerid], 5);
PlayerTextDrawSetProportional(playerid, MafiaP[8][playerid], 1);
PlayerTextDrawSetSelectable(playerid, MafiaP[8][playerid], true);
PlayerTextDrawSetPreviewModel(playerid, MafiaP[8][playerid], 292);
PlayerTextDrawSetPreviewRot(playerid, MafiaP[8][playerid], 0.000000, 0.000000, 0.000000, 1.000000);

MafiaP[9][playerid] = CreatePlayerTextDraw(playerid, 164.000000, 231.051956, "alexei~n~light"); // text nick of game card
PlayerTextDrawLetterSize(playerid, MafiaP[9][playerid], 0.131999, 0.828445);
PlayerTextDrawAlignment(playerid, MafiaP[9][playerid], 1);
PlayerTextDrawColor(playerid, MafiaP[9][playerid], -1);
PlayerTextDrawSetShadow(playerid, MafiaP[9][playerid], 0);
PlayerTextDrawSetOutline(playerid, MafiaP[9][playerid], 0);
PlayerTextDrawBackgroundColor(playerid, MafiaP[9][playerid], 255);
PlayerTextDrawFont(playerid, MafiaP[9][playerid], 2);
PlayerTextDrawSetProportional(playerid, MafiaP[9][playerid], 1);

MafiaP[10][playerid] = CreatePlayerTextDraw(playerid, 213.666671, 231.051986, "alexei~n~light"); // text nick of game card
PlayerTextDrawLetterSize(playerid, MafiaP[10][playerid], 0.131999, 0.828445);
PlayerTextDrawAlignment(playerid, MafiaP[10][playerid], 1);
PlayerTextDrawColor(playerid, MafiaP[10][playerid], -1);
PlayerTextDrawSetShadow(playerid, MafiaP[10][playerid], 0);
PlayerTextDrawSetOutline(playerid, MafiaP[10][playerid], 0);
PlayerTextDrawBackgroundColor(playerid, MafiaP[10][playerid], 255);
PlayerTextDrawFont(playerid, MafiaP[10][playerid], 2);
PlayerTextDrawSetProportional(playerid, MafiaP[10][playerid], 1);

MafiaP[11][playerid] = CreatePlayerTextDraw(playerid, 263.333251, 230.637176, "alexei~n~light"); // text nick of game card
PlayerTextDrawLetterSize(playerid, MafiaP[11][playerid], 0.131999, 0.828445);
PlayerTextDrawAlignment(playerid, MafiaP[11][playerid], 1);
PlayerTextDrawColor(playerid, MafiaP[11][playerid], -1);
PlayerTextDrawSetShadow(playerid, MafiaP[11][playerid], 0);
PlayerTextDrawSetOutline(playerid, MafiaP[11][playerid], 0);
PlayerTextDrawBackgroundColor(playerid, MafiaP[11][playerid], 255);
PlayerTextDrawFont(playerid, MafiaP[11][playerid], 2);
PlayerTextDrawSetProportional(playerid, MafiaP[11][playerid], 1);

MafiaP[12][playerid] = CreatePlayerTextDraw(playerid, 312.833282, 230.637207, "alexei~n~light"); // text nick of game card
PlayerTextDrawLetterSize(playerid, MafiaP[12][playerid], 0.131999, 0.828445);
PlayerTextDrawAlignment(playerid, MafiaP[12][playerid], 1);
PlayerTextDrawColor(playerid, MafiaP[12][playerid], -1);
PlayerTextDrawSetShadow(playerid, MafiaP[12][playerid], 0);
PlayerTextDrawSetOutline(playerid, MafiaP[12][playerid], 0);
PlayerTextDrawBackgroundColor(playerid, MafiaP[12][playerid], 255);
PlayerTextDrawFont(playerid, MafiaP[12][playerid], 2);
PlayerTextDrawSetProportional(playerid, MafiaP[12][playerid], 1);

MafiaP[13][playerid] = CreatePlayerTextDraw(playerid, 163.833251, 320.652038, "alexei~n~light"); // text nick of game card
PlayerTextDrawLetterSize(playerid, MafiaP[13][playerid], 0.131999, 0.828445);
PlayerTextDrawAlignment(playerid, MafiaP[13][playerid], 1);
PlayerTextDrawColor(playerid, MafiaP[13][playerid], -1);
PlayerTextDrawSetShadow(playerid, MafiaP[13][playerid], 0);
PlayerTextDrawSetOutline(playerid, MafiaP[13][playerid], 0);
PlayerTextDrawBackgroundColor(playerid, MafiaP[13][playerid], 255);
PlayerTextDrawFont(playerid, MafiaP[13][playerid], 2);
PlayerTextDrawSetProportional(playerid, MafiaP[13][playerid], 1);

MafiaP[14][playerid] = CreatePlayerTextDraw(playerid, 214.166595, 320.237213, "alexei~n~light"); // text nick of game card
PlayerTextDrawLetterSize(playerid, MafiaP[14][playerid], 0.131999, 0.828445);
PlayerTextDrawAlignment(playerid, MafiaP[14][playerid], 1);
PlayerTextDrawColor(playerid, MafiaP[14][playerid], -1);
PlayerTextDrawSetShadow(playerid, MafiaP[14][playerid], 0);
PlayerTextDrawSetOutline(playerid, MafiaP[14][playerid], 0);
PlayerTextDrawBackgroundColor(playerid, MafiaP[14][playerid], 255);
PlayerTextDrawFont(playerid, MafiaP[14][playerid], 2);
PlayerTextDrawSetProportional(playerid, MafiaP[14][playerid], 1);

MafiaP[15][playerid] = CreatePlayerTextDraw(playerid, 263.833160, 320.652069, "alexei~n~light"); // text nick of game card
PlayerTextDrawLetterSize(playerid, MafiaP[15][playerid], 0.131999, 0.828445);
PlayerTextDrawAlignment(playerid, MafiaP[15][playerid], 1);
PlayerTextDrawColor(playerid, MafiaP[15][playerid], -1);
PlayerTextDrawSetShadow(playerid, MafiaP[15][playerid], 0);
PlayerTextDrawSetOutline(playerid, MafiaP[15][playerid], 0);
PlayerTextDrawBackgroundColor(playerid, MafiaP[15][playerid], 255);
PlayerTextDrawFont(playerid, MafiaP[15][playerid], 2);
PlayerTextDrawSetProportional(playerid, MafiaP[15][playerid], 1);

MafiaP[16][playerid] = CreatePlayerTextDraw(playerid, 312.499877, 321.066894, "alexei~n~light"); // text nick of game card
PlayerTextDrawLetterSize(playerid, MafiaP[16][playerid], 0.131999, 0.828445);
PlayerTextDrawAlignment(playerid, MafiaP[16][playerid], 1);
PlayerTextDrawColor(playerid, MafiaP[16][playerid], -1);
PlayerTextDrawSetShadow(playerid, MafiaP[16][playerid], 0);
PlayerTextDrawSetOutline(playerid, MafiaP[16][playerid], 0);
PlayerTextDrawBackgroundColor(playerid, MafiaP[16][playerid], 255);
PlayerTextDrawFont(playerid, MafiaP[16][playerid], 2);
PlayerTextDrawSetProportional(playerid, MafiaP[16][playerid], 1);

MafiaP[17][playerid] = CreatePlayerTextDraw(playerid, 362.000000, 216.481475, "LD_CARD:CD1C"); // box card
PlayerTextDrawLetterSize(playerid, MafiaP[17][playerid], 0.000000, 0.000000);
PlayerTextDrawTextSize(playerid, MafiaP[17][playerid], 35.666683, 56.000022);
PlayerTextDrawAlignment(playerid, MafiaP[17][playerid], 1);
PlayerTextDrawColor(playerid, MafiaP[17][playerid], -1);
PlayerTextDrawSetShadow(playerid, MafiaP[17][playerid], 0);
PlayerTextDrawSetOutline(playerid, MafiaP[17][playerid], 0);
PlayerTextDrawFont(playerid, MafiaP[17][playerid], 4);

