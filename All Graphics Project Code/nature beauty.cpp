#include <stdio.h>
#include <graphics.h>
#include <dos.h>
int main()
{
    int i;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    ///Drawing house:

    rectangle(1,1,638,478);
    rectangle(48,313,96,388);
    rectangle(96,313,186,388);
    rectangle(39,389,195,402);
    rectangle(63,344,80,388);
    rectangle(107,327,123,345);
    rectangle(159,327,176,345);
    rectangle(132,342,151,388);
    line(48,313,71,287);
    line(71,287,96,313);
    line(186,312,161,285);
    line(161,285,71,287);

    ///Coloring the house:

    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(115,367,WHITE);
    floodfill(70,329,WHITE);

    ///Drawing tree:

    line(120,285,120,265);
    line(111,265,111,285);
    line(111,265,99,252);
    line(120,265,132,252);
    line(132,252,152,261);
    line(152,261,179,244);
    line(132,252,149,239);
    line(99,252,84,237);
    line(99,252,79,261);
    line(79,261,57,244);
    line(67,253,42,253);
    line(42,253,31,236);
    line(35,244,18,235);
    line(18,235,28,213);
    line(22,226,12,192);
    line(12,192,25,176);
    line(17,183,13,159);
    line(13,159,25,141);
    line(20,147,17,126);
    line(17,126,44,111);
    line(34,116,51,95);
    line(51,95,76,100);
    line(67,98,86,86);
    line(86,86,113,98);
    line(104,94,131,78);
    line(131,78,159,94);
    line(153,98,176,88);
    line(176,88,194,99);
    line(187,102,213,95);
    line(213,95,221,114);
    line(212,109,242,130);
    line(242,130,240,152);
    line(234,143,247,167);
    line(247,167,236,188);
    line(230,182,243,198);
    line(243,198,229,222);
    line(225,211,235,237);
    line(235,237,212,245);
    line(217,240,197,259);
    line(197,259,172,249);

    ///Drawing river:

    line(111,275,3,275);
    line(120,275,634,275);
    line(48,359,2,359);
    line(187,356,635,356);
    line(596,291,508,288);
    line(612,309,500,306);
    line(608,326,527,324);
    line(614,342,515,341);
    line(479,290,293,281);
    line(469,302,357,300);
    line(486,314,434,318);
    line(472,327,380,332);
    line(495,335,429,344);
    line(402,314,308,315);
    line(332,293,279,287);
    line(381,345,347,340);
    line(288,310,263,314);
    line(330,335,219,338);
    line(269,296,202,292);
    line(241,316,198,312);
    line(220,329,196,329);
    line(292,350,197,344);
    line(197,285,180,290);
    line(52,294,11,298);
    line(43,308,16,310);
    line(38,322,10,324);
    line(39,342,12,344);

      ///Drawing airplane:

    line(533,82,563,67);
    line(563,67,580,74);
    line(580,74,525,90);
    line(525,90,521,72);
    line(521,72,533,82);
    line(555,82,533,97);
    line(533,97,539,85);
    line(552,72,529,72);
    line(529,72,539,78);
    circle(559,75,1);
    circle(556,76,1);
    circle(553,77,1);
    circle(550,78,1);
    circle(547,79,1);
    circle(544,80,1);
    circle(528,83,2);

    ///Drawing moon:

    circle(547,79,50);

    ///Coloring the moon:

    setfillstyle(SOLID_FILL,WHITE);
    floodfill(547,88,WHITE);

    ///Drawing stars:

    circle(443,124,1);
    circle(363,69,2);
    circle(176,55,1);
    circle(64,32,1);
    circle(578,194,1);
    circle(331,171,1);
    circle(243,90,1);
    circle(228,25,2);
    circle(337,98,1);
    circle(443,60,2);
    circle(292,39,1);
    circle(117,45,1);
    circle(297,128,2);
    circle(275,180,1);
    circle(346,22,1);
    circle(393,140,2);
    circle(518,140,1);
    circle(422,29,2);
    circle(481,23,1);
    circle(22,26,2);
    circle(36,72,1);
    circle(15,105,2);
    circle(611,132,2);
    circle(472,182,1);
    circle(393,204,2);
    circle(314,216,1);
    circle(249,244,2);
    circle(526,204,2);
    circle(452,238,1);
    circle(549,247,1);
    circle(608,240,1);
    circle(146,22,2);
    circle(624,17,1);
    circle(614,79,1);
    circle(546,11,2);
    circle(356,248,2);
    circle(19,257,2);
    circle(8,178,1);
    circle(4,232,1);
    circle(549,247,1);
    circle(173,263,2);
    circle(89,265,1);
    circle(299,258,2);
    circle(411,263,1);
    circle(502,257,1);

    ///Drawing human-1:

    rectangle(222,384,246,409);
    rectangle(222,410,230,434);
    rectangle(237,410,245,434);
    rectangle(214,434,230,440);
    rectangle(237,434,253,440);
    line(222,384,206,404);
    line(206,404,222,410);
    line(246,384,255,405);
    line(255,405,264,411);
    circle(222,410,2);
    circle(235,372,11);

    ///Drawing human-2:

    rectangle(280,397,293,413);
    rectangle(280,413,285,428);
    rectangle(288,413,293,428);
    rectangle(274,428,285,433);
    rectangle(288,428,298,433);
    line(280,397,272,416);
    line(272,416,264,411);
    line(293,398,308,381);
    circle(287,391,7);
    circle(272,416,2);
    circle(308,381,1);


    getch();
    closegraph();
    return 0;
}
