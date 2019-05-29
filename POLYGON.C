#include<conio.h>
#include<graphics.h>
#include<dos.h>
void A();
void B();
void C();
void D();
void A1();
void B1();
void C1();
void D1();
void hold1();
void hold2();
void hold3();
void hold4();
void music();
void music1();
void detectB();
void detectA();
void detectC();
void detectD();
void ques1();
void ques2();
void ques2a();
void ques2b();
void ques3();
void ques3a();
void ques3b();
void ques4();
void ques4a();
void ques4b();
void ques5();
void ques5a();
void ques5b();
void ques6();
void ques6a();
void ques6b();
void ques7();
void ques7a();
void ques7b();
void ques8();
void ques8a();
void ques8b();
void celeb();
void celeb1();
void celeb2();
void hidemouse();
void showmouse_graphics();
void showmouse();
void logo();
void amount1();
void amount2();
void amount3();
void amount4();
void amount5();
void amount6();
void money()
{
setcolor(YELLOW);
line(500,100,500,300);
setcolor(MAGENTA);
settextstyle(11,0,4);
outtextxy(510,295," 1: 10,000");
outtextxy(510,265," 2: 40,000");
setcolor(WHITE);
outtextxy(510,235," 3: 80,000");
setcolor(MAGENTA);
outtextxy(510,205," 4: 3,20,000");
setcolor(WHITE);
outtextxy(510,175," 5: 12,50,000");
setcolor(MAGENTA);
outtextxy(510,145," 6: 50,00,000");
setcolor(GREEN);
outtextxy(510,115," 7: 1,00,00,000");
setcolor(WHITE);
setfillstyle(SOLID_FILL,BLUE);
ellipse(605,30,0,360,30,20);
floodfill(605,30,WHITE);
setcolor(YELLOW);
settextstyle(1,0,1);
outtextxy(590,18,"X 2");
setcolor(WHITE);
setfillstyle(SOLID_FILL,BLUE);
ellipse(525,30,0,360,30,20);
floodfill(525,30,WHITE);
setcolor(YELLOW);
circle(511,20,7);
circle(525,20,7);
circle(539,20,7);
line(511,27,501,37);
line(511,27,521,37);
line(525,27,515,37);
line(525,27,535,37);
line(539,27,529,37);
line(539,27,549,37);
circle(511,20,6);
circle(525,20,6);
circle(539,20,6);
line(510,26,500,36);
line(510,26,520,36);
line(524,26,514,36);
line(524,26,534,36);
line(540,26,530,36);
line(540,26,550,36);
setcolor(BLUE);
settextstyle(7,0,4);
outtextxy(20,5,"KON BANEGA CROREPATI");
setcolor(YELLOW);
settextstyle(5,0,2);
outtextxy(50,35,"Developed By- MAYUR AGARWAL");
setcolor(WHITE);
}
union REGS in, out;
void doubledipB()
{
int a=0,c=0,x,y,button,points2[]={65,455,80,435,325,435,340,455,325,475,80,475,65,455};
hidemouse();
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
ellipse(605,30,0,360,30,20);
floodfill(605,30,WHITE);
setcolor(YELLOW);
settextstyle(1,0,1);
outtextxy(590,18,"X 2");
setcolor(RED);
settextstyle(4,0,4);
outtextxy(320,405,"X2");
showmouse_graphics();
	   while(!kbhit())
		 {
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>69&&x<335)&&(y>437&&y<472))
			 {
			 hidemouse();
			 music1();
			 hold2();
			 delay(5000);
			 while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount2();
			delay(3000);
			ques3a();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			showmouse_graphics();
			c++;
			if(c==2)
			{
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			getch();
			}}}
			if((x>343&&x<609)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold3();
			delay(5000);
			C();
			showmouse_graphics();
			c++;
			if(c==2)
			{
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			getch();
			}}}
		       if((x>344&&x<611)&&(y>437&&y<472))
		       {
		       hidemouse();
		       music1();
					hold4();
			delay(5000);
			D();
			showmouse_graphics();
			c++;
			if(c==2)
			{
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			getch();
		       }}}
		       delay(200);
		       }}}

void doubledipC()
{
int a=0,c=0,x,y,button,points3[]={340,405,355,385,600,385,615,405,595,425,355,425,340,405};
hidemouse();
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
ellipse(605,30,0,360,30,20);
floodfill(605,30,WHITE);
setcolor(YELLOW);
settextstyle(1,0,1);
outtextxy(590,18,"X 2");
setcolor(RED);
settextstyle(4,0,4);
outtextxy(320,405,"X2");
showmouse_graphics();
	   while(!kbhit())
		 {
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>343&&x<609)&&(y>387&&y<422))
			 {
			 hidemouse();
			 music1();
			 hold3();
			 delay(5000);
			 while(a!=10)
		{
			 C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			}
			delay(1500);
			cleardevice();
			amount3();
			delay(3000);
			ques4a();
			}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			B();
			showmouse_graphics();
			c++;
			if(c==2)
			{
			while(a!=10)
		{
			C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			getch();
			}}}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			showmouse_graphics();
			c++;
			if(c==2)
			{
			while(a!=10)
		{
			C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			getch();
			}}}
		       if((x>344&&x<611)&&(y>437&&y<472))
		       {
		       hidemouse();
		       music1();
					hold4();
			delay(5000);
			D();
			showmouse_graphics();
			c++;
			if(c==2)
			{
			while(a!=10)
		{
			C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			getch();
		       }}}
		       delay(200);
			}}}
void doubledipD()
{
int a=0,c=0,x,y,button,points4[]={340,455,355,435,600,435,615,455,595,475,355,475,340,455};
hidemouse();
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
ellipse(605,30,0,360,30,20);
floodfill(605,30,WHITE);
setcolor(YELLOW);
settextstyle(1,0,1);
outtextxy(590,18,"X 2");
setcolor(RED);
settextstyle(4,0,4);
outtextxy(320,405,"X2");
showmouse_graphics();
	   while(!kbhit())
		 {
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			 if((x>344&&x<611)&&(y>437&&y<472))
			 {
			 hidemouse();
			 music1();
			 hold4();
			 delay(5000);
			 while(a!=10)
		{
			 D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount4();
			delay(3000);
			ques5a();
			}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			B();
			showmouse_graphics();
			c++;
			if(c==2)
			{
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb1();
			getch();
			}}}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			showmouse_graphics();
			c++;
			if(c==2)
			{
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb1();
			getch();
			}}}
		       if((x>343&&x<609)&&(y>387&&y<422))
		       {
		       hidemouse();
		       music1();
					hold3();
			delay(5000);
			C();
			showmouse_graphics();
			c++;
			if(c==2)
			{
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
		       delay(2000);
		       celeb1();
		       getch();
		       }}}
		       delay(200);
			}}}
void doubledipB5()
{
int a=0,c=0,x,y,button,points2[]={65,455,80,435,325,435,340,455,325,475,80,475,65,455};
hidemouse();
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
ellipse(605,30,0,360,30,20);
floodfill(605,30,WHITE);
setcolor(YELLOW);
settextstyle(1,0,1);
outtextxy(590,18,"X 2");
setcolor(RED);
settextstyle(4,0,4);
outtextxy(320,405,"X2");
showmouse_graphics();
	   while(!kbhit())
		 {
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>69&&x<335)&&(y>437&&y<472))
			 {
			 hidemouse();
			 music1();
			 hold2();
			 delay(5000);
			 while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount5();
			delay(3000);
			ques6a();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			showmouse_graphics();
			c++;
			if(c==2)
			{
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb1();
			getch();
			}}}
			if((x>343&&x<609)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold3();
			delay(5000);
			C();
			showmouse_graphics();
			c++;
			if(c==2)
			{
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb1();
			getch();
			}}}
		       if((x>344&&x<611)&&(y>437&&y<472))
		       {
		       hidemouse();
		       music1();
					hold4();
			delay(5000);
			D();
			showmouse_graphics();
			c++;
			if(c==2)
			{
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
		       delay(2000);
		       celeb1();
		       getch();
		       }}}
		       delay(200);
		       }}}
void doubledipB1()
{
int a=0,c=0,x,y,button,points2[]={65,455,80,435,325,435,340,455,325,475,80,475,65,455};
hidemouse();
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
ellipse(605,30,0,360,30,20);
floodfill(605,30,WHITE);
setcolor(YELLOW);
settextstyle(1,0,1);
outtextxy(590,18,"X 2");
setcolor(RED);
settextstyle(4,0,4);
outtextxy(320,405,"X2");
showmouse_graphics();
	   while(!kbhit())
		 {
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>69&&x<335)&&(y>437&&y<472))
			 {
			 hidemouse();
			 music1();
			 hold2();
			 delay(5000);
			 while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount6();
			delay(3000);
			ques7a();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			showmouse_graphics();
			c++;
			if(c==2)
			{
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb2();
			getch();
			}}}
			if((x>343&&x<609)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold3();
			delay(5000);
			C();
			showmouse_graphics();
			c++;
			if(c==2)
			{
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb2();
			getch();
			}}}
		       if((x>344&&x<611)&&(y>437&&y<472))
		       {
		       hidemouse();
		       music1();
					hold4();
			delay(5000);
			D();
			showmouse_graphics();
			c++;
			if(c==2)
			{
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
		       delay(2000);
		       celeb2();
		       getch();
		       }}}
		       delay(200);
		       }}}
