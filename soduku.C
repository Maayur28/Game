#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
union REGS in,out;
void main()
{
int arr[10][10]={0},gd=DETECT,gm,i,j,x,y,a,b,n=0,ii,jj,r,s,aa,sum,auto_a,auto_b,check[10][10]={0},num=-1,k=0;;
initgraph(&gd,&gm,"C:\\tc\\bgi");
rectangle(150,90,420,360);//big square
rectangle(240,90,330,360);//vertical inner square
rectangle(150,180,420,270);//horizontal inner square
rectangle(180,90,210,360);
rectangle(270,90,300,360);
rectangle(360,90,390,360);
rectangle(150,120,420,150);
rectangle(150,210,420,240);
rectangle(150,300,420,330);
setcolor(YELLOW);
line(240,90,240,360);
line(330,90,330,360);
line(150,180,420,180);
line(150,270,420,270);
//box filling
srand(time(NULL));
while(k!=9)
{
for(i=0;i<5;i++)
{
auto_a=rand()%9;
auto_b=k;
num=auto_a;
num--;
abc:
{
num++;
check[k][num]=rand()%9+1;
sum=check[k][num];
}
//horizontal
for(a=0;a<9;a++)
{
if(sum==check[k][a]&&a!=num)
{
num--;
goto abc;
}
}
//vertical
for(aa=0;aa<k;aa++)
{
if(check[aa][auto_a]==sum)
{
num--;
goto abc;
}
}
//box
ii=(k/3)*3;
jj=(num/3)*3;
for(r=ii;r<=ii+2;r++)
{
for(s=jj;s<=jj+2;s++)
{
if(sum==check[r][s]&&k!=r&&num!=s)
{
num--;
goto abc;
}
}
}
auto_a=auto_a*4+20;
auto_b=auto_b*2+7;
gotoxy(auto_a,auto_b);
printf("%d",sum);
}
num=0;
k++;
}
//end of auto filling

//manual filling
in.x.ax=1;
int86(0X33,&in,&out);
while(n!=-1)
{
start:
{
in.x.ax=3;
int86(0X33,&in,&out);
if(out.x.bx==1)
{
x=0;
y=0;
x=out.x.cx;
y=out.x.dx;
x=x/30;
y=y/30;
if(check[y-3][x-5]==0)
{
a=(x*3)+x;
b=(y*2)+1;
gotoxy(a,b);
in.x.ax=2;
int86(0X33,&in,&out);
setcolor(BLUE);
rectangle(x*30,y*30,(x*30)+30,(y*30)+30);
setcolor(WHITE);
i=(b-7)/2;
j=(a-20)/4;
scanf("%d",&arr[i][j]);
n=arr[i][j];
rectangle(x*30,y*30,(x*30)+30,(y*30)+30);
setcolor(YELLOW);
line(240,90,240,360);
line(330,90,330,360);
line(150,180,420,180);
line(150,270,420,270);
setcolor(WHITE);
//check redundancy
//vertical
for(k=0;k<9;k++)
{
if((arr[i][j]==arr[i][k]||arr[i][j]==check[i][k])&&j!=k)
{
setcolor(RED);
rectangle(x*30,y*30,(x*30)+30,(y*30)+30);
setcolor(WHITE);
break;
}
}
//horizontal
for(k=0;k<9;k++)
{
if((arr[i][j]==arr[k][j]||arr[i][j]==check[k][j])&&i!=k)
{
setcolor(RED);
rectangle(x*30,y*30,(x*30)+30,(y*30)+30);
setcolor(WHITE);
break;
}
}
//diagonal
ii=(i/3)*3;
jj=(j/3)*3;
for(r=ii;r<=ii+2;r++)
{
for(s=jj;s<=jj+2;s++)
{
if((arr[i][j]==arr[r][s]||arr[i][j]==check[r][s])&&i!=r&&j!=s)
{
setcolor(RED);
rectangle(x*30,y*30,(x*30)+30,(y*30)+30);
setcolor(WHITE);
break;
}
}
}
//end of redundancy checking
in.x.ax=1;
int86(0X33,&in,&out);
}
else
{
goto start;
}

}

}

}
getch();
closegraph();
}