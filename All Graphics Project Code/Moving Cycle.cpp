#include <graphics.h>
#include <dos.h>
#include <conio.h>
#include<stdlib.h>
int  main()
{
    int i, d = 0, gd = DETECT, gm;

    initgraph(&gd,&gm,"C:\\TC\\BGI");

    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,240,"Press any key to view the moving cycle");
    getch();
    for (i = 0; i < getmaxx()-180;  i++)
    {
        cleardevice();

//road
        line(5,400,630,400);
//wheels
        circle(30+i,370,30);
        circle(140+i,370,30);
        line(30+i,370,90+i,370);
        line(30+i,370,50+i,330);
        line(90+i,370,110+i,330);
        line(110+i,330,50+i,330);
        line(49+i,325,49+i,330);
        line(40+i,325,55+i,325);


        line(140+i,370,95+i,309);
        line(95+i,309,78+i,309);
//line(0,400,640,400);
        circle(60+i,270,10);//for head
        //eye
        circle(64+i,268,2);
        line(56+i,280,49+i,320);//for body
        line(56+i,285,80+i,310);//for hand
        //leg
        line(49+i,320,70+i,335);
        line(70+i,335,80+i,360);
        delay(10);


    }

    getch();
    closegraph();
    return 0;
}