void doubledipD1()
{
int a=0,c=0,x,y,button,points4[]={340,455,355,435,600,435,615,455,595,475,355,475,340,455};
hidemouse();
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
ellipse(605,30,0,360,30,20);
floodfill(605,30,WHITE);
setcolor(YELLOW);
settextstyle(1,0,1);
outtextxy(590,18,"X 2");
setcolor(RED);
settextstyle(4,0,4);
outtextxy(320,405,"X2");
showmouse_graphics();
	   while(!kbhit())
		 {
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			 if((x>344&&x<611)&&(y>437&&y<472))
			 {
			 hidemouse();
			 music1();
			 hold4();
			 delay(5000);
			 while(a!=10)
		{
			 D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			}
			delay(3000);
			celeb();
			}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			B();
			showmouse_graphics();
			c++;
			if(c==2)
			{
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb2();
			}}}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			showmouse();
			c++;
			if(c==2)
			{
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb2();
			}}}
		       if((x>343&&x<609)&&(y>387&&y<422))
		       {
		       hidemouse();
			music1();
					hold3();
			delay(5000);
			C();
			showmouse_graphics();
			c++;
			if(c==2)
			{
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
		       delay(2000);
		       celeb2();
		       }}}
		       delay(200);
			}}}
void pollB()
{
hidemouse();
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
ellipse(525,30,0,360,30,20);
floodfill(525,30,WHITE);
setcolor(YELLOW);
circle(511,20,7);
circle(525,20,7);
circle(539,20,7);
line(511,27,501,37);
line(511,27,521,37);
line(525,27,515,37);
line(525,27,535,37);
line(539,27,529,37);
line(539,27,549,37);
circle(511,20,6);
circle(525,20,6);
circle(539,20,6);
line(510,26,500,36);
line(510,26,520,36);
line(524,26,514,36);
line(524,26,534,36);
line(540,26,530,36);
line(540,26,550,36);
setcolor(RED);
circle(340,425,9);
line(340,434,330,444);
line(340,434,350,444);
circle(340,425,10);
line(339,434,329,444);
line(341,434,351,444);
circle(340,425,11);
line(338,434,328,444);
line(342,434,352,444);
delay(2000);
setcolor(WHITE);
line(150,100,150,300);
line(150,300,400,300);
setcolor(RED);
bar3d(170,250,200,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(170,210,"14%");
delay(2000);
setcolor(RED);
bar3d(220,160,250,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(220,120,"36%");
setcolor(RED);
delay(2000);
bar3d(320,220,350,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(320,180,"22%");
setcolor(RED);
delay(2000);
bar3d(270,190,300,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(270,150,"28%");
settextstyle(1,0,2);
outtextxy(180,300,"A");
settextstyle(1,0,2);
outtextxy(230,300,"B");
settextstyle(1,0,2);
outtextxy(280,300,"C");
settextstyle(1,0,2);
outtextxy(330,300,"D");
showmouse_graphics();
setcolor(WHITE);
		  while(!kbhit())
	       {
	       int a=0,i,points2[]={65,455,80,435,325,435,340,455,325,475,80,475,65,455} ;
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount2();
			delay(3000);
			ques3b();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			getch();
			}}
			if((x>343&&x<609)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold3();
			delay(5000);
			C();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			getch();
			}}
			if((x>344&&x<611)&&(y>437&&y<472))
		       {
			hidemouse();
			music1();
			hold4();
			delay(5000);
			D();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
		       getch();
		       }}
		delay (200);
	}}}
void pollB1()
{
hidemouse();
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
ellipse(525,30,0,360,30,20);
floodfill(525,30,WHITE);
setcolor(YELLOW);
circle(511,20,7);
circle(525,20,7);
circle(539,20,7);
line(511,27,501,37);
line(511,27,521,37);
line(525,27,515,37);
line(525,27,535,37);
line(539,27,529,37);
line(539,27,549,37);
circle(511,20,6);
circle(525,20,6);
circle(539,20,6);
line(510,26,500,36);
line(510,26,520,36);
line(524,26,514,36);
line(524,26,534,36);
line(540,26,530,36);
line(540,26,550,36);
setcolor(RED);
circle(340,425,9);
line(340,434,330,444);
line(340,434,350,444);
circle(340,425,10);
line(339,434,329,444);
line(341,434,351,444);
circle(340,425,11);
line(338,434,328,444);
line(342,434,352,444);
delay(2000);
setcolor(WHITE);
line(150,100,150,300);
line(150,300,400,300);
setcolor(RED);
bar3d(170,250,200,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(170,210,"14%");
delay(2000);
setcolor(RED);
bar3d(220,160,250,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(220,120,"36%");
setcolor(RED);
delay(2000);
bar3d(320,220,350,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(320,180,"22%");
setcolor(RED);
delay(2000);
bar3d(270,190,300,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(270,150,"28%");
settextstyle(1,0,2);
outtextxy(180,300,"A");
settextstyle(1,0,2);
outtextxy(230,300,"B");
settextstyle(1,0,2);
outtextxy(280,300,"C");
settextstyle(1,0,2);
outtextxy(330,300,"D");
showmouse();
setcolor(WHITE);
		  while(!kbhit())
	       {
	       int a=0,i,points2[]={65,455,80,435,325,435,340,455,325,475,80,475,65,455} ;
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount6();
			delay(3000);
			ques7b();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb2();
			}}
			if((x>343&&x<609)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold3();
			delay(5000);
			C();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb2();
			}}
			if((x>344&&x<611)&&(y>437&&y<472))
		       {
		       hidemouse();
		       music1();
					hold4();
			delay(5000);
			D();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
		       delay(2000);
		       celeb2();
		       }}
		delay (200);
	}}}
void pollB5()
{
hidemouse();
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
ellipse(525,30,0,360,30,20);
floodfill(525,30,WHITE);
setcolor(YELLOW);
circle(511,20,7);
circle(525,20,7);
circle(539,20,7);
line(511,27,501,37);
line(511,27,521,37);
line(525,27,515,37);
line(525,27,535,37);
line(539,27,529,37);
line(539,27,549,37);
circle(511,20,6);
circle(525,20,6);
circle(539,20,6);
line(510,26,500,36);
line(510,26,520,36);
line(524,26,514,36);
line(524,26,534,36);
line(540,26,530,36);
line(540,26,550,36);
setcolor(RED);
circle(340,425,9);
line(340,434,330,444);
line(340,434,350,444);
circle(340,425,10);
line(339,434,329,444);
line(341,434,351,444);
circle(340,425,11);
line(338,434,328,444);
line(342,434,352,444);
delay(2000);
setcolor(WHITE);
line(150,100,150,300);
line(150,300,400,300);
setcolor(RED);
bar3d(170,250,200,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(170,210,"14%");
delay(2000);
setcolor(RED);
bar3d(220,160,250,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(220,120,"36%");
setcolor(RED);
delay(2000);
bar3d(320,220,350,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(320,180,"22%");
setcolor(RED);
delay(2000);
bar3d(270,190,300,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(270,150,"28%");
settextstyle(1,0,2);
outtextxy(180,300,"A");
settextstyle(1,0,2);
outtextxy(230,300,"B");
settextstyle(1,0,2);
outtextxy(280,300,"C");
settextstyle(1,0,2);
outtextxy(330,300,"D");
showmouse_graphics();
setcolor(WHITE);
		  while(!kbhit())
	       {
	       int a=0,i,points2[]={65,455,80,435,325,435,340,455,325,475,80,475,65,455} ;
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount5();
			delay(3000);
			ques6b();

			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>343&&x<609)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold3();
			delay(5000);
			C();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>344&&x<611)&&(y>437&&y<472))
		       {
		       hidemouse();
		       music1();
					hold4();
			delay(5000);
			D();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
		       delay(2000);
			celeb1();
		       }}
		delay (200);
	}}}
