#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void start()
{
int gd=DETECT,gm,i,j;
initgraph(&gd,&gm,"C:\\TC\\BGI");
settextstyle(7,0,5);
outtextxy(280,50,"TIC");
settextstyle(7,0,7);
outtextxy(240,150,"TAC");
settextstyle(7,0,9);
outtextxy(200,250,"TOE");
bar(200,400,400,420);
for(i=0;i<=200;i++)
{
setfillstyle(SOLID_FILL,GREEN);
bar(200+i,400,200+i,420);
setcolor(i);
settextstyle(8,0,1);
outtextxy(242,430,"LOADING...");
delay(30);
}}
void ttt()
{
int gd=DETECT,gm,i,m,t=0,y=10,z=10,add=15,sub=15,a,b,count=0;
int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
int b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0;
initgraph(&gd,&gm,"C:\\TC\\BGI");
line(50,200,400,200);
line(150,100,150,400);
line(300,100,300,400);
line(50,300,400,300);
for(i=10;i<180;i=i+20)
{
if(i<=50)
{
gotoxy(i,10);
count++;
printf("%d",count);
}
else if(i>55 && i<=110)
{
gotoxy(y,16);
y=y+20;
count++;
printf("%d",count);
}
else if(i>110)
{
gotoxy(z,22);
z=z+20;
count++;
printf("%d",count);
}}
settextstyle(8,0,5);
outtextxy(90,30,"TIC TAC TOE");
gotoxy(60,10);
printf("ENTER YOUR CHOICE");
gotoxy(60,12);
printf("PLAYER1");
gotoxy(70,12);
printf("PLAYER2");
for(m=0;m<=4;m++)
{
gotoxy(60,add);
printf(">>  ");
add=add+2;
scanf("%d",&a);
switch (a)
{
case 1:
if(a1==1||b1==1)
{
break;
}
else
gotoxy(10,10);
printf("X");
a1++;
break;
case 2:
if(a2==1||b2==1)
{
break;
}
else
gotoxy(30,10);
printf("X");
a2++;
break;
case 3:
if(a3==1||b3==1)
{
break;
}
else
gotoxy(50,10);
printf("X");
a3++;
break;
case 4:
if(a4==1||b4==1)
{
break;
}
else
gotoxy(10,16);
printf("X");
a4++;
break;
case 5:
if(a5==1||b5==1)
{
break;
}
else
gotoxy(30,16);
printf("X");
a5++;
break;
case 6:
if(a6==1||b6==1)
{
break;
}
else
gotoxy(50,16);
printf("X");
a6++;
break;
case 7:
if(a7==1||b7==1)
{
break;
}
else
gotoxy(10,22);
printf("X");
a7++;
break;
case 8:
if(a8==1||b8==1)
{
break;
}
else
gotoxy(30,22);
printf("X");
a8++;
break;
case 9:
if(a9==1||b9==1)
{
break;
}
else
gotoxy(50,22);
printf("X");
a9++;
break;
}
if(a1==1&&a2==1&&a3==1)
{
setcolor(GREEN);
line(60,150,400,150);
line(60,151,400,151);
line(60,152,400,152);
delay(2000);
setcolor(RED);
settextstyle(4,0,6);
outtextxy(150,200,"PLAYER 1 WINS");
break;
}
if(a1==1&&a4==1&&a7==1)
{
setcolor(GREEN);
line(70,150,70,340);
line(71,150,71,340);
line(72,150,72,340);
delay(2000);
setcolor(RED);
settextstyle(4,0,6);
outtextxy(150,200,"PLAYER 1 WINS");
break;
}
if(a1==1&&a5==1&&a9==1)
{
setcolor(GREEN);
line(60,147,400,343);
line(60,148,400,344);
line(60,149,400,345);
delay(2000);
setcolor(RED);
settextstyle(4,0,6);
outtextxy(150,200,"PLAYER 1 WINS");
break;
}
if(a2==1&&a5==1&&a8==1)
{
setcolor(GREEN);
line(230,150,230,340);
line(231,150,231,340);
line(232,150,232,340);
delay(2000);
setcolor(RED);
settextstyle(4,0,6);
outtextxy(150,200,"PLAYER 1 WINS");
break;
}
if(a3==1&&a6==1&&a9==1)
{
setcolor(GREEN);
line(400,150,400,340);
line(401,150,401,340);
line(402,150,402,340);
delay(2000);
setcolor(RED);
settextstyle(4,0,6);
outtextxy(150,200,"PLAYER 1 WINS");
break;
}
if(a3==1&&a5==1&&a7==1)
{
setcolor(GREEN);
line(400,150,60,340);
line(401,150,61,340);
line(402,150,62,340);
delay(2000);
setcolor(RED);
settextstyle(4,0,6);
outtextxy(150,200,"PLAYER 1 WINS");
break;
}
if(a4==1&&a5==1&&a6==1)
{
setcolor(GREEN);
line(60,240,400,240);
line(60,241,400,241);
line(60,242,400,242);
delay(2000);
setcolor(RED);
settextstyle(4,0,6);
outtextxy(150,200,"PLAYER 1 WINS");
break;
}
if(a7==1&&a8==1&&a9==1)
{
setcolor(GREEN);
line(60,340,400,340);
line(60,341,400,341);
line(60,342,400,342);
delay(2000);
setcolor(RED);
settextstyle(4,0,6);
outtextxy(150,200,"PLAYER 1 WINS");
break;
}
else
{
t++;
if(t==5)
{
settextstyle(4,0,8);
outtextxy(200,150,"DRAW");
}
else
{
setcolor(WHITE);
gotoxy(70,sub);
printf(">>  ");
sub=sub+2;
scanf("%d",&a);
switch (a)
{
case 1:
if(a1==1)
{
break;
}
else
gotoxy(10,10);
printf("O");
b1++;
break;
case 2:
if(a2==1)
{
break;
}
else
gotoxy(30,10);
printf("O");
b2++;
break;
case 3:
if(a3==1)
{
break;
}
else
gotoxy(50,10);
printf("O");
b3++;
break;
case 4:
if(a4==1)
{
break;
}
else
gotoxy(10,16);
printf("O");
b4++;
break;
case 5:
if(a5==1)
{
break;
}
else
gotoxy(30,16);
printf("O");
b5++;
break;
case 6:
if(a6==1)
{
break;
}
else
gotoxy(50,16);
printf("O");
b6++;
break;
case 7:
if(a7==1)
{
break;
}
else
gotoxy(10,22);
printf("O");
b7++;
break;
case 8:
if(a8==1)
{
break;
}
else
gotoxy(30,22);
printf("O");
b8++;
break;
case 9:
if(a9==1)
{
break;
}
else
gotoxy(50,22);
printf("O");
b9++;
break;
}
if(b1==1&&b2==1&&b3==1)
{
setcolor(GREEN);
line(60,150,400,150);
line(60,151,400,151);
line(60,152,400,152);
delay(2000);
setcolor(RED);
settextstyle(4,0,6);
outtextxy(150,200,"PLAYER 2 WINS");
break;
}
if(b1==1&&b4==1&&b7==1)
{
setcolor(GREEN);
line(70,150,70,340);
line(71,150,71,340);
line(72,150,72,340);
delay(2000);
setcolor(RED);
settextstyle(4,0,6);
outtextxy(150,200,"PLAYER 2 WINS");
break;
}
if(b1==1&&b5==1&&b9==1)
{
setcolor(GREEN);
line(60,147,400,343);
line(60,148,400,344);
line(60,149,400,345);
delay(2000);
setcolor(RED);
settextstyle(4,0,6);
outtextxy(150,200,"PLAYER 2 WINS");
break;
}
if(b2==1&&b5==1&&b8==1)
{
setcolor(GREEN);
line(60,147,400,343);
line(60,148,400,344);
line(60,149,400,345);
delay(2000);
setcolor(RED);
settextstyle(4,0,6);
outtextxy(150,200,"PLAYER 2 WINS");
break;
}
if(b3==1&&b6==1&&b9==1)
{
setcolor(GREEN);
line(400,150,400,340);
line(401,150,401,340);
line(402,150,402,340);
delay(2000);
setcolor(RED);
settextstyle(4,0,6);
outtextxy(150,220,"PLAYER 2 WINS");
break;
}
if(b3==1&&b5==1&&b7==1)
{
setcolor(GREEN);
line(400,340,400,340);
line(401,340,401,340);
line(402,340,402,340);
delay(2000);
setcolor(RED);
settextstyle(4,0,6);
outtextxy(150,200,"PLAYER 2 WINS");
break;
}
if(b4==1&&b5==1&&b6==1)
{
setcolor(GREEN);
line(60,240,400,240);
line(60,241,400,241);
line(60,242,400,242);
delay(2000);
setcolor(RED);
settextstyle(4,0,6);
outtextxy(150,200,"PLAYER 2 WINS");
break;
}
if(b7==1&&b8==1&&b9==1)
{
setcolor(GREEN);
line(60,340,400,340);
line(60,341,400,341);
line(60,342,400,342);
delay(2000);
setcolor(RED);
settextstyle(4,0,6);
outtextxy(150,200,"PLAYER 2 WINS");
break;
}}}}}
void main()
{ int a;
start();
ttt();
for(a=200;a<700;a=a+20)
{
sound(a);
delay(100);
}
nosound();
delay(1000);
ttt();
for(a=200;a<700;a=a+20)
{
sound(a);
delay(100);
}
nosound();
delay(1000);
getch();
closegraph();
}
