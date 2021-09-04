#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    initwindow(1080, 700);
    int i;

    for(i=0; i<=250; i++)
    {
        delay(20);
        cleardevice();


        setfillstyle(SOLID_FILL, COLOR(1, 102, 80));
        rectangle(400, 300-i, 600, 400-i);
        floodfill(401, 302-i, WHITE);

        setfillstyle(SOLID_FILL, COLOR(235, 24, 50));
        circle(500, 350-i, 30);
        floodfill(501, 352-i, WHITE);


        rectangle(385, 30, 395, 600);
        circle(400, 40, 5);
        line(400, 45, 400, 550);
        line(0, 600, 1080, 600);


        circle(440, 440, 25);
        line(440, 465, 440, 540);
        line(440, 540, 420, 600);
        line(440, 540, 460, 600);

        line(440, 480, 420, 510);
        line(420, 510, 400, 500);

        line(440, 480, 420, 470);
        line(420, 470, 400, 450);

    }

    getch();
    closegraph();
}
