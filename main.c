#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#define p printf
#define gtxy gotoxy
#define slp sleep

int o;

/**< SLOT7 */
 char secname[20];
 int code1;
 int NumIssh1;
 int frfloat1;
 int hexa1;
 int Restrictingco1;
 int weight1;
 /**< SLOT8 */
 char secname2[20];
 int code2;
 int NumIssh2;
 int frfloat2;
 int hexa2;
 int Restrictingco2;
 int weight2;

/**< PAGE INCLUDES */
/** \START
 * \STATICVARIABLES
 * \GLOBALVARIABLES
 * \STRUCTURE
 * \FUNCTIONPOINTERS
 * \RECURSIONS
 *  \END
 */
/**< END */

/** STRUCTURES
*\START
*/
struct stocks {
 char *SecurityName;
 int Code;
 int NumIssh;
 int frfloat;
 float hexa;
 float Restrictingco;
 float weight;
} stocks1, stocks2, stocks3, stocks4, stocks5, stocks6;

void slot7()
{
 gtxy(1,1);p("[SYS]What is your Security Name: ");
 scanf("%s", &secname);
 gtxy(1,3);p("[SYS]What is your Code Number: ");
 scanf("%d", &code1);
 gtxy(1,5);p("[SYS]What is your Number-Issued Share: ");
 scanf("%d", &NumIssh1);
 gtxy(1,7);p("[SYS]What is your Free-Float Factor: ");
 scanf("%d", &frfloat1);
 gtxy(1,9);p("[SYS]What is your prefered Hex-Number: ");
 scanf("%d", &hexa1);
 gtxy(1,11);p("[SYS]What is your Restricting-Coefficient: ");
 scanf("%d", &Restrictingco1);
 gtxy(1,13);p("[SYS]What is your Investment-Weight: ");
 scanf("%d", &weight1);
 system("cls");
 return main();
}

void slot8()
{
 gtxy(1,1);p("[SYS]What is your Security Name: ");
 scanf("%s", &secname2);
 gtxy(1,3);p("[SYS]What is your Code Number: ");
 scanf("%d", &code2);
 gtxy(1,5);p("[SYS]What is your Number-Issued Share: ");
 scanf("%d", &NumIssh2);
 gtxy(1,7);p("[SYS]What is your Free-Float Factor: ");
 scanf("%d", &frfloat2);
 gtxy(1,9);p("[SYS]What is your prefered Hex-Number: ");
 scanf("%d", &hexa2);
 gtxy(1,11);p("[SYS]What is your Restricting-Coefficient: ");
 scanf("%d", &Restrictingco2);
 gtxy(1,13);p("[SYS]What is your Investment-Weight: ");
 scanf("%d", &weight2);
 system("cls");
 return main();
}
/**
*\END
*/

COORD co = {0,0};

void gotoxy(int x, int y)
{
 co.X=x;
 co.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), co);
}

