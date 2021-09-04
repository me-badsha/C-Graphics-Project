#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void displayMan(int x,int y)
{
    circle(x,y,20); //face
    line(x,y+20,x,y+30); //neck
    line(x,y+30,x+20,y+40); //right hand
    line(x+20,y+40,x+30,y+30);
    line(x,y+30,x,y+70); //body
    line(x+30,y+30,x+30,y-90); //umbrella
    pieslice(x+30,y-30,0,180,55);
}

void displayWoman(int a,int b)
{
//line(a,b+11,a,b+10);
    circle(a,b,20); //face
    line(a,b+20,a,b+30); //neck
    line(a,b+30,a-20,b+40); //left hand
    line(a,b+30,a+20,b+40); //right hand
    line(a,b+30,a,b+70); //body
}


int main()


{


    int gd=DETECT,
        gm,i,d=0,x=50,y=340,c=0,a=110,b=340,shouldMove=1;



    int rx,ry;


    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");


    while(!kbhit())


    {


        cleardevice();


        displayMan(x,340);
        displayWoman(a,340);
        line(0,430,639,430);



        for(i=0; i<500; i++)

        {
            rx=rand()%639;
            ry=rand()%439;
            if(rx>=(x-40)&&rx<=(x+110))
                if(ry>=(y-50)&&ry<=479)

                    continue;

            line(rx-10,ry+10,rx,ry);

        }

//legs For DisplayWoman

        if(shouldMove)

        {
            if(c<20)

                c+=4;

            else

                shouldMove=0;
            line(a,b+70,a-c,b+90);

            line(a,b+70,a+c,b+90);


        }

        else

        {
            if(c>0)

                c-=4;

            else

                shouldMove=1;

            line(a,b+70,a-c,b+90);

            line(a,b+70,a+c,b+90);
        }
        delay(200);
        a=(a+10)%639;



//legs For DisplayMan

        if(shouldMove)

        {

            if(d<20)

                d+=4;

            else

                shouldMove=0;
            line(x,y+70,x-d,y+90);

            line(x,y+70,x+d,y+90);


        }

        else

        {
            if(d>0)

                d-=4;

            else

                shouldMove=1;

            line(x,y+70,x-d,y+90);

            line(x,y+70,x+d,y+90);
        }
        delay(200);
        x=(x+10)%639;
    }
    getch();
}
