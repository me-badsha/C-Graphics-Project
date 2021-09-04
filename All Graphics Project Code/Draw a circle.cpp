#include<graphics.h>
#include<conio.h>
#include<dos.h>

int main()
{
   int gd = DETECT, gm, x, y, color, angle = 0;
   struct arccoordstype a, b;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   delay(2000);
   while(angle<=360)
   {
      setcolor(BLUE);
      arc(getmaxx()/2,getmaxy()/2,angle,angle+2,100);
      setcolor(RED);
      getarccoords(&a);
      circle(a.xstart,a.ystart,45);
      setcolor(YELLOW);
      arc(getmaxx()/2,getmaxy()/2,angle,angle+2,150);
      getarccoords(&a);
      setcolor(GREEN);
      circle(a.xstart,a.ystart,45);
      angle = angle+5;
      delay(50);
   }
   getch();
   closegraph();
}
