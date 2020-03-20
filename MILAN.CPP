#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int gd,gm;
gd=DETECT;
initgraph(&gd,&gm,"..\\BGI");
int x=getmaxx();
int y=getmaxy();
line(x,y,0,0);
setcolor(14);
line(0,y,x,0);
setcolor(BLUE);
line(0,0,x,y);
setcolor(RED);
line(0,y/2,x,y/2);
setcolor(GREEN);
//setfillstyle(LTSLASH_FILL,BLUE);
circle(x/2,y/2,100);

floodfill(x/2,y/2,GREEN);

cleardevice();

line(x/2,y/2,5*x/8,y/2);
line(x/2,y/2,x/2,y/3);
//ellipse(x/2,y/3,135,50,66,3);
arc(x/2,y/2,0,90,80);
settextstyle(2,HORIZ_DIR,4);
outtextxy(x/2,3*y/8,"HELLO");
int i=0;
for(i=1;i<100;i++)
{
circle(x/i,y/i,i);
}
cleardevice();
setcolor(BLUE);
setfillstyle(SOLID_FILL,RED);
circle(x/2,y/2,150);
floodfill(x/2,y/2,BLUE);
settextstyle(3,HORIZ_DIR,2);
outtextxy(7*x/16,y/2,"WELCOME");


cleardevice();
line(80,150,200,150);
line(80,150,80,50);
settextstyle(1,HORIZ_DIR,1);
outtextxy(100,153,"<-X axis");
settextstyle(1,VERT_DIR,1);
outtextxy(60,50,"<-Y axis");
bar(100,100,120,150);
bar(130,120,150,150);

cleardevice();
line(0,0,640,0);
line(0,0,0,480);
line(639,0,639,480);
line(639,479,0,479);
i=0;
for(i=0;i<=1000;i++)
{
x=rand()%639;
y=rand()%480;
putpixel(x,y,15);
}

getch();
closegraph();
return 0;
}