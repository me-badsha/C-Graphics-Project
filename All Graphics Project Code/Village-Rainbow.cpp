#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void rainbow()
{
   int x,y,i;
   int gdriver=DETECT,gmode;
   initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");

    settextstyle(6,HORIZ_DIR,3);
    outtextxy(25,240,"Press any key to continue......");
    getch();
    setviewport(0,0,639,500,1);
    clearviewport();

   x=getmaxx()/2;
   y=getmaxy()/2;

   for(i=20;i<130;i++)
   {

       setcolor(i/10);
       arc(x,200,0,180,i+70);
       delay(40);


        setcolor(9);
        rectangle(0,0,750,200);
        setfillstyle(SOLID_FILL,9);
        floodfill(1, 1, 9);

        setcolor(10);
        rectangle(0,200,750,1200);
        setfillstyle(SOLID_FILL,10);
        floodfill(1, 201, 10);

 //for hut

    setcolor(WHITE);
    rectangle(360,180,460,300);
    rectangle(460,180,630,300);
    rectangle(390,250,430,300);
    rectangle(520,213,580,260);

    line(410,100,360,180);
    line(410,100,460,180);
    line(410,100,580,100);
    line(580,100,630,180);

     /* Fill colours */
    setfillstyle(SOLID_FILL, 7);
    floodfill(361, 181, WHITE);
    floodfill(461, 181, WHITE);

    setfillstyle(HATCH_FILL, BLUE);
    floodfill(391, 251, WHITE);
    floodfill(521, 215, WHITE);

    setfillstyle(SLASH_FILL, 8);
    floodfill(411, 105, WHITE);
    floodfill(421, 105, WHITE);



//For tree...

 setcolor(WHITE);
 setfillstyle(SOLID_FILL,GREEN);
 line(145,82,45,142);
 line(145,82,245,142);
 ellipse(145,142,180,360,100,28);
 floodfill(146,85,WHITE);

 setfillstyle(SOLID_FILL,GREEN);
 line(97,167,27,202);
 line(197,164,267,202);
 ellipse(147,202,180,360,120,30);
 floodfill(100,170,WHITE);

 setfillstyle(SOLID_FILL,GREEN);
 line(85,227,5,272);
 line(215,226,295,272);
 ellipse(150,272,180,360,145,30);
 floodfill(90,230,WHITE);

 setfillstyle(SOLID_FILL,BROWN);
 rectangle(120,300,180,450);
 floodfill(121,310,WHITE);


 //for man..

   setcolor(BLACK);
   setfillstyle(SOLID_FILL,BLACK);
   circle(192,378,13);
   floodfill(193,380,BLACK);
   line(190,390,192,400);
   line(189,390,191,400);
   setfillstyle(SOLID_FILL,RED);
   rectangle(180,400,200,450);
   floodfill(193,410,BLACK);
   //for leg..
   line(200,450,230,420);
   line(200,449,229,420);
   line(200,448,228,420);

   line(200,450,230,410);
   line(200,449,231,410);
   line(200,448,232,410);

   line(230,420,260,450);
   line(229,420,261,450);
   line(228,420,262,450);

   line(230,410,250,450);
   line(231,410,251,450);
   line(232,410,252,450);

   //for hand..
   line(193,410,207,425);
   line(193,411,207,426);

   line(207,425,230,420);

   line(200,410,210,423);
   line(210,423,230,410);



   }

}

int main()
{

    rainbow();
    getch();
}