void pollC()
{
hidemouse();
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
ellipse(525,30,0,360,30,20);
floodfill(525,30,WHITE);
setcolor(YELLOW);
circle(511,20,7);
circle(525,20,7);
circle(539,20,7);
line(511,27,501,37);
line(511,27,521,37);
line(525,27,515,37);
line(525,27,535,37);
line(539,27,529,37);
line(539,27,549,37);
circle(511,20,6);
circle(525,20,6);
circle(539,20,6);
line(510,26,500,36);
line(510,26,520,36);
line(524,26,514,36);
line(524,26,534,36);
line(540,26,530,36);
line(540,26,550,36);
setcolor(RED);
circle(340,425,9);
line(340,434,330,444);
line(340,434,350,444);
circle(340,425,10);
line(339,434,329,444);
line(341,434,351,444);
circle(340,425,11);
line(338,434,328,444);
line(342,434,352,444);
delay(2000);
setcolor(WHITE);
line(150,100,150,300);
line(150,300,400,300);
setcolor(RED);
bar3d(170,250,200,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(170,210,"14%");
delay(2000);
setcolor(RED);
bar3d(220,270,250,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(220,230,"8%");
setcolor(RED);
delay(2000);
bar3d(320,190,350,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(320,150,"36%");
setcolor(RED);
delay(2000);
bar3d(270,150,300,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(270,110,"52%");
settextstyle(1,0,2);
outtextxy(180,300,"A");
settextstyle(1,0,2);
outtextxy(230,300,"B");
settextstyle(1,0,2);
outtextxy(280,300,"C");
settextstyle(1,0,2);
outtextxy(330,300,"D");
showmouse_graphics();
setcolor(WHITE);
	    while(!kbhit())
	       {
	       int a=0,i,points3[]={340,405,355,385,600,385,615,405,595,425,355,425,340,405};
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>343&&x<609)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold3();
			delay(5000);
			while(a!=10)
		{
			C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			}
			delay(1500);
			cleardevice();
			amount3();
			delay(3000);
			ques4b();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
		{
			C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			getch();
			}}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			B();
			while(a!=10)
		{
			C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			getch();
			}}
			if((x>344&&x<611)&&(y>437&&y<472))
		       {
		       hidemouse();
		       music1();
					hold4();
			delay(5000);
			D();
			while(a!=10)
		{
			C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
		       getch();
		       }}
		delay (200);
	}}}
void pollD()
{
hidemouse();
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
ellipse(525,30,0,360,30,20);
floodfill(525,30,WHITE);
setcolor(YELLOW);
circle(511,20,7);
circle(525,20,7);
circle(539,20,7);
line(511,27,501,37);
line(511,27,521,37);
line(525,27,515,37);
line(525,27,535,37);
line(539,27,529,37);
line(539,27,549,37);
circle(511,20,6);
circle(525,20,6);
circle(539,20,6);
line(510,26,500,36);
line(510,26,520,36);
line(524,26,514,36);
line(524,26,534,36);
line(540,26,530,36);
line(540,26,550,36);
setcolor(RED);
circle(340,425,9);
line(340,434,330,444);
line(340,434,350,444);
circle(340,425,10);
line(339,434,329,444);
line(341,434,351,444);
circle(340,425,11);
line(338,434,328,444);
line(342,434,352,444);
delay(2000);
setcolor(WHITE);
line(150,100,150,300);
line(150,300,400,300);
setcolor(RED);
bar3d(170,220,200,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(170,180,"15%");
delay(2000);
setcolor(RED);
bar3d(220,250,250,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(220,210,"9%");
setcolor(RED);
delay(2000);
bar3d(320,120,350,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(320,80,"42%");
setcolor(RED);
delay(2000);
bar3d(270,170,300,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(270,130,"34%");
settextstyle(1,0,2);
outtextxy(180,300,"A");
settextstyle(1,0,2);
outtextxy(230,300,"B");
settextstyle(1,0,2);
outtextxy(280,300,"C");
settextstyle(1,0,2);
outtextxy(330,300,"D");
showmouse_graphics();
setcolor(WHITE);
		  while(!kbhit())
	       {
	       int a=0,i,points4[]={340,455,355,435,600,435,615,455,595,475,355,475,340,455};
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>344&&x<611)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold4();
			delay(5000);
			while(a!=10)
			{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount4();
			delay(3000);
			ques5b();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
			{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			B();
			while(a!=10)
			{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb1();
		       }}
		       if ((x>343&&x<609)&&(y>387&&y<422))
		       {
		       hidemouse();
		       music1();
		       hold3();
		       delay(5000);
		       C();
		       while(a!=10)
			{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb1();
			}}
			delay (200);
			}}}
void pollD1()
{
hidemouse();
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
ellipse(525,30,0,360,30,20);
floodfill(525,30,WHITE);
setcolor(YELLOW);
circle(511,20,7);
circle(525,20,7);
circle(539,20,7);
line(511,27,501,37);
line(511,27,521,37);
line(525,27,515,37);
line(525,27,535,37);
line(539,27,529,37);
line(539,27,549,37);
circle(511,20,6);
circle(525,20,6);
circle(539,20,6);
line(510,26,500,36);
line(510,26,520,36);
line(524,26,514,36);
line(524,26,534,36);
line(540,26,530,36);
line(540,26,550,36);
setcolor(RED);
circle(340,425,9);
line(340,434,330,444);
line(340,434,350,444);
circle(340,425,10);
line(339,434,329,444);
line(341,434,351,444);
circle(340,425,11);
line(338,434,328,444);
line(342,434,352,444);
delay(2000);
setcolor(WHITE);
line(150,100,150,300);
line(150,300,400,300);
setcolor(RED);
bar3d(170,220,200,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(170,180,"15%");
delay(2000);
setcolor(RED);
bar3d(220,250,250,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(220,210,"9%");
setcolor(RED);
delay(2000);
bar3d(320,120,350,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(320,80,"42%");
setcolor(RED);
delay(2000);
bar3d(270,170,300,300,10,1);
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(270,130,"34%");
settextstyle(1,0,2);
outtextxy(180,300,"A");
settextstyle(1,0,2);
outtextxy(230,300,"B");
settextstyle(1,0,2);
outtextxy(280,300,"C");
settextstyle(1,0,2);
outtextxy(330,300,"D");
showmouse_graphics();
setcolor(WHITE);
		  while(!kbhit())
	       {
	       int a=0,i,points4[]={340,455,355,435,600,435,615,455,595,475,355,475,340,455};
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>344&&x<611)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold4();
			delay(5000);
			while(a!=10)
			{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			}
			delay(3000);
			celeb();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
			{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb2();
			}}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			B();
			while(a!=10)
			{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb2();
			}}
			if((x>343&&x<609)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold3();
			delay(5000);
			C();
			while(a!=10)
			{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb2();
			}}
			delay (200);
			}}}
void A1()
{
int points1[]={65,405,80,385,325,385,340,405,325,425,80,425,65,405};
setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points1);
			floodfill(80,400,WHITE);
			delay(200);
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,YELLOW);
			drawpoly(7,points1);
			floodfill(80,400,WHITE);
			setcolor(WHITE);
			}
void A()
{
int points1[]={65,405,80,385,325,385,340,405,325,425,80,425,65,405};
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,RED);
			drawpoly(7,points1);
			floodfill(80,400,WHITE);
			}
void B1()
{
int points2[]={65,455,80,435,325,435,340,455,325,475,80,475,65,455};
setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(200);
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,YELLOW);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			setcolor(WHITE);
			}
void B()
{
int points2[]={65,455,80,435,325,435,340,455,325,475,80,475,65,455};
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,RED);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			}
void C1()
{
int points3[]={340,405,355,385,600,385,615,405,595,425,355,425,340,405};
setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			delay(200);
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,YELLOW);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			setcolor(WHITE);
			}
void C()
{
int points3[]={340,405,355,385,600,385,615,405,595,425,355,425,340,405};
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,RED);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			}
void D1()
{
int  points4[]={340,455,355,435,600,435,615,455,595,475,355,475,340,455};
setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(200);
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,YELLOW);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			setcolor(WHITE);
			}
void D()
{
int points4[]={340,455,355,435,600,435,615,455,595,475,355,475,340,455};
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,RED);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			}
void hold1()
{
int points1[]={65,405,80,385,325,385,340,405,325,425,80,425,65,405};
setcolor(WHITE);
			setfillstyle(SOLID_FILL,BLUE);
			drawpoly(7,points1);
			floodfill(80,400,WHITE);
			}
void hold2()
{
int points2[]={65,455,80,435,325,435,340,455,325,475,80,475,65,455};
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,BLUE);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			}
void hold3()
{
int points3[]={340,405,355,385,600,385,615,405,595,425,355,425,340,405};
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,BLUE);
			drawpoly(7,points3);
			floodfill(380,400,WHITE);
			}
void hold4()
{
int points4[]={340,455,355,435,600,435,615,455,595,475,355,475,340,455};
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,BLUE);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			}
void showmouse_graphics ()
{
	in.x.ax = 1;
	int86 (0X33,&in,&out);
}
void showmouse()
{
	in.x.ax = 1;
	int86 (0X33,&in,&out);
	}