void overview()
{
 /**< CALLING */
 stocks1.hexa = 0.01;
 stocks1.Code = 564856;
 stocks1.SecurityName = "Foods*OrdinaryShares";
 stocks1.NumIssh = 23500;
 stocks1.frfloat = 56;
 stocks1.Restrictingco = 0.57456;
 stocks1.weight = 56.78;
 int e;
 gtxy(1,1);p("\xB2SYS\xB2 OCCUPIED SLOTS \n");
 slp(3);
 p(" |_\n");
 gtxy(2,2);p("\n  \xB2\xB2 STOCKS \xB2\xB2 \n", stocks1.hexa);
 gtxy(2,4);p("_|\n");
 p(" \xB2|CodeNumber: %d                    \xB2\n", stocks1.Code);
 p(" \xB2|SecurityName:%s     \xB2\n", stocks1.SecurityName);
 p(" \xB2|NumberIssuedShare: %d              \xB2\n", stocks1.NumIssh);
 p(" \xB2|Free-Float Factor: %d                 \xB2\n", stocks1.frfloat);
 p(" \xB2|RestrictingCoefficient: %.2f          \xB2\n", stocks1.Restrictingco);
 p(" \xB2|Weight: %.2f                         \xB2\n", stocks1.weight);
 p(" \xB2|                                      \xB2");
 p("\n");
 gtxy(1,12);p("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
 /**\BREAKFORSTOCK
  *\SECONDDATA
  */
 stocks2.hexa = 0.02;
 stocks2.Code = 4879165;
 stocks2.SecurityName = "Beverages*OrdinaryShares";
 stocks2.NumIssh = 178541;
 stocks2.frfloat = 98;
 stocks2.Restrictingco = 0.144565;
 stocks2.weight = 78.78;
 gtxy(81,0);p("\xB2\n");
 gtxy(81,1);p("\xB2\n");
 gtxy(81,2);p("\xB2\n");
 gtxy(81,3);p("\xB2\n");
 gtxy(81,4);p("\xB2\n");
 /**START*/
gtxy(82,1);p(" $$$$$$$  $$        $$$$$$   $$    $$ \n");
gtxy(82,2);p(" $$  __$$ $$ |     $$  __$$  $$ |  $$ \n");
gtxy(82,3);p(" $$ |  $$ $$ |     $$ /   __|$$ |  $$ \n");
gtxy(82,4);p(" $$$$$$$  $$ |     $$ |      $$$$$$$$ \n");
gtxy(82,5);p(" $$  __$$ $$ |     $$ |      $$  __$$ \n");
gtxy(82,6);p(" $$ |  $$ $$ |     $$ |  $$  $$ |  $$ \n");
gtxy(82,7);p(" $$$$$$$  $$$$$$$$  $$$$$$  |$$ |  $$ \n");
gtxy(82,9);p(">>>>>>>>>>> MARKET WATCH <<<<<<<<<<<<< \n");
gtxy(82,10);p("US|Europe|Asia|FX|Rates|Futures|Crypto\n");
gtxy(82,11);p("__________ STOCK OVERVIEW ____________ \n");
 /**< \STOCKLOWER */
 /**END*/
 gtxy(40,5);p(" \xB2|CodeNumber: %d                   \xB2\n", stocks2.Code);
 gtxy(40,6);p(" \xB2|SecurityName:%s \xB2\n", stocks2.SecurityName);
 gtxy(40,7);p(" \xB2|NumberIssuedShare: %d             \xB2\n", stocks2.NumIssh);
 gtxy(40,8);p(" \xB2|Free-Float Factor: %d                 \xB2\n", stocks2.frfloat);
 gtxy(40,9);p(" \xB2|RestrictingCoefficient: %.2f          \xB2\n", stocks2.Restrictingco);
 gtxy(40,10);p(" \xB2|Weight: %.2f                         \xB2\n", stocks2.weight);
 gtxy(40,11);p(" \xB2|                                      \xB2");
 gtxy(40,12);p("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
 /**\BREAKFORSTOCK
  *\THIRDDATA
  */
 stocks3.hexa = 0.03;
 stocks3.Code = 184274;
 stocks3.SecurityName = "Deserts*OrdinaryShares";
 stocks3.NumIssh = 435823;
 stocks3.frfloat = 45;
 stocks3.Restrictingco = 0.184417;
 stocks3.weight = 46.87;
 gtxy(0,13);p(" \xB2|                                      \xB2");
 gtxy(0,14);p(" \xB2|CodeNumber: %d                   \xB2\n", stocks3.Code);
 gtxy(0,15);p(" \xB2|SecurityName:%s    \xB2\n", stocks3.SecurityName);
 gtxy(0,16);p(" \xB2|NumberIssuedShare: %d             \xB2\n", stocks3.NumIssh);
 gtxy(0,17);p(" \xB2|Free-Float Factor: %d                 \xB2\n", stocks3.frfloat);
 gtxy(0,18);p(" \xB2|RestrictingCoefficient: %.2f          \xB2\n", stocks3.Restrictingco);
 gtxy(0,19);p(" \xB2|Weight: %.2f                         \xB2\n", stocks3.weight);
 gtxy(0,20);p(" \xB2|                                      \xB2");
 gtxy(0,21);p(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

 /**\BREAKFORSTOCK
 *\FOURTHDATA
 */
 stocks4.hexa = 0.04;
 stocks4.Code = 878684;
 stocks4.SecurityName = "Packages*OrdinaryShares";
 stocks4.NumIssh = 658347;
 stocks4.frfloat = 103;
 stocks4.Restrictingco = 0.364389;
 stocks4.weight = 48.12;
 gtxy(40,13);p(" \xB2|                                      \xB2");
 gtxy(40,14);p(" \xB2|CodeNumber: %d                    \xB2\n", stocks4.Code);
 gtxy(40,15);p(" \xB2|SecurityName:%s  \xB2\n", stocks4.SecurityName);
 gtxy(40,16);p(" \xB2|NumberIssuedShare: %d             \xB2\n", stocks4.NumIssh);
 gtxy(40,17);p(" \xB2|Free-Float Factor: %d                \xB2\n", stocks4.frfloat);
 gtxy(40,18);p(" \xB2|RestrictingCoefficient: %.2f          \xB2\n", stocks4.Restrictingco);
 gtxy(40,19);p(" \xB2|Weight: %.2f                         \xB2\n", stocks4.weight);
 gtxy(40,20);p(" \xB2|                                      \xB2");
 gtxy(40,21);p("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
 /**\BREAKFORSTOCK
 *\FIFTHSTOCK
 */
 stocks5.hexa = 0.05;
 stocks5.Code = 287843;
 stocks5.SecurityName = "Others*OrdinaryShares";
 stocks5.NumIssh = 548942;
 stocks5.frfloat = 5848;
 stocks5.Restrictingco = 0.58674;
 stocks5.weight = 668.45;
 gtxy(0,22);p(" \xB2|                                      \xB2");
 gtxy(0,23);p(" \xB2|CodeNumber: %d                    \xB2\n", stocks5.Code);
 gtxy(0,24);p(" \xB2|SecurityName:%s    \xB2\n", stocks5.SecurityName);
 gtxy(0,25);p(" \xB2|NumberIssuedShare: %d             \xB2\n", stocks5.NumIssh);
 gtxy(0,26);p(" \xB2|Free-Float Factor: %d               \xB2\n", stocks5.frfloat);
 gtxy(0,27);p(" \xB2|RestrictingCoefficient: %.2f          \xB2\n", stocks5.Restrictingco);
 gtxy(0,28);p(" \xB2|Weight: %.2f                        \xB2\n", stocks5.weight);
 gtxy(0,29);p(" \xB2|                                      \xB2");
 gtxy(0,30);p(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
/**\BREAKFORSTOCK
 *\SIXTHSTOCK
 */
 stocks6.hexa = 0.06;
 stocks6.Code = 645984;
 stocks6.SecurityName = "Emil*OrdinaryShares";
 stocks6.NumIssh = 654845;
 stocks6.frfloat = 484;
 stocks6.Restrictingco = 0.548264;
 stocks6.weight = 45.65;
 gtxy(40,22);p(" \xB2|                                      \xB2");
 gtxy(40,23);p(" \xB2|CodeNumber: %d                    \xB2\n", stocks6.Code);
 gtxy(40,24);p(" \xB2|SecurityName:%s      \xB2\n", stocks6.SecurityName);
 gtxy(40,25);p(" \xB2|NumberIssuedShare: %d             \xB2\n", stocks6.NumIssh);
 gtxy(40,26);p(" \xB2|Free-Float Factor: %d                \xB2\n", stocks6.frfloat);
 gtxy(40,27);p(" \xB2|RestrictingCoefficient: %.2f          \xB2\n", stocks6.Restrictingco);
 gtxy(40,28);p(" \xB2|Weight: %.2f                         \xB2\n", stocks6.weight);
 gtxy(40,29);p(" \xB2|                                      \xB2");
 gtxy(40,30);p("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
 /**\BREAKFORSTOCK
 *\SEVENTHSTOCK
 */
 gtxy(0,31);p(" \xB2|                                      \xB2");
 gtxy(0,32);p(" \xB2|CodeNumber: %d                        \xB2\n", code1);
 gtxy(0,33);p(" \xB2|SecurityName:%s                        \xB2\n", secname);
 gtxy(0,34);p(" \xB2|NumberIssuedShare: %d                  \xB2\n", NumIssh1);
 gtxy(0,35);p(" \xB2|Free-Float Factor: %d                  \xB2\n", frfloat1);
 gtxy(0,36);p(" \xB2|RestrictingCoefficient: %d             \xB2\n", Restrictingco1);
 gtxy(0,37);p(" \xB2|Weight: %d                            \xB2\n", weight1);
 gtxy(0,38);p(" \xB2|                                      \xB2");
 gtxy(0,39);p(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
 /**\BREAKFORSTOCK
 *\SIXTHSTOCK
 */
 gtxy(40,31);p(" \xB2|                                      \xB2");
 gtxy(40,32);p(" \xB2|CodeNumber: %d                         \n", code2);
 gtxy(40,33);p(" \xB2|SecurityName:%s                        \n", secname2);
 gtxy(40,34);p(" \xB2|NumberIssuedShare: %d                  \n", NumIssh2);
 gtxy(40,35);p(" \xB2|Free-Float Factor: %d                  \n", frfloat2);
 gtxy(40,36);p(" \xB2|RestrictingCoefficient: %d             \n", Restrictingco2);
 gtxy(40,37);p(" \xB2|Weight: %d                             \n", weight2);
 gtxy(40,38);p(" \xB2|                                      \xB2");
 gtxy(81,32);p("\xB2");
 gtxy(81,33);p("\xB2");
 gtxy(81,34);p("\xB2");
 gtxy(81,35);p("\xB2");
 gtxy(81,36);p("\xB2");
 gtxy(81,37);p("\xB2");
 gtxy(40,39);p("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
 /** \STOCKSPRINTINGFORBLCH */\
 gtxy(82,15);p(">>>>>>>>>>> MARKET DIARIES <<<<<<<<<<< \n");
 gtxy(82,16);p(">>>>>>>>>>>  U.S.A MARKET  <<<<<<<<<<< \n");
 gtxy(82,18);p("  ISSUES:        NYSE       NASDAQ \n");

 gtxy(82,19);p("  Advancing      2,025      2,957 \n");
 gtxy(82,20);p("  Declining      1,312      1,725 \n");
 gtxy(82,21);p("  Unchanged      149	       252 \n");
 gtxy(82,22);p("  Total:         3,486      4,934 \n");

 gtxy(82,24);p("  ETSY  16.2 MRNA -3.1\n");
 gtxy(82,25);p("  DISH  11.3 EOG  -2.6\n");
 gtxy(82,26);p("  MOS   9.2  INTU -2.0\n");
int i;
for(i=0; i<37; i++){
  slp(1);
  gtxy(82,13);p(" Asia Dow  3,709.85   -13.81  -0.37%\n");
  slp(1);
  gtxy(82,13);p(" Nikkei 225 27,439.99   198.68  0.73%\n");
  slp(1);
  gtxy(82,13);p(" Hang Seng 24,573.29	 771.03  3.24%\n");
  slp(1);
  gtxy(82,13);p(" Shanghai 3,361.44   -32.81  -0.97%\n");
  slp(1);
  gtxy(82,13);p(" Sensex 58,644.82   -143.20  -0.24%\n");
  slp(1);
  gtxy(82,13);p(" Singapore 3,331.41	  15.42  0.47%\n");
  slp(1);
  gtxy(82,13);p(" Euro   1.1455  0.0006 0.05%\n");
  slp(1);
  gtxy(82,13);p(" Yen  115.18  -0.01  -0.01%\n");
  slp(1);
  gtxy(82,13);p(" Pound  1.3531  0.0003  0.02%\n");
  slp(1);
  gtxy(82,13);p(" Australia  $0.7072  -0.0006 -0.08%\n");
  slp(1);
  gtxy(82,13);p(" DXY Index  95.44  -0.05 -0.05%\n");
  slp(1);
  gtxy(82,13);p(" WSJ $ Idx  89.64  -0.03 -0.04%\n");
  slp(1);
  gtxy(82,13);p(" FTSE 100   7,516.40  -12.44 -0.17%\n");
  slp(1);
  gtxy(82,13);p(" DAX  15,099.56  -268.91 -1.75%\n");
  slp(1);
  gtxy(82,13);p(" CAC 40  6,951.38  -54.25 -0.77%\n");
  slp(1);
  gtxy(82,13);p(" FTSE MIB  26,603.59  -485.37 -1.79%\n");
  slp(1);
  gtxy(82,13);p(" IBEX 35  8,589.30  -100.10 -1.15%\n");
  slp(1);
  gtxy(82,13);p(" Stoxx 600  462.15  -6.48 -1.38%\n");
  slp(1);
  gtxy(82,13);p(" Bitcoin USD	43,906	-143 -0.33%\n");
  slp(1);
  gtxy(82,13);p(" Ethereum USD  3,135.25 -16.13 -0.51%\n");
  slp(1);
  gtxy(82,13);p(" XRP USD	0.8285  0.0283 3.53%\n");
  slp(1);
  gtxy(82,13);p(" Bitcoin Cash USD  346.12  7.41 2.19%\n");
  slp(1);
  gtxy(82,13);p(" Litecoin USD  137.98  1.34 0.98%\n");
  slp(1);
  gtxy(82,13);p(" Monero USD  185.49  1.62 0.88%\n");
  slp(1);
  gtxy(82,13);p(" Dow 35,091.13  1.39 0.00%\n");
  slp(1);
  gtxy(82,13);p(" S&P 500	4,483.87  -16.66 -0.37%\n");
  slp(1);
  gtxy(82,13);p(" Nasdaq	14,015.67  -82.34  -0.58%\n");
  slp(1);
  gtxy(82,13);p(" GlobalDow  4,224.35  3.12 0.07%\n");
  slp(1);
  gtxy(82,13);p(" Gold  1,821.50  -0.30 -0.02%\n");
  slp(1);
  gtxy(82,13);p(" Oil	91.25  -0.07 -0.08%\n");
  slp(1);
  gtxy(82,13);p(" U.S. 10yr	1.924  0.0038\n");
  slp(1);
  gtxy(82,13);p(" Germany 10yr	0.227 0.0172\n");
  slp(1);
  gtxy(82,13);p(" Italy 10yr	1.816 0.0723\n");
  slp(1);
  gtxy(82,13);p(" Spain 10yr	1.098 0.0507\n");
  slp(1);
  gtxy(82,13);p(" U.K. 10yr	1.413 -0.0016\n");
  slp(1);
  gtxy(82,13);p(" Japan 10yr	0.207 0.0066\n");
  slp(1);
  system("cls");
  return main();
 }
p("\n");
p("\n");
p("\n");
}

void supplies()
{
 /**<\PHASE TWO START */
 gtxy(0,0);for (o = 0; o <= 119; o++){
    p("%c", 176);
 }
  gtxy(0,1);p(" ____ _  _ ___  ___  _    _ ____ ____   \n");
  gtxy(0,2);p(" [__  |  | |__] |__] |    | |___ [__    \n");
  gtxy(0,3);p(" ___] |__| |    |    |___ | |___ ___]   \n");
  gtxy(0,4);for (o = 0; o <= 1; o++){
    gtxy(5,4);p("%c", 199);
    gtxy(5,5);p("%c", 200);
 }
 /**<\PHASE TWO END */
}

int main()
{
    int ss;
    int s;
    system("COLOR 0A");
    gtxy(1, 1);p("\xB2\xB2\xB2 OVERVIEW [1]\xB2\xB2     \n");
    gtxy(17, 1);p("\xB2\xB2 SLOT 1[2]\xB2\xB2   \n");
    gtxy(29, 1);p("\xB2\xB2 SLOT 2[3]\xB2\xB2    \n");
    gtxy(43, 1);p(" CHECK SUPPLIES [4]\xB2\xB2   \n");
    gtxy(64, 1);p(" FEEDBACK [5]\xB2\xB2   \n");
    gtxy(2, 2);p("\n");
    gtxy(2, 3);p("\xB2\xB2>: ");
    scanf("%d", &s);
    switch(s){
     case 1:
      system("cls");
      overview();
      break;
     case 2:
      system("cls");
      slot7();
      break;
     case 3:
      system("cls");
      slot8();
      break;
     case 4:
      system("cls");
      supplies();
      break;
     case 5:
      system("cls");
      system("C:\\Users\\~ZXZ~\\Desktop\\GitHub\\STOCK\\fd_run\\FEEDBACK.exe");
      system("cls");
      main();
      break;
     break;
     default:
        p("   \xB2 UNDEFINED CHARACTER > PRESS'1'REPEAT or '2'EXIT");
        scanf("%d", &ss);
        switch(ss){
    case 1:
        system("cls");
        main();
        break;
    case 2:
        system("cls");
        return EXIT_SUCCESS;
        }
}
}
