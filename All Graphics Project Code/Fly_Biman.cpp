#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
    int i;
    int gdrive=DETECT, gmode;
    initgraph(&gdrive,&gmode,"C\\TV\\bgi");
    for(i=1; i<=600; i++)
    {
        ///Airplane
        line(30+i,416-i,10+i,357-i);
        line(10+i,357-i,54+i,396-i);
        line(54+i,396-i,259+i,341-i);
        line(54+i,396-i,191+i,327-i);
        line(191+i,327-i,203+i,355-i);
        line(30+i,416-i,282+i,343-i);
        line(191+i,327-i,282+i,343-i);
        line(107+i,382-i,73+i,454-i);
        line(73+i,454-i,157+i,369-i);
        line(105+i,370-i,43+i,351-i);
        line(43+i,351-i,142+i,351-i);

        ///City

        rectangle(267-i,402+i,304-i,479+i);
        rectangle(322-i,383+i,366-i,479+i);
        rectangle(382-i,418+i,415-i,479+i);
        rectangle(442-i,421+i,464-i,479+i);
        rectangle(464-i,390+i,510-i,479+i);
        rectangle(521-i,373+i,567-i,479+i);
        rectangle(581-i,387+i,622-i,479+i);
        line(581-i,403+i,622-i,403+i);
        line(581-i,422+i,622-i,422+i);
        line(581-i,441+i,622-i,441+i);
        line(581-i,459+i,622-i,459+i);
        line(581-i,474+i,622-i,474+i);
        line(521-i,386+i,567-i,386+i);
        line(521-i,403+i,567-i,403+i);
        line(521-i,420+i,567-i,420+i);
        line(521-i,437+i,567-i,437+i);
        line(521-i,454+i,567-i,454+i);
        line(521-i,471+i,567-i,471+i);
        line(464-i,404+i,510-i,404+i);
        line(464-i,417+i,510-i,417+i);
        line(464-i,432+i,510-i,432+i);
        line(464-i,447+i,510-i,447+i);
        line(464-i,462+i,510-i,462+i);
        line(442-i,421+i,464-i,421+i);
        line(442-i,435+i,464-i,435+i);
        line(442-i,453+i,464-i,453+i);
        line(442-i,467+i,464-i,467+i);
        line(382-i,418+i,415-i,418+i);
        line(382-i,430+i,415-i,430+i);
        line(382-i,442+i,415-i,442+i);
        line(382-i,454+i,415-i,454+i);
        line(382-i,466+i,415-i,466+i);
        line(322-i,384+i,366-i,384+i);
        line(322-i,401+i,366-i,401+i);
        line(322-i,418+i,366-i,418+i);
        line(322-i,435+i,366-i,435+i);
        line(322-i,452+i,366-i,452+i);
        line(322-i,469+i,366-i,469+i);
        line(267-i,415+i,304-i,415+i);
        line(267-i,431+i,304-i,431+i);
        line(267-i,447+i,304-i,447+i);
        line(267-i,463+i,304-i,463+i);
        outtextxy(25,25,"Shahjalal International Airport");
        outtextxy(40,40,"Time : 12:10 AM");

        delay(5);
        cleardevice();
    }
    getch();
    closegraph();
}