void hidemouse()
{
	in.x.ax = 2;
	int86 (0X33,&in,&out);
}
void hidmeouse()
{
	in.x.ax = 2;
	int86 (0X33,&in,&out);
}
void program()
{
int points[]={50,350,80,320,600,320,630,350,600,380,80,380,50,350};
int points1[]={65,405,80,385,325,385,340,405,325,425,80,425,65,405};
int points2[]={65,455,80,435,325,435,340,455,325,475,80,475,65,455};
int points3[]={340,405,355,385,600,385,615,405,595,425,355,425,340,405};
int points4[]={340,455,355,435,600,435,615,455,595,475,355,475,340,455};
drawpoly(7,points);
drawpoly(7,points1);
drawpoly(7,points2);
drawpoly(7,points3);
drawpoly(7,points4);
}
void amount1()
{
int points[]={100,400,130,370,500,370,530,400,500,430,130,430,100,400};
drawpoly(7,points);
setfillstyle(SOLID_FILL,BLUE);
floodfill(160,400,WHITE);
settextstyle(1,0,5);
outtextxy(170,370,"INR 10,000");
line(10,400,100,400);
line(530,400,620,400);
delay(3000);
}
void amount2()
{
int points[]={100,400,130,370,500,370,530,400,500,430,130,430,100,400};
drawpoly(7,points);
setfillstyle(SOLID_FILL,BLUE);
floodfill(160,400,WHITE);
settextstyle(1,0,5);
outtextxy(170,370,"INR 40,000");
line(10,400,100,400);
line(530,400,620,400);
delay(3000);
}
void amount3()
{
int points[]={100,400,130,370,500,370,530,400,500,430,130,430,100,400};
drawpoly(7,points);
setfillstyle(SOLID_FILL,BLUE);
floodfill(160,400,WHITE);
settextstyle(1,0,5);
outtextxy(170,370,"INR 80,000");
line(10,400,100,400);
line(530,400,620,400);
music();
delay(2000);
}
void amount4()
{
int points[]={100,400,130,370,500,370,530,400,500,430,130,430,100,400};
drawpoly(7,points);
setfillstyle(SOLID_FILL,BLUE);
floodfill(160,400,WHITE);
settextstyle(1,0,5);
outtextxy(170,370,"INR 3,20,000");
line(10,400,100,400);
line(530,400,620,400);
delay(3000);
}
void amount5()
{
int points[]={100,400,130,370,500,370,530,400,500,430,130,430,100,400};
drawpoly(7,points);
setfillstyle(SOLID_FILL,BLUE);
floodfill(160,400,WHITE);
settextstyle(1,0,5);
outtextxy(160,370,"INR 12,50,000");
line(10,400,100,400);
line(530,400,620,400);
music();
delay(2000);
}
void amount6()
{
int points[]={100,400,130,370,500,370,530,400,500,430,130,430,100,400};
drawpoly(7,points);
setfillstyle(SOLID_FILL,BLUE);
floodfill(160,400,WHITE);
settextstyle(1,0,5);
outtextxy(150,370,"INR 50,00,000");
line(10,400,100,400);
line(530,400,620,400);
delay(3000);
}
void amount7()
{
int points[]={100,400,130,370,500,370,530,400,500,430,130,430,100,400};
drawpoly(7,points);
setfillstyle(SOLID_FILL,BLUE);
floodfill(160,400,WHITE);
settextstyle(1,0,5);
outtextxy(130,370,"INR 1,00,00,000");
line(10,400,100,400);
line(530,400,620,400);
music();
delay(2000);
}
void ques1()
{
cleardevice();
program();
settextstyle(1,0,2);
outtextxy(80,320," How many time we can subtract 5 from 25?");
outtextxy(80,390,"A: 1");
outtextxy(80,440,"B: 5");
outtextxy(360,390,"C: Infinte");
outtextxy(360,440,"D: 3");
showmouse_graphics();
money();
 while(!kbhit())
	       {
		int a=0,i,points1[]={65,405,80,385,325,385,340,405,325,425,80,425,65,405};
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			while(a!=10)
		{
			A1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points1);
			floodfill(80,400,WHITE);
			}
			delay(1500);
			cleardevice();
			amount1();
			ques2();
			}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			B();
			while(a!=10)
		{
			A();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points1);
			floodfill(80,400,WHITE);
			}}
			if((x>343&&x<609)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold3();
			delay(5000);
			C();
			while(a!=10)
		{
			A();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points1);
			floodfill(80,400,WHITE);
			}}
			if((x>344&&x<611)&&(y>437&&y<472))
		       {
			hidemouse();
			music1();
			hold4();
			delay(5000);
			D();
			while(a!=10)
		{
			A();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points1);
			floodfill(80,400,WHITE);
			}}
			delay(200);
			}}}
void ques2()
{
union REGS in,out;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
program();
setfillstyle(SOLID_FILL,YELLOW);
rectangle(500,305,600,285);
floodfill(510,300,WHITE);
settextstyle(1,0,1);
outtextxy(80,320,"If 2 is replaced by 3,then find the square of 2 ?");
settextstyle(1,0,2);
outtextxy(80,390,"A: 4");
outtextxy(80,440,"B: 37");
outtextxy(360,390,"C: 27");
outtextxy(360,440,"D: 9");
showmouse_graphics();
money();
while(!kbhit())
	       {
	       int a=0,i,points2[]={65,455,80,435,325,435,340,455,325,475,80,475,65,455} ;
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>577&&x<633)&&(y>12&&y<48))
			{
			doubledipB();
			}
			if((x>497&&x<553)&&(y>12&&y<48))
			{
			pollB();
			}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			while(a!=10)
			{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount2();
			ques3();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
			{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			}}
			if((x>343&&x<609)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold3();
			delay(5000);
			C();
			while(a!=10)
			{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			}}
			if((x>344&&x<611)&&(y>437&&y<472))
		       {
			hidemouse();
			music1();
			hold4();
			delay(5000);
			D();
			while(a!=10)
		       {
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			}}
			delay(200);
			}}}
void ques3()
{
cleardevice();
program();
setfillstyle(SOLID_FILL,YELLOW);
rectangle(500,280,590,260);
floodfill(520,270,WHITE);
settextstyle(1,0,1);
outtextxy(80,320," What Guru-Dakshina did Drona ask from Ekalavya?");
outtextxy(80,390,"A: His right index finger");
outtextxy(80,440,"B: His sword");
outtextxy(360,390,"C: His right thumb");
outtextxy(360,440,"D: His left index finger");
showmouse_graphics();
money();
while(!kbhit())
	       {
	       int a=0,i,points3[]={340,405,355,385,600,385,615,405,595,425,355,425,340,405};
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>577&&x<633)&&(y>12&&y<48))
			{
			doubledipC();
			}
			if((x>497&&x<553)&&(y>12&&y<48))
			{
			pollC();
			}
			if((x>343&&x<609)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold3();
			delay(5000);
			while(a!=10)
			{
			C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			}
			delay(1500);
			cleardevice();
			amount3();
			ques4();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
			{
			C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			}}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			B();
			while(a!=10)
			{
			C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			}}
			if((x>344&&x<611)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold4();
			delay(5000);
			D();
			while(a!=10)
			{
			C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			}}
			delay(200);
			}}}
void ques3a()
{
cleardevice();
program();
setfillstyle(SOLID_FILL,YELLOW);
rectangle(500,280,590,260);
floodfill(520,270,WHITE);
settextstyle(1,0,1);
outtextxy(80,320," What Guru-Dakshina did Drona ask from Ekalavya?");
outtextxy(80,390,"A: His right index finger");
outtextxy(80,440,"B: His sword");
outtextxy(360,390,"C: His right thumb");
outtextxy(360,440,"D: His left index finger");
showmouse_graphics();
money();
setcolor(RED);
line(575,10,635,50);
line(575,50,635,10);
line(576,11,636,51);
line(576,51,636,11);
line(577,12,635,52);
line(577,52,637,12);
line(578,13,636,53);
line(578,53,638,13);
setcolor(WHITE);
		while(!kbhit())
	       {
	       int a=0,i,points3[]={340,405,355,385,600,385,615,405,595,425,355,425,340,405};
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>497&&x<553)&&(y>12&&y<48))
			{
			pollC();
			}
			if((x>343&&x<609)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold3();
			delay(5000);
			while(a!=10)
			{
			C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			}
			delay(1500);
			cleardevice();
			amount3();
			ques4a();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
			{
			C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			}}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
			{
			C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			}}
			if((x>344&&x<611)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold4();
			delay(5000);
			D();
			while(a!=10)
			{
			C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			}}
			delay(200);
			}}}
void ques3b()
{
cleardevice();
program();
setfillstyle(SOLID_FILL,YELLOW);
rectangle(500,280,590,260);
floodfill(520,270,WHITE);
settextstyle(1,0,1);
outtextxy(80,320," What Guru-Dakshina did Drona ask from Ekalavya?");
outtextxy(80,390,"A: His right index finger");
outtextxy(80,440,"B: His sword");
outtextxy(360,390,"C: His right thumb");
outtextxy(360,440,"D: His left index finger");
showmouse_graphics();
money();
setcolor(RED);
line(495,10,555,50);
line(495,50,555,10);
line(496,11,556,51);
line(496,51,556,11);
line(497,12,557,52);
line(497,52,557,12);
line(498,13,558,53);
line(498,53,558,13);
setcolor(WHITE);
while(!kbhit())
	       {
	       int a=0,i,points3[]={340,405,355,385,600,385,615,405,595,425,355,425,340,405};
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>577&&x<633)&&(y>12&&y<48))
			{
			doubledipC();
			}
			if((x>343&&x<609)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold3();
			delay(5000);
			while(a!=10)
			{
			C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			}
			delay(1500);
			cleardevice();
			amount3();
			ques4b();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
			{
			C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			}}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			B();
			while(a!=10)
			{
			C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			}}
			if((x>344&&x<611)&&(y>437&&y<472))
		       {
			hidemouse();
			music1();
			hold4();
			delay(5000);
			D();
			while(a!=10)
		       {
			C1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points3);
			floodfill(360,390,WHITE);
			}}
			delay(200);
			}}}
