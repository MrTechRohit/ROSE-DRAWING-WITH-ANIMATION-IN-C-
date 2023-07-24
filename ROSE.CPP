// _________ WELCOME ALL OF YOU ON COMPUTER SOFT SKILLS CHANNEL ___________
//________________ C++ PROGRAMMING TO DRAW ROSE WITH ANIMATION ______________


#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void floodfill(int x,int y,int old, int fill)
{
int current;
current=getpixel(x,y);
if(current==old)
{
putpixel(x,y,fill);
delay(2);
floodfill(x+1,y,old,fill);
floodfill(x-1,y,old,fill);
floodfill(x,y+1,old,fill);
floodfill(x,y-1,old,fill);
}
}
void main()
{
int gd =DETECT,gm,o=0;
initgraph(&gd,&gm,"c://tc//bgi");

setbkcolor(7);

setcolor(4);
settextstyle(1,0,1);
outtextxy(250,400,"Created by :- ");
setcolor(1);
outtextxy(250,420,"COMPUTER SOFT SKILLS");
setcolor(6);
outtextxy(250,440,"(ROHIT)");

setcolor(RED);
arc(150,110,400,170,35);
arc(150,120,420,130,30);

arc(128,130,360,150,30);
arc(137,151,404,492,31);
arc(112,119,120,289,10);

arc(185,119,394,170,32);
arc(182,130,390,170,25);
arc(205,107,200,60,9);

arc(102,155,340,65,30);
arc(176,205,140,225,60);
arc(224,132,139,222,31);
arc(169,201,-140,58,57);

line(116,200,226,200);
line(132,150,199,150);

// ______ROSE SPRIG_________
setcolor(2);
arc(132,290,400,180,40);
arc(113,288,435,550,20);
arc(135,282,400,500,20);
arc(210,290,370,140,40);
arc(235,286,370,120,15);
arc(212,286,400,150,20);
arc(188,284,400,150,10);
arc(156,298,400,100,29);

line(160,269,180,410);
line(175,274,195,420);
line(180,410,195,420);
line(174,360,189,365);
line(164,300,180,308);

// ___FILL ROSE RED COLOR
floodfill(156,110,o,12);
floodfill(145,110,o,12);
floodfill(146,105,o,12);
floodfill(169,220,o,RED);
floodfill(169,180,o,RED);
floodfill(169,132,o,RED);

//____FILL SPRIG GREEN COLOR
floodfill(180,270,o,10);
floodfill(178,330,o,10);
floodfill(180,370,o,10);
floodfill(176,305,o,10);

getch();
}


//____________ I HOPE YOU LIKE THIS PROGRAMMING VIDEO ___________________

//____________ LIKE __________ SHARE __________ SUBSCRIBE __________________







