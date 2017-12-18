#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#define RIGHT 77
#define DOWN 80
#define UP 72
#define LEFT 75
void start();
void up();
void right();
void down();
void left();
void food();
void exit();
float j=0;
float i=0;
float k=0;
float l=0;
float m=0;
float n=0;
float p=0;
float z=0;
float r,t;
float x,y;
int a,b;
float w=15;
void main()
{
 char input;
int gd=DETECT,gm,m,i=0;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
a=getmaxx();
b=getmaxy();
setcolor(RED);
setbkcolor(YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(a/2-70,b/2-30,"LOADING...");
rectangle((a/2)-100,(b/2)-10,(a/2)+104,(b/2)+10);
for(m=0;m<180;m+=20)
{
setbkcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
bar((a/2)-98,b/2-8,a/2-98+m,b/2+8);
setfillstyle(SOLID_FILL,RED);
bar((a/2)-98+m,(b/2)-8,(a/2)-68+m,(b/2)+8);
delay(300);

}
clrscr();
setcolor(RED);
setbkcolor(YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,7);
outtextxy( 165, 100,  "SNAKES");
outtextxy( 210 ,200,  "GAME");
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(270, 350,   "Let's Play(y/n)");

do
{input=getch();
if(input=='y')
{
start();
}
else if(input=='n')
{
closegraph();
getch();
}
else
{
outtextxy(240,370,"INVALID INPUT...ENTER YOUR CHOICE AGAIN");
i++;
}
}
while(i<10);
}


void start()
{
 char ch;
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
a=getmaxx();
b=getmaxy();
setbkcolor(YELLOW);
x=(a/2)+50;
y=b/2;
setcolor(BLUE);
rectangle(20,10,a-20,b-20);
food();
setcolor(RED);
rectangle(a/2,b/2,(a/2)+w,(b/2));
getch();
ch=getch();
if(ch==LEFT){left();}
if(ch==UP){up();}
if(ch==DOWN){down();}
if(ch==RIGHT){right();}
getch();
closegraph();
}














void down()

{char cha;
setcolor(BLUE);
rectangle(20,10,a-20,b-10);
setcolor(YELLOW);
	rectangle(a/2,b/2,(a/2)+w,(b/2));
	for(j=j;j<=10000;j+=0.5)
	{if((x-5<=(a/2)+k-z && x+5>=(a/2)+k-z) &&  (y-5<=(b/2)+j-p+w && (b/2)+j-p+w<=y+5))
	{w++;
		food();
	    }
		if((b/2)+j-p+w==b-10){exit(0);}
setcolor(RED);
rectangle((a/2)+k-z,(b/2)+j-p,(a/2)+k-z,(b/2)+j-p+w);
setcolor(YELLOW);
rectangle((a/2)+k-z,(b/2)+j-p-w,(a/2)+k-z,(b/2)+j-p);
delay(10);

if(kbhit()){cha=getch();
if(cha==LEFT){rectangle((a/2)+k-z,(b/2)+j-p,(a/2)+k-z,(b/2)+j-p+w);
	left();
}
if(cha==RIGHT){rectangle((a/2)+k-z,(b/2)+j-p,(a/2)+k-z,(b/2)+j-p+w);
	right();
}
if(cha==27){exit(0);
break;}
}
}
}








void right()
{char cha;
setcolor(BLUE);
rectangle(20,10,a-20,b-10);
	for(k=k;k<=10000;k+=0.5)
	{if(      (x-5<=(a/2)+k-z+w && (a/2)+k-z+w<=x+5) && (y-5<=(b/2)+j-p &&    (b/2)+j-p<=y+5))
		{w++;
	food();
	}
	if((a/2)+k-z+w==(a-20)){exit(0);}
setcolor(RED);
rectangle((a/2)+k-z,(b/2)+j-p,(a/2)+k-z+w,(b/2)+j-p);
setcolor(YELLOW);
rectangle((a/2)+k-z-w,(b/2)+j-p,(a/2)+k-z,(b/2)+j-p);
delay(10);
if((a/2)+k-z+w==a-20){exit(0);
break;}
if(kbhit()){cha=getch();
if(cha==DOWN){
	rectangle((a/2)+k-z,(b/2)+j-p,(a/2)+k-z+w,(b/2)+j-p);
	down();
}
if(cha==UP){rectangle((a/2)+k-z,(b/2)+j-p,(a/2)+k-z+w,(b/2)+j-p);
	up();}
}
}
}







void left()
{char cha;
setcolor(BLUE);
rectangle(20,10,a-20,b-10);
	for(z=z;z<=10000;z+=0.5)
		
		{	if((x-5<=(a/2)-z+k && (a/2)-z+k<=x+5) &&   ((y-5<=(b/2)-p+j && (b/2)-p+j<=y+5)))
	{w++;
food();
}
setcolor(RED);
rectangle((a/2)-z+k,(b/2)-p+j, (a/2)-z+k+w,(b/2)-p+j);
setcolor(YELLOW);
rectangle((a/2)-z+k+w,(b/2)-p+j, (a/2)-z+k+2*w,(b/2)-p+j);
delay(10);
if((a/2)-z+k==20){exit(0);
break;}
if(kbhit()){cha=getch();
if(cha==DOWN){rectangle((a/2)+k-z,(b/2)+j-p,(a/2)+k-z+w,(b/2)+j-p);
	down();
}
if(cha==UP){rectangle((a/2)+k-z,(b/2)+j-p,(a/2)+k-z+w,(b/2)+j-p);
	up();
}
}
}
}










void up()

{char cha;
setcolor(BLUE);
rectangle(20,10,a-20,b-10);
setcolor(YELLOW);
rectangle(a/2,b/2,(a/2)+w,(b/2));

	for(p=p;p<=10000;p+=0.5)
	{if(  (x-5<=(a/2)-z+k  && (a/2)-z+k<=x+5) && ( y-5<=(b/2)-p+j && (b/2)-p+j<=y+5))
	{
		w++;
food();}
setcolor(RED);
rectangle((a/2)-z+k,(b/2)-p+j,(a/2)-z+k,(b/2)-p+j+w);
setcolor(YELLOW);
rectangle((a/2)-z+k, (b/2)-p+j+w,(a/2)-z+k,(b/2)-p+j+2*w);
delay(10);
if((b/2)-p+j==10){exit(0);
break;}
if(kbhit()){cha=getch();
if(cha==LEFT){rectangle((a/2)-z+k,(b/2)-p+j,(a/2)-z+k,(b/2)-p+j+w);
	left();
}
if(cha==RIGHT){rectangle((a/2)-z+k,(b/2)-p+j,(a/2)-z+k,(b/2)-p+j+w);
	right();
}
}
}
}




void food()
{int gd=DETECT,gm;
   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
   setbkcolor(YELLOW);
   setcolor(BLUE);
rectangle(20,10,a-20,b-10);
	setcolor(RED);
		x=30+((random(a))%(a-60));
		y=30+((random(a))%(b-200));
		circle(x,y,10);
	}

	
	void exit()
{  clrscr();		
   setbkcolor(WHITE);
   setcolor(RED);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,7);
   outtextxy(30,200,"GAME OVER");
   getch();
   closegraph();
}






