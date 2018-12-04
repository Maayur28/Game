#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,a=0,count=0,tim=0,speed=0,k=0,ch,j=0,i=0,gm,y=0,m,x=0,x_move=0,y_move=0;
char str[20];
initgraph(&gd,&gm,"C:\\TC\\BGI");
srand(time(NULL));
setcolor(BLUE);
settextstyle(1,0,8);
outtextxy(150,50,"CAR GAME");
setcolor(WHITE);
setfillstyle(SOLID_FILL,GREEN);
line(250,270,280,270);
line(250,200,250,270);
line(250,200,380,200);
line(380,200,410,230);
line(410,230,410,270);
line(410,270,380,270);
arc(300,270,0,180,20);
line(320,270,340,270);
arc(360,270,0,180,20);
floodfill(260,210,WHITE);
setfillstyle(SOLID_FILL,BROWN);
circle(300,270,15);
circle(360,270,15);
floodfill(305,275,WHITE);
floodfill(365,275,WHITE);
setcolor(MAGENTA);
settextstyle(2,0,6);
outtextxy(150,345,"NAME-");
setcolor(YELLOW);
settextstyle(1,0,2);
outtextxy(320,430,"Developed By- MAYUR AGARWAL");
gotoxy(28,23);
scanf("%s",str);
cleardevice();
setcolor(BLUE);
settextstyle(1,0,8);
outtextxy(100,30,"CAR GAME");
setcolor(RED);
settextstyle(1,0,6);
outtextxy(180,150,"WELCOME");
setcolor(YELLOW);
settextstyle(1,0,4);
outtextxy(240,210,str);
setcolor(WHITE);
settextstyle(1,0,2);
outtextxy(50,250,"LETS HAVE A LOOK OVER THE RULES");
outtextxy(50,300,"-You have to protect yourself from a head-on collision");
outtextxy(50,320,"-You cannot pause the game once its started");
outtextxy(50,340,"-You will only die of head-on collision");
for(i=0;i<10000;i++)
{
if(kbhit())
{
break;
}
setcolor(YELLOW);
settextstyle(1,0,1);
outtextxy(200,380,"PRESS ANY KEY TO START GAME");
delay(10);
setcolor(BLACK);
settextstyle(1,0,1);
outtextxy(200,380,"PRESS ANY KEY TO START GAME");
delay(10);
}
tim=rand()%4;
while(j!=tim+2)
{
j++;
for(i=0;i<280;i++)
{
setfillstyle(SOLID_FILL,WHITE);
bar(230,410,430,415);
setfillstyle(SOLID_FILL,BLACK);
bar(150,410,230,415);
bar(430,410,530,415);
setfillstyle(SOLID_FILL,GREEN);
bar(150+i,410,230+i,415);
setfillstyle(SOLID_FILL,BLACK);
bar(150,410,230,415);
bar(430,410,530,415);
delay(10);
}
}
i=0;
j=0;
setcolor(WHITE);
while(1)
{
count++;
if(tim>=200)
{
tim=0;
speed++;
}
i=rand()%3;
switch(i)
{
case 0:
{
x=210;
y=290;
break;
}
case 1:
{
x=280;
y=360;
break;
}
case 2:
{
x=210;
y=360;
break;
}}
for(a=0;a<50;a++)
{
tim++;
setcolor(YELLOW);
settextstyle(1,0,1);
outtextxy(50,20,str);
setcolor(WHITE);
gotoxy(10,4);
printf("%d",count);
if((290+y_move)==x+10&&400==(90+(a*10))||(290+y_move)==y&&400==(90+(a*10)))
exit(0);
//road boundary
line(200,0,200,470);
line(420,0,420,470);
//user car
setfillstyle(SLASH_FILL,RED);
rectangle(280+y_move,420,330+y_move,470);
floodfill(300+y_move,450,WHITE);
setfillstyle(XHATCH_FILL,YELLOW);
rectangle(290+y_move,390,320+y_move,420);
floodfill(300+y_move,410,WHITE);
//road moving line
for(k=0;k<900;k+=100)
{
line(270,-400+k+(a*10),270,-380+k+(a*10));
line(350,-400+k+(a*10),350,-380+k+(a*10));
}
//moving car
rectangle(x,10+(a*10),x+50,60+(a*10));
setfillstyle(SOLID_FILL,(rand()%14)+1);
floodfill(x+20,30+(a*10),WHITE);
rectangle(x+10,60+(a*10),x+40,90+(a*10));
setfillstyle(SOLID_FILL,(rand()%14)+1);
floodfill(x+20,70+(a*10),WHITE);
rectangle(y,10+(a*10),y+50,60+(a*10));
setfillstyle(SOLID_FILL,(rand()%14)+1);
floodfill(y+20,30+(a*10),WHITE);
rectangle(y+10,60+(a*10),y+40,90+(a*10));
setfillstyle(SOLID_FILL,(rand()%14)+1);
floodfill(y+20,80+(a*10),WHITE);
if(kbhit())
{
if(ch=getch())
{
if(ch==75&&y_move>-70)
{
x_move--;
y_move=x_move*70;
}
if(ch==77&&y_move<70)
{
x_move++;
y_move=x_move*70;
}
}
}
delay(15-(speed*3));
cleardevice();
}
}
}