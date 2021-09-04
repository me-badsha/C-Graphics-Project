#include<graphics.h>
#include<conio.h>
int main()
{
    int gd = DETECT;
    int gm ;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(25,240,"Press any key to view the moving car");
    getch();

    int maxX = getmaxx();
    for(int i=1; i<maxX; i++)
    {
        //ROAD
        setcolor(DARKGRAY);
        line(0,370, maxX,370);

        // SUN
        setcolor(YELLOW);
        circle(80, 80, 50);


        setcolor(WHITE);
        rectangle(525,250,535,370);
        rectangle(480,200,580,250);
        outtextxy(490,222,"UTTARA");

        //BUS
        setcolor(YELLOW);
        rectangle(100+i,300,200+i,350);
        setcolor(GREEN);
        circle(120+i,360,10);
        circle(180+i,360,10);

        //Flying buses
        setcolor(DARKGRAY);
        rectangle(0*5+i,50,50*5+i,60);

        setcolor(WHITE);
        rectangle(100*5+i,70,150*5+i,80);

        setcolor(CYAN);
        rectangle(200*5+i,30,250*5+i,40);

        setcolor(DARKGRAY);
        rectangle(-400*5+i, 30,-350*5+i,40);

        setcolor(WHITE);
        rectangle(-100*5+i,70,-450*5+i,80);
        //PLANE
        setcolor(WHITE);
        //Front area
        line(450-i,100,500-i,100);
        line(450-i,100,440-i,105);
        line(450-i,110,500-i,110);
        line(450-i,110,440-i,105);

        //TOP FRONT WING
        line(500-i,100,520-i,30);
        line(520-i,30,520-i,100);

        //BOTTOM FRONT WING
        line(500-i,110,520-i,180);
        line(520-i,180,520-i,110);

        //REAR AREA
        line(520-i,100,570-i,100);
        line(520-i,110,570-i,110);

        //TOP REAR WING
        line(570-i,100,580-i,70);
        line(580-i,70,580-i,100);

        //BOTTOM REAR WING
        line(570-i,110,580-i,140);
        line(580-i,140,580-i,110);

        //LAST AREA
        line(580-i,100,585-i,100);
        line(580-i,110,585-i,110);
        line(585-i,110,585-i,100);

        delay(10);
        cleardevice();
    }
    getch();
    closegraph();
}
