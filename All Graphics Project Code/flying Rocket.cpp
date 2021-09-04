#include<stdio.h>
#include<graphics.h>

void rocket();
int main()
{
    int gd=DETECT,gm=0;
    initgraph(&gd,&gm,"");
    rocket();
    getch();
    closegraph();
}
void rocket()
{
    int i;
    for(i=0; i<505 && !kbhit(); i++)
    {
        //clearing device
        cleardevice();
        //rocket body
        line(250,250-i,250,400-i);
        line(320,250-i,320,400-i);
        //rocket circle design
        ellipse(285,260-i,0,360,35,10);
        ellipse(285,400-i,0,360,35,10);
        setfillstyle(SOLID_FILL,12);
        fillellipse(285,260-i,35,10);
        fillellipse(285,400-i,35,10);
        //rocket name setting
        setcolor(12);
        settextstyle(SMALL_FONT,VERT_DIR,8);
        outtextxy(302,340-i,"BR");
        setcolor(WHITE);
        //rocket head body connect
        line(250,250-i,250,200-i);
        line(320,250-i,320,200-i);
        //creating rocket head

        setfillstyle(SOLID_FILL,YELLOW);
        line(250,200-i,285,150-i);
        line(320,200-i,285,150-i);
        line(250,200-i,320,200-i);
        floodfill(285,180-i,WHITE);
        //rocket chest design
        line(260,200-i,260,252-i);
        line(270,200-i,270,251-i);
        line(280,200-i,280,250-i);
        line(290,200-i,290,250-i);
        line(300,200-i,300,251-i);
        line(310,200-i,310,252-i);
        //rocket tail
        setfillstyle(SOLID_FILL,RED);
        line(250,400-i,220,450-i);
        line(320,400-i,350,450-i);
        line(220,450-i,350,450-i);
        floodfill(245,410-i,WHITE);


        // duya
        setfillstyle(SOLID_FILL,GREEN);
        ellipse(285,450-i,180,360,35,10);
        floodfill(280,455-i,WHITE);
        setfillstyle(INTERLEAVE_FILL,WHITE);
        line(270,460-i,300,460-i);
        line(270,460-i,260,500-i);
        line(300,460-i,310,500-i);
        line(260,500-i,310,500-i);
        floodfill(280,499-i,WHITE);

        //time delay

        delay(40);
    }

}
