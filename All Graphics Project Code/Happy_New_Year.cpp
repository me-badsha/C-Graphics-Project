#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    initwindow(1200, 720);
    int i;

    for(i=0; i<=50; i++){
        delay(400);
        cleardevice();

        if(i%2==0){
            line(640+i, 370, 600+i, 300);
            line(760+i, 370, 820+i, 320);
        }
        else {
            line(640+i, 370, 580+i, 320);
            line(760+i, 370, 800+i, 300);
        }

        //Text SBC
        settextstyle(3, 0, 3);
        outtextxy(280, 100, "Hi! Friends");

        settextstyle(8, 0, 4);
        outtextxy(180, 150, "Happy New Year");

        settextstyle(9, 0, 3);
        outtextxy(290, 210, "2021");

        //Box SBC
        bar(160, 110, 270, 115);
        bar(380, 110, 490, 115);

        bar(160, 220, 270, 225);
        bar(380, 220, 490, 225);

        bar(160, 110, 165, 220);
        bar(485, 110, 490, 220);


        //Man SBC
        circle(700+i, 300, 50);
        line(700+i, 350, 700+i, 500);
        line(700+i, 500, 650+i, 650);
        line(700+i, 500, 750+i, 650);

        line(700+i, 400, 640+i, 370);
        line(700+i, 400, 760+i, 370);

        circle(680+i, 290, 7);
        circle(720+i, 290, 7);
        line(700+i, 300, 700+i, 315);
        arc(700+i, 310, 220, 320,20);


        //Gift Box SBC
        rectangle(200, 500, 350, 600);
        rectangle(190, 470, 360, 500);
        rectangle(270, 470, 285, 600);

    }

    getch();
    closegraph();
    return 0;
}
