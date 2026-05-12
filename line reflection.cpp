//d. implement code in c to make line reflection in x and y
#include<graphics.h>
#include<stdio.h>
#include<conio.h>

int main()
{
	int gd = DETECT,gm,x1,x2,y1,y2;
	
	initgraph(&gd,&gm,(char*)"");
	
	printf("enter x coordinate of line 1=");
	scanf("%d",&x1);
	
	printf("enter y coordinate of line 1=");
	scanf("%d)", &y1);
	
	printf("enter the coordinate of line 2=");
	scanf("%d", &x2);
	
	printf("enter the coordinate of line 2=");
	scanf("%d", &y2);
	
	
	cleardevice();
	
	// Draw axes (centre)
	line(getmaxx()/2,0,getmaxx()/2,getmaxx());
	line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
	
	printf("-----Reflection of line in x-axis and y-axis----");
	
	//Original line
	
	line(x1,y1,x2,y2);
	setcolor(YELLOW);
	
	//Reflection in X-axis
	line(x1,getmaxy()-y1,x2,getmaxy()-y2);
	//Reflection in Y-axis
	
	line(getmaxx()-x1,y1,getmaxx()-x2,y2);
	
	getch();
	closegraph();
	return 0;

	
}
