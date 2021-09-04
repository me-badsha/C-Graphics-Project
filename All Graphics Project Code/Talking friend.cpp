
#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    char talk[5][50] = {
        "Hi",
        "Hello",
        "How are you?",
        "Fine. You?",
        "I'm also Fine"
    };

    initwindow(1350, 700);
    int i;

    for(i=0; i<5; i++){
        if(i%2==0){
            settextstyle(3, 0, 5);
            outtextxy(460, 180, talk[i]);
            line(420, 300, 480, 260);
            line(980, 300, 940, 240);
        }
        else {
            settextstyle(3, 0, 5);
            outtextxy(750, 180, talk[i]);
            line(420, 300, 460, 240);
            line(980, 300, 920, 260);
        }


        circle(350, 200, 50);
        rectangle(330, 250, 370, 420);

        circle(335, 180, 10);
        circle(365, 180, 10);

        arc(350, 200, 220, 320, 20);

        line(330, 260, 280, 300);
        line(280, 300, 330, 360);

        line(370, 260, 420, 300);

        line(330, 420, 280, 580);
        line(370, 420, 410, 580);



        circle(1050, 200, 50);
        rectangle(1030, 250, 1070, 420);

        circle(1035, 180, 10);
        circle(1065, 180, 10);

        arc(1050, 200, 220, 320, 20);

        line(1030, 260, 980, 300);

        line(1070, 260, 1120, 300);
        line(1120, 300, 1070, 360);

        line(1030, 420, 980, 580);
        line(1070, 420, 1110, 580);



        line(0, 580, 1350, 580);



        line(0, 150, 150, 150);
        line(0, 250, 220, 250);
        line(150, 150, 220, 250);
        line(150, 250, 150, 500);
        line(0, 500, 150, 500);


        delay(2000);
        cleardevice();
    }

    getch();
    closegraph();
    return 0;
}