void ques4()
{
cleardevice();
program();
setfillstyle(SOLID_FILL,GREEN);
rectangle(500,250,590,230);
floodfill(520,240,WHITE);
settextstyle(1,0,1);
outtextxy(80,320,"Frog fell in a well which is 50 feet deep.During day");
outtextxy(80,340,"time the frog jumps 5 feet and during night he slips");
outtextxy(80,360,"back 4 feet.How many days will he take to come out ?");
outtextxy(80,390,"A: 50");
outtextxy(80,440,"B: 48");
outtextxy(360,390,"C: 52");
outtextxy(360,440,"D: 46");
showmouse_graphics();
money();
while(!kbhit())
	       {
		int a=0,i,points4[]={340,455,355,435,600,435,615,455,595,475,355,475,340,455};
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>577&&x<633)&&(y>12&&y<48))
			{
			doubledipD();
			}
			if((x>497&&x<553)&&(y>12&&y<48))
			{
			pollD();
			}
			if((x>344&&x<611)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold4();
			delay(5000);
			while(a!=10)
		       {
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount4();
			ques5();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			B();
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>343&&x<609)&&(y>387&&y<422))
		       {
			hidemouse();
			music1();
			hold1();
			delay(5000);
			D();
			while(a!=10)
		       {
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
		       delay(2000);
			celeb1();
		       }}
			delay (200);
		       }}}
void ques4a()
{
cleardevice();
program();
setfillstyle(SOLID_FILL,GREEN);
rectangle(500,250,590,230);
floodfill(520,240,WHITE);
settextstyle(1,0,1);
outtextxy(80,320,"Frog fell in a well which is 50 feet deep.During day");
outtextxy(80,340,"time the frog jumps 5 feet and during night he slips");
outtextxy(80,360,"back 4 feet.How many days will he take to come out ?");
outtextxy(80,390,"A: 50");
outtextxy(80,440,"B: 48");
outtextxy(360,390,"C: 52");
outtextxy(360,440,"D: 46");
showmouse_graphics();
money();
setcolor(RED);
line(575,10,635,50);
line(575,50,635,10);
line(576,11,636,51);
line(576,51,636,11);
line(577,12,635,52);
line(577,52,637,12);
line(578,13,636,53);
line(578,53,638,13);
setcolor(WHITE);
		while(!kbhit())
	       {
	       int a=0,i,points4[]={340,455,355,435,600,435,615,455,595,475,355,475,340,455};
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>497&&x<553)&&(y>12&&y<48))
			{
			pollD();
			}
			if((x>344&&x<611)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold4();
			delay(5000);
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount4();
			ques5a();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			B();
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>343&&x<609)&&(y>387&&y<422))
		       {
		       hidemouse();
		       music1();
					hold3();
			delay(5000);
			C();
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
		       delay(2000);
			celeb1();
		       }}
		delay (200);
	}}}
void ques4b()
{
cleardevice();
program();
setfillstyle(SOLID_FILL,GREEN);
rectangle(500,250,590,230);
floodfill(520,240,WHITE);
settextstyle(1,0,1);
outtextxy(80,320,"Frog fell in a well which is 50 feet deep.During day");
outtextxy(80,340,"time the frog jumps 5 feet and during night he slips");
outtextxy(80,360,"back 4 feet.How many days will he take to come out ?");
outtextxy(80,390,"A: 50");
outtextxy(80,440,"B: 48");
outtextxy(360,390,"C: 52");
outtextxy(360,440,"D: 46");
showmouse_graphics();
money();
setcolor(RED);
line(495,10,555,50);
line(495,50,555,10);
line(496,11,556,51);
line(496,51,556,11);
line(497,12,557,52);
line(497,52,557,12);
line(498,13,558,53);
line(498,53,558,13);
setcolor(WHITE);
while(!kbhit())
	       {
	       int a=0,i,points4[]={340,455,355,435,600,435,615,455,595,475,355,475,340,455};
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>577&&x<633)&&(y>12&&y<48))
			{
			doubledipD();
			}
		       if((x>344&&x<611)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold4();
			delay(5000);
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount4();
			ques5b();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			B();
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if ((x>343&&x<609)&&(y>387&&y<422))
		       {
		       hidemouse();
		       music1();
					hold3();
			delay(5000);
			C();
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
		       delay(2000);
			celeb1();
		       }}
		delay (200);
	}}}

void ques5()
{
cleardevice();
program();
setfillstyle(SOLID_FILL,YELLOW);
rectangle(500,220,620,200);
floodfill(510,210,WHITE);
settextstyle(1,0,1);
outtextxy(80,320," Which cricketer holds the Indian record for highest");
outtextxy(90,340," score in the match in the ICC Women's World Cup?");
outtextxy(80,390,"A: Smriti Mandhana");
outtextxy(80,440,"B: Harmanpreet Kaur");
outtextxy(360,390,"C: Mithali Raj");
outtextxy(360,440,"D: Punam Raut");
showmouse_graphics();
money();
			while(!kbhit())
	       {
	       int a=0,i,points2[]={65,455,80,435,325,435,340,455,325,475,80,475,65,455} ;
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>577&&x<633)&&(y>12&&y<48))
			{
			doubledipB5();
			}
			if((x>497&&x<553)&&(y>12&&y<48))
			{
			pollB5();
			}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount5();
			ques6();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>343&&x<609)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold3();
			delay(5000);
			C();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>344&&x<611)&&(y>437&&y<472))
		       {
		       hidemouse();
		       music1();
					hold4();
			delay(5000);
			D();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
		       delay(2000);
			celeb1();
		       }}
		delay (200);
	}}}
void ques5a()
{
cleardevice();
program();
setfillstyle(SOLID_FILL,YELLOW);
rectangle(500,220,620,200);
floodfill(510,210,WHITE);
settextstyle(1,0,1);
outtextxy(80,320," Which cricketer holds the Indian record for highest");
outtextxy(90,340," score in the match in the ICC Women's World Cup?");
outtextxy(80,390,"A: Smriti Mandhana");
outtextxy(80,440,"B: Harmanpreet Kaur");
outtextxy(360,390,"C: Mithali Raj");
outtextxy(360,440,"D: Punam Raut");
showmouse_graphics();
money();
setcolor(RED);
line(575,10,635,50);
line(575,50,635,10);
line(576,11,636,51);
line(576,51,636,11);
line(577,12,635,52);
line(577,52,637,12);
line(578,13,636,53);
line(578,53,638,13);
setcolor(WHITE);
			while(!kbhit())
	       {
	       int a=0,i,points2[]={65,455,80,435,325,435,340,455,325,475,80,475,65,455} ;
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>497&&x<553)&&(y>12&&y<48))
			{
			pollB5();
			}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount5();
			ques6a();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>343&&x<609)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold3();
			delay(5000);
			C();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>344&&x<611)&&(y>437&&y<472))
		       {
		       hidemouse();
		       music1();
					hold4();
			delay(5000);
			D();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
		       delay(2000);
			celeb1();
		       }}
		delay (200);
}}}
void ques5b()
{
cleardevice();
program();
setfillstyle(SOLID_FILL,YELLOW);
rectangle(500,220,620,200);
floodfill(510,210,WHITE);
settextstyle(1,0,1);
outtextxy(80,320," Which cricketer holds the Indian record for highest");
outtextxy(90,340," score in the match in the ICC Women's World Cup?");
outtextxy(80,390,"A: Smriti Mandhana");
outtextxy(80,440,"B: Harmanpreet Kaur");
outtextxy(360,390,"C: Mithali Raj");
outtextxy(360,440,"D: Punam Raut");
showmouse_graphics();
money();
setcolor(RED);
line(495,10,555,50);
line(495,50,555,10);
line(496,11,556,51);
line(496,51,556,11);
line(497,12,557,52);
line(497,52,557,12);
line(498,13,558,53);
line(498,53,558,13);
setcolor(WHITE);
while(!kbhit())
	       {
	       int a=0,i,points2[]={65,455,80,435,325,435,340,455,325,475,80,475,65,455} ;
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>577&&x<633)&&(y>12&&y<48))
			{
			doubledipB5();
			}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount5();
			ques6b();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>343&&x<609)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold3();
			delay(5000);
			C();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>344&&x<611)&&(y>437&&y<472))
		       {
		       hidmeouse();
		       music1();
					hold4();
			delay(5000);
			D();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
		       delay(2000);
			celeb1();
		       }}
		delay (200);
	}}}
