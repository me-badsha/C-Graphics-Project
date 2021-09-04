#include<graphics.h>
using namespace std;

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm,NULL);
    int i,walk=0;

    setcolor(BROWN);
    bar3d(10,280,getmaxx()-50,320,10,50);


    setcolor(WHITE);
    circle(70,140,30);
    circle(60,130,3);
    circle(80,130,3);
    line(70,135,70,145);

    arc(70,140,60,120,15);

    line(70,170,70,220);
    line(70,170,50,220);
    line(70,170,90,220);
    line(70,220,55,270);
    line(70,220,85,270);

    setcolor(9);
    fillellipse(150,100,60,40);
    outtextxy(110,90,"Hi," );
    outtextxy(110,100,"Go for a walk?");

    delay(5000);

    for(i=0;i<30;i++)
    {


    walk+=5;

    cleardevice();

    setcolor(BROWN);
    bar3d(10,280,getmaxx()-50,320,10,50);


    setcolor(WHITE);
    circle(70+walk,140,30);
    line(70+walk,170,70+walk,220);
    line(70+walk,170,50+walk,220);
    line(70+walk,170,90+walk,220);
    line(70+walk,220,55+walk,270);
    line(70+walk,220,85+walk,270);

    delay(250);

    walk+=5;

    cleardevice();

    circle(70+walk,140,30);
    line(70+walk,170,70+walk,270);

    setcolor(BROWN);
    bar3d(10,280,getmaxx()-50,320,10,50);


    delay(250);

    walk+=5;

    cleardevice();

    bar3d(10,280,getmaxx()-50,320,10,50);

    setcolor(WHITE);
    circle(70+walk,140,30);
    line(70+walk,170,70+walk,220);
    line(70+walk,170,60+walk,220);
    line(70+walk,170,80+walk,220);
    line(70+walk,220,55+walk,270);
    line(70+walk,220,85+walk,270);

    delay(250);

    }

    circle(60+walk,130,3);
    circle(80+walk,130,3);
    line(70+walk,135,70+walk,145);
    line(65+walk,155,75+walk,155);


    setcolor(8);
    fillellipse(walk-10,100,60,40);
    outtextxy(walk-30,100,"lonely...");

    delay(2500);

    getch();
    closegraph();
    return 0;
}