void ques6()
{
cleardevice();
program();
setfillstyle(SOLID_FILL,YELLOW);
rectangle(500,190,620,170);
floodfill(510,180,WHITE);
settextstyle(1,0,1);
outtextxy(80,320," India won their First ever World Cup in the year?");
outtextxy(80,390,"A: 1983");
outtextxy(80,440,"B: 1975");
outtextxy(360,390,"C: 2011");
outtextxy(360,440,"D: 1979");
showmouse_graphics();
money();
while(!kbhit())
	       {
	       int a=0,i,points2[]={65,455,80,435,325,435,340,455,325,475,80,475,65,455} ;
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>577&&x<633)&&(y>12&&y<48))
			{
			doubledipB1();
			}
			if((x>497&&x<553)&&(y>12&&y<48))
			{
			pollB1();
			}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount6();
			ques7();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>343&&x<609)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold3();
			delay(5000);
			C();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>344&&x<611)&&(y>437&&y<472))
		       {
		       hidemouse();
		       music1();
					hold4();
			delay(5000);
			D();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
		       delay(2000);
			celeb1();
		       }}
		delay (200);
	}}}
void ques6a()
{
cleardevice();
program();
setfillstyle(SOLID_FILL,YELLOW);
rectangle(500,190,620,170);
floodfill(510,180,WHITE);
settextstyle(1,0,1);
outtextxy(80,320," India won their First ever World Cup in the year?");
outtextxy(80,390,"A: 1983");
outtextxy(80,440,"B: 1975");
outtextxy(360,390,"C: 2011");
outtextxy(360,440,"D: 1979");
showmouse_graphics();
money();
setcolor(RED);
line(575,10,635,50);
line(575,50,635,10);
line(576,11,636,51);
line(576,51,636,11);
line(577,12,635,52);
line(577,52,637,12);
line(578,13,636,53);
line(578,53,638,13);
setcolor(WHITE);
		while(!kbhit())
	       {
	       int a=0,i,points2[]={65,455,80,435,325,435,340,455,325,475,80,475,65,455} ;
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>497&&x<553)&&(y>12&&y<48))
			{
			pollB1();
			}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount6();
			ques7a();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>343&&x<609)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold3();
			delay(5000);
			C();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>344&&x<611)&&(y>437&&y<472))
		       {
		       hidemouse();
		       music1();
					hold4();
			delay(5000);
			D();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
		       delay(2000);
			celeb1();
		       }}
		delay (200);
	}}}
void ques6b()
{
cleardevice();
program();
setfillstyle(SOLID_FILL,YELLOW);
rectangle(500,190,620,170);
floodfill(510,180,WHITE);
settextstyle(1,0,1);
outtextxy(80,320," India won their First ever World Cup in the year?");
outtextxy(80,390,"A: 1983");
outtextxy(80,440,"B: 1975");
outtextxy(360,390,"C: 2011");
outtextxy(360,440,"D: 1979");
money();
showmouse_graphics();
setcolor(RED);
line(495,10,555,50);
line(495,50,555,10);
line(496,11,556,51);
line(496,51,556,11);
line(497,12,557,52);
line(497,52,557,12);
line(498,13,558,53);
line(498,53,558,13);
setcolor(WHITE);
while(!kbhit())
	       {
	       int a=0,i,points2[]={65,455,80,435,325,435,340,455,325,475,80,475,65,455} ;
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>577&&x<633)&&(y>12&&y<48))
			{
			doubledipB1();
			}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount6();
			ques7b();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>343&&x<609)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold3();
			delay(5000);
			C();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
			delay(2000);
			celeb1();
			}}
			if((x>344&&x<611)&&(y>437&&y<472))
		       {
		       hidemouse();
		       music1();
					hold4();
			delay(5000);
			D();
			while(a!=10)
		{
			B1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points2);
			floodfill(80,440,WHITE);
		       delay(2000);
			celeb1();
		       }}
		delay (200);
	}}}
void ques7()
{
cleardevice();
program();
setfillstyle(SOLID_FILL,YELLOW);
rectangle(500,160,620,140);
floodfill(520,150,WHITE);
settextstyle(6,0,1);
outtextxy(80,320," The ice cricket that was organised on the frozen lake ST.Mortiz");
outtextxy(80,340," where only two players have played from the Switzerland.Name them?");
outtextxy(80,390,"A:Ali Saleem & Amandeep Singh");
outtextxy(80,440,"B:Mathew Martin & Asvin Lakkaraju");
outtextxy(360,390,"C:Vaibhav Singh & Sam Baxter");
outtextxy(360,440,"D:Rohan Jain & Aiden Andrews");
showmouse_graphics();
money();
while(!kbhit())
	       {
	       int a=0,i,points4[]={340,455,355,435,600,435,615,455,595,475,355,475,340,455};
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>577&&x<633)&&(y>12&&y<48))
			{
			doubledipD1();
			}
			if((x>497&&x<553)&&(y>12&&y<48))
			{
			pollD1();
			}
			if((x>344&&x<611)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold4();
			delay(5000);
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount7();
			delay(2000);
			celeb();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb2();
			}}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			B();
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb2();
			}}
			if((x>343&&x<609)&&(y>387&&y<422))
		       {
		       hidemouse();
		       music1();
					hold1();
			delay(5000);
			D();
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
		       delay(2000);
			celeb2();
		       }}
		delay (200);
	}}}
void ques7a()
{
cleardevice();
program();
setfillstyle(SOLID_FILL,YELLOW);
rectangle(500,160,620,140);
floodfill(520,150,WHITE);
settextstyle(6,0,1);
outtextxy(80,320," The ice cricket that was organised on the frozen lake ST.Mortiz");
outtextxy(80,340," where only two players have played from the Switzerland.Name them?");
outtextxy(80,390,"A:Ali Saleem & Amandeep Singh");
outtextxy(80,440,"B:Mathew Martin & Asvin Lakkaraju");
outtextxy(360,390,"C:Vaibhav Singh & Sam Baxter");
outtextxy(360,440,"D:Rohan Jain & Aiden Andrews");
showmouse_graphics();
money();
setcolor(RED);
line(575,10,635,50);
line(575,50,635,10);
line(576,11,636,51);
line(576,51,636,11);
line(577,12,635,52);
line(577,52,637,12);
line(578,13,636,53);
line(578,53,638,13);
setcolor(WHITE);
		while(!kbhit())
	       {
	       int a=0,i,points4[]={340,455,355,435,600,435,615,455,595,475,355,475,340,455};
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>497&&x<553)&&(y>12&&y<48))
			{
			pollD1();
			}
			if((x>344&&x<611)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold4();
			delay(5000);
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount7();
			delay(2000);
			celeb();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb2();
			}}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			B();
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb2();
			}}
			if((x>343&&x<609)&&(y>387&&y<422))
		       {
		       hidemouse();
		       music1();
					hold3();
			delay(5000);
			C();
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
		       delay(2000);
			celeb2();
		       }}
		delay (200);
	}}}
void ques7b()
{
cleardevice();
program();
setfillstyle(SOLID_FILL,YELLOW);
rectangle(500,160,620,140);
floodfill(520,150,WHITE);
settextstyle(6,0,1);
outtextxy(80,320," The ice cricket that was organised on the frozen lake ST.Mortiz");
outtextxy(80,340," where only two players have played from the Switzerland.Name them?");
outtextxy(80,390,"A:Ali Saleem & Amandeep Singh");
outtextxy(80,440,"B:Mathew Martin & Asvin Lakkaraju");
outtextxy(360,390,"C:Vaibhav Singh & Sam Baxter");
outtextxy(360,440,"D:Rohan Jain & Aiden Andrews");
showmouse_graphics();
money();
setcolor(RED);
line(495,10,555,50);
line(495,50,555,10);
line(496,11,556,51);
line(496,51,556,11);
line(497,12,557,52);
line(497,52,557,12);
line(498,13,558,53);
line(498,53,558,13);
setcolor(WHITE);
while(!kbhit())
	       {
	       int a=0,i,points4[]={340,455,355,435,600,435,615,455,595,475,355,475,340,455};
		int x,y,button;
		int86 (0X33,&in,&out);
		in.x.ax=3;
			x = out.x.cx;
			y = out.x.dx;
			button=out.x.bx&7;
			if(button&1==1)
			{
			if((x>577&&x<633)&&(y>12&&y<48))
			{
			doubledipD1();
			}
		       if((x>344&&x<611)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold4();
			delay(5000);
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			}
			delay(1500);
			cleardevice();
			amount7();
			delay(2000);
			celeb();
			}
			if((x>69&&x<335)&&(y>387&&y<422))
			{
			hidemouse();
			music1();
			hold1();
			delay(5000);
			A();
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb2();
			}}
			if((x>69&&x<335)&&(y>437&&y<472))
			{
			hidemouse();
			music1();
			hold2();
			delay(5000);
			B();
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
			delay(2000);
			celeb2();
			}}
			if ((x>343&&x<609)&&(y>387&&y<422))
		       {
		       hidemouse();
		       music1();
					hold3();
			delay(5000);
			C();
			while(a!=10)
		{
			D1();
			delay(200);
			a++;
			setcolor(WHITE);
			setfillstyle(SOLID_FILL,GREEN);
			drawpoly(7,points4);
			floodfill(380,440,WHITE);
		       delay(2000);
			celeb2();
		       }}
		delay (200);
	}}}
void logo()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setcolor(RED);
setfillstyle(SOLID_FILL,BLUE);
circle(310,250,220);
floodfill(312,252,RED);
delay(2000);
setcolor(GREEN);
setfillstyle(SOLID_FILL,LIGHTBLUE);
arc(310,230,0,180,160);
line(150,230,470,230);
floodfill(152,228,GREEN);
setcolor(GREEN);
setfillstyle(SOLID_FILL,LIGHTBLUE);
arc(310,270,180,360,160);
line(150,270,470,270);
floodfill(152,272,GREEN);
delay(2000);
setcolor(WHITE);
settextstyle(4,0,6);
outtextxy(230,150,"KAUN");
delay(2000);
outtextxy(210,280,"BANEGA");
delay(2000);
settextstyle(4,0,5);
outtextxy(180,222,"CROREPATI");
setcolor(6);
line(220,120,390,120);
arc(250,177,270,45,80);
line(250,257,390,357);
line(220,190,390,190);
line(220,121,390,121);
arc(250,177,270,45,79);
line(250,258,390,358);
line(220,191,390,191);
line(220,122,390,122);
arc(250,177,270,45,81);
line(250,259,390,359);
line(220,192,390,192);
line(220,123,390,123);
arc(250,177,270,45,82);
line(250,260,390,360);
line(220,193,390,193);
}
void music()
{
sound(1000);
delay(700);
	sound(1100);
	delay(600);
sound(1200);
delay(500);
	sound(1000);
	delay(500);
sound(1100);
delay(450);
sound(1000);
delay(700);
	sound(1100);
	delay(600);
sound(1200);
delay(500);
	sound(1000);
	delay(500);
sound(1100);
delay(450);
	sound(1200);
	delay(450);
sound(1350);
delay(450);
	sound(1500);
	delay(1200);
nosound();
delay(300);
}
void music1()
{
sound(300);
delay(300);
sound(400);
delay(300);
sound(300);
delay(300);
nosound();
}
void celeb()
{
int gd=DETECT,gm,i,a,z=1,k=2,j=1,r=1;
char name[20];
initgraph(&gd,&gm,"C:\\TC\\BGI");
printf("Enter the name to be printed on cheque\t");
scanf("%s",&name);
for(i=5;i<700;i=i+7)
{
setcolor(GREEN);
settextstyle(4,0,6);
outtextxy(90,80,"CONGRATULATIONS");
setcolor(WHITE);
rectangle(125,150,525,350);
setcolor(BLUE);
settextstyle(1,0,4);
outtextxy(127,160,"KAUN BANEGA CROREPATI");
setcolor(WHITE);
settextstyle(1,0,1);
outtextxy(150,220,"NAME");
line(210,240,500,240);
gotoxy(35,15);
printf("%s",name);
settextstyle(1,0,1);
outtextxy(150,260,"RUPEES");
line(230,280,380,280);
outtextxy(230,260,"ONE CRORE ONLY");
rectangle(385,250,500,280);
settextstyle(2,0,5);
outtextxy(390,260,"Rs.1,00,00,000");
settextstyle(1,0,1);
outtextxy(350,330,"MAYUR AGARWAL");
setcolor(RED);
settextstyle(5,0,2);
outtextxy(380,290,"MAYUR");
setfillstyle(SOLID_FILL,YELLOW);
bar(20,30+i,30,40+i);
bar(35,55+i,45,65+i);
bar(50,70+i,60,80+i);
bar(65,30+i,75,40+i);
bar(80,80+i,90,90+i);
bar(95,70+i,105,80+i);
bar(110,30+i,120,40+i);
bar(125,55+i,135,65+i);
bar(140,85+i,150,95+i);
bar(155,35+i,165,45+i);
bar(170,75+i,180,85+i);
bar(185,30+i,195,40+i);
bar(200,60+i,210,70+i);
bar(215,35+i,225,45+i);
bar(230,65+i,240,75+i);
bar(245,50+i,255,60+i);
bar(260,30+i,270,40+i);
bar(275,80+i,285,90+i);
bar(290,50+i,300,60+i);
bar(305,65+i,315,75+i);
bar(320,35+i,330,45+i);
bar(335,65+i,345,75+i);
bar(350,80+i,360,90+i);
bar(365,30+i,375,40+i);
bar(380,70+i,390,80+i);
bar(395,40+i,405,50+i);
bar(410,70+i,420,80+i);
bar(425,55+i,435,65+i);
bar(440,30+i,450,40+i);
bar(455,55+i,465,65+i);
bar(470,70+i,480,80+i);
bar(485,30+i,495,40+i);
bar(500,80+i,510,90+i);
bar(515,70+i,525,80+i);
bar(530,30+i,540,40+i);
bar(545,55+i,555,65+i);
bar(560,85+i,570,95+i);
bar(575,35+i,585,45+i);
bar(590,75+i,600,85+i);
bar(605,65+i,615,75+i);
delay(10);
z=z+5;
setfillstyle(SOLID_FILL,GREEN);
bar(20,30+z,30,40+z);
bar(35,55+z,45,65+z);
bar(50,70+z,60,80+z);
bar(65,30+z,75,40+z);
bar(80,80+z,90,90+z);
bar(95,70+z,105,80+z);
bar(110,30+z,120,40+z);
bar(125,55+z,135,65+z);
bar(140,85+z,150,95+z);
bar(155,35+z,165,45+z);
bar(170,75+z,180,85+z);
bar(185,30+z,195,40+z);
bar(200,60+z,210,70+z);
bar(215,35+z,225,45+z);
bar(230,65+z,240,75+z);
bar(245,50+z,255,60+z);
bar(260,30+z,270,40+z);
bar(275,80+z,285,90+z);
bar(290,50+z,300,60+z);
bar(305,65+z,315,75+z);
bar(320,35+z,330,45+z);
bar(335,65+z,345,75+z);
bar(350,80+z,360,90+z);
bar(365,30+z,375,40+z);
bar(380,70+z,390,80+z);
bar(395,40+z,405,50+z);
bar(410,70+z,420,80+z);
bar(425,55+z,435,65+z);
bar(440,30+z,450,40+z);
bar(455,55+z,465,65+z);
bar(470,70+z,480,80+z);
bar(485,30+z,495,40+z);
bar(500,80+z,510,90+z);
bar(515,70+z,525,80+z);
bar(530,30+z,540,40+z);
bar(545,55+z,555,65+z);
bar(560,85+z,570,95+z);
bar(575,35+z,585,45+z);
bar(590,75+z,600,85+z);
bar(605,65+z,615,75+z);
delay(10);
setfillstyle(SOLID_FILL,RED);
k=k+3;
bar(20,30+k,30,40+k);
bar(35,55+k,45,65+k);
bar(50,70+k,60,80+k);
bar(65,30+k,75,40+k);
bar(80,80+k,90,90+k);
bar(95,70+k,105,80+k);
bar(110,30+k,120,40+k);
bar(125,55+k,135,65+k);
bar(140,85+k,150,95+k);
bar(155,35+k,165,45+k);
bar(170,75+k,180,85+k);
bar(185,30+k,195,40+k);
bar(200,60+k,210,70+k);
bar(215,35+k,225,45+k);
bar(230,65+k,240,75+k);
bar(245,50+k,255,60+k);
bar(260,30+k,270,40+k);
bar(275,80+k,285,90+k);
bar(290,50+k,300,60+k);
bar(305,65+k,315,75+k);
bar(320,35+k,330,45+k);
bar(335,65+k,345,75+k);
bar(350,80+k,360,90+k);
bar(365,30+k,375,40+k);
bar(380,70+k,390,80+k);
bar(395,40+k,405,50+k);
bar(410,70+k,420,80+k);
bar(425,55+k,435,65+k);
bar(440,30+k,450,40+k);
bar(455,55+k,465,65+k);
bar(470,70+k,480,80+k);
bar(485,30+k,495,40+k);
bar(500,80+k,510,90+k);
bar(515,70+k,525,80+k);
bar(530,30+k,540,40+k);
bar(545,55+k,555,65+k);
bar(560,85+k,570,95+k);
bar(575,35+k,585,45+k);
bar(590,75+k,600,85+k);
bar(605,65+k,615,75+k);
delay(15);
setfillstyle(SOLID_FILL,LIGHTCYAN);
j=j+4;
bar(20,30+j,30,40+j);
bar(35,55+j,45,65+j);
bar(50,70+j,60,80+j);
bar(65,30+j,75,40+j);
bar(80,80+j,90,90+j);
bar(95,70+j,105,80+j);
bar(110,30+j,120,40+j);
bar(125,55+j,135,65+j);
bar(140,85+j,150,95+j);
bar(155,35+j,165,45+j);
bar(170,75+j,180,85+j);
bar(185,30+j,195,40+j);
bar(200,60+j,210,70+j);
bar(215,35+j,225,45+j);
bar(230,65+j,240,75+j);
bar(245,50+j,255,60+j);
bar(260,30+j,270,40+j);
bar(275,80+j,285,90+j);
bar(290,50+j,300,60+j);
bar(305,65+j,315,75+j);
bar(320,35+j,330,45+j);
bar(335,65+j,345,75+j);
bar(350,80+j,360,90+j);
bar(365,30+j,375,40+j);
bar(380,70+j,390,80+j);
bar(395,40+j,405,50+j);
bar(410,70+j,420,80+j);
bar(425,55+j,435,65+j);
bar(440,30+j,450,40+j);
bar(455,55+j,465,65+j);
bar(470,70+j,480,80+j);
bar(485,30+j,495,40+j);
bar(500,80+j,510,90+j);
bar(515,70+j,525,80+j);
bar(530,30+j,540,40+j);
bar(545,55+j,555,65+j);
bar(560,85+j,570,95+j);
bar(575,35+j,585,45+j);
bar(590,75+j,600,85+j);
bar(605,65+j,615,75+j);
delay(20);
setfillstyle(SOLID_FILL,LIGHTMAGENTA);
r=r+2;
bar(20,30+r,30,40+r);
bar(35,55+r,45,65+r);
bar(50,70+r,60,80+r);
bar(65,30+r,75,40+r);
bar(80,80+r,90,90+r);
bar(95,70+r,105,80+r);
bar(110,30+r,120,40+r);
bar(125,55+r,135,65+r);
bar(140,85+r,150,95+r);
bar(155,35+r,165,45+r);
bar(170,75+r,180,85+r);
bar(185,30+r,195,40+r);
bar(200,60+r,210,70+r);
bar(215,35+r,225,45+r);
bar(230,65+r,240,75+r);
bar(245,50+r,255,60+r);
bar(260,30+r,270,40+r);
bar(275,80+r,285,90+r);
bar(290,50+r,300,60+r);
bar(305,65+r,315,75+r);
bar(320,35+r,330,45+r);
bar(335,65+r,345,75+r);
bar(350,80+r,360,90+r);
bar(365,30+r,375,40+r);
bar(380,70+r,390,80+r);
bar(395,40+r,405,50+r);
bar(410,70+r,420,80+r);
bar(425,55+r,435,65+r);
bar(440,30+r,450,40+r);
bar(455,55+r,465,65+r);
bar(470,70+r,480,80+r);
bar(485,30+r,495,40+r);
bar(500,80+r,510,90+r);
bar(515,70+r,525,80+r);
bar(530,30+r,540,40+r);
bar(545,55+r,555,65+r);
bar(560,85+r,570,95+r);
bar(575,35+r,585,45+r);
bar(590,75+r,600,85+r);
delay(30);
setfillstyle(SOLID_FILL,BLUE);
a=a+1;
bar(20,30+a,30,40+a);
bar(35,55+a,45,65+a);
bar(50,70+a,60,80+a);
bar(65,30+a,75,40+a);
bar(80,80+a,90,90+a);
bar(95,70+a,105,80+a);
bar(110,30+a,120,40+a);
bar(125,55+a,135,65+a);
bar(140,85+a,150,95+a);
bar(155,35+a,165,45+a);
bar(170,75+a,180,85+a);
bar(185,30+a,195,40+a);
bar(200,60+a,210,70+a);
bar(215,35+a,225,45+a);
bar(230,65+a,240,75+a);
bar(245,50+a,255,60+a);
bar(260,30+a,270,40+a);
bar(275,80+a,285,90+a);
bar(290,50+a,300,60+a);
bar(305,65+a,315,75+a);
bar(320,35+a,330,45+a);
bar(335,65+a,345,75+a);
bar(350,80+a,360,90+a);
bar(365,30+a,375,40+a);
bar(380,70+a,390,80+a);
bar(395,40+a,405,50+a);
bar(410,70+a,420,80+a);
bar(425,55+a,435,65+a);
bar(440,30+a,450,40+a);
bar(455,55+a,465,65+a);
bar(470,70+a,480,80+a);
bar(485,30+a,495,40+a);
bar(500,80+a,510,90+a);
bar(515,70+a,525,80+a);
bar(530,30+a,540,40+a);
bar(545,55+a,555,65+a);
bar(560,85+a,570,95+a);
bar(575,35+a,585,45+a);
bar(590,75+a,600,85+a);
bar(605,65+a,615,75+a);
delay(35);
cleardevice();
}
delay(10000);
getch();
closegraph();
}
void celeb1()
{
char name[20];
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setcolor(WHITE);
rectangle(125,150,525,350);
setcolor(BLUE);
settextstyle(1,0,4);
outtextxy(127,160,"KAUN BANEGA CROREPATI");
setcolor(WHITE);
settextstyle(1,0,1);
outtextxy(150,220,"NAME");
line(210,240,500,240);
gotoxy(35,15);
scanf("%s",&name);
settextstyle(1,0,1);
outtextxy(150,260,"RUPEES");
line(230,280,380,280);
setcolor(YELLOW);
settextstyle(2,0,5);
outtextxy(230,260,"EIGHTY THOUSAND ONLY");
setcolor(WHITE);
rectangle(385,250,500,280);
settextstyle(2,0,5);
outtextxy(390,260,"Rs.80,000");
settextstyle(1,0,1);
outtextxy(350,330,"MAYUR AGARWAL");
delay(1500);
setcolor(RED);
settextstyle(5,0,2);
outtextxy(380,290,"M");
delay(500);
settextstyle(5,0,2);
outtextxy(395,290,"A");
delay(500);
settextstyle(5,0,2);
outtextxy(410,290,"Y");
delay(500);
settextstyle(5,0,2);
outtextxy(425,290,"U");
delay(500);
settextstyle(5,0,2);
outtextxy(440,290,"R");
delay(400);
music();
getch();
closegraph();
}
void celeb2()
{
char name[20];
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setcolor(WHITE);
rectangle(125,150,525,350);
setcolor(BLUE);
settextstyle(1,0,4);
outtextxy(127,160,"KAUN BANEGA CROREPATI");
setcolor(WHITE);
settextstyle(1,0,1);
outtextxy(150,220,"NAME");
line(210,240,500,240);
gotoxy(35,15);
scanf("%s",&name);
settextstyle(1,0,1);
outtextxy(150,260,"RUPEES");
line(230,280,380,280);
setcolor(GREEN);
settextstyle(2,0,4);
outtextxy(230,260," TWELVE LAC FIFTY THOUSAND");
setcolor(WHITE);
rectangle(385,250,500,280);
settextstyle(2,0,5);
outtextxy(390,260,"Rs.12,50,000");
settextstyle(1,0,1);
outtextxy(350,330,"MAYUR AGARWAL");
delay(1000);
setcolor(RED);
settextstyle(5,0,2);
outtextxy(380,290,"M");
delay(500);
settextstyle(5,0,2);
outtextxy(395,290,"A");
delay(500);
settextstyle(5,0,2);
outtextxy(410,290,"Y");
delay(500);
settextstyle(5,0,2);
outtextxy(425,290,"U");
delay(500);
settextstyle(5,0,2);
outtextxy(440,290,"R");
delay(400);
music();
delay(1000);
getch();
closegraph();
}
void main ()
{
union REGS in,out;
int gd=DETECT,gm,i,str[20];
initgraph(&gd,&gm,"C:\\TC\\BGI");
setcolor(9);
settextstyle(7,0,3);
outtextxy(230,20,"WELCOME TO");
setcolor(14);
settextstyle(7,0,5);
outtextxy(240,50,"KAUN");
settextstyle(7,0,6);
outtextxy(180,150,"BANEGA");
settextstyle(7,0,7);
outtextxy(120,250,"CROREPATI");
setcolor(WHITE);
gotoxy(28,22);
printf("ENTER YOUR GOOD LUCK\n\n\t\t\t\t   ");
scanf("%s",&str);
bar(200,400,400,420);
for(i=0;i<=200;i++)
{
setfillstyle(SOLID_FILL,GREEN);
bar(200+i,400,200+i,420);
setcolor(i);
settextstyle(8,0,1);
outtextxy(242,430,"LOADING...");
delay(30);
}
logo();
music();
cleardevice();
money();
gotoxy(15,10);
printf("\tWelcome %s",str);
printf("\n\n");
delay(1000);
cprintf("Let me introduce you to the rules");
delay(2000);
printf("\n\n");
printf("There are 7 question starting from 10,000 upto 1,00,00,000");
delay(3000);
printf("\n\n");
printf("You will be equipped with 2 lifelines");
delay(3000);
printf("\n\n");
printf("1: AUDIENCE POLL");
printf("\n\n");
printf("2: DOUBLE DIP");
delay(4000);
printf("\n\n\n\t\t\t\t");
printf("ALERT!\tALERT!\tALERT!");
printf("\n\t You will not be able to use your lifelines on question 1.\n\t");
delay(4000);
printf("You can only use atmost one lifeline in a single question.\n\n\t\t\t");
delay(4000);
printf("This game is powered by MAYUR AGARWAL");
delay(3000);
printf("\n\n\n");
printf("\t\t\t\tSO LET US PLAY KBC");
delay(5000);
ques1();
getch();
}
