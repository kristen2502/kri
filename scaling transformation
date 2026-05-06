// scaling transfarmation
#include<graphics.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	int n = 4;
	//Original polygon (rectangle)
	int x[4] = {200,300,300,200};
	int y[4] = {200,200,300,300};
	
	int x_new[4], y_new[4];
	
	float sx = 1.5; //scaling factor in x direction
	float sy = 1.5; //scaling factor in y direction
	
	int shift = 120; //small horizontal shift to avoid overlap
	
	cout<<"Original Polygon Coordinates\n";
	for(int i=0; i<n;i++)
	{
		cout<<"Vertex"<<i+1<<":("<<x[i]<<","<<y[i]<<")"<<endl;
	}
	//Draw original polygon
	setcolor(WHITE);
	for(int i=0; i<n;i++)
	{
		line(x[i],y[i],x[(i+1)%n],y[(i+1)%n]);
	}
	//scaling transformation
	
	for(int i=0;i<n;i++)
	{
		x_new[i] = x[i]* sx + shift;
		y_new[i] = y[i]* sy;
	}
	cout<<"\nAfter SCALING TRANSFORMATION\n";
	for(int i=0;i<n;i++)
	{
		cout<<"Vertex"<<i+1<<":("<<x_new[i]<<","<<y_new[i]<<")"<<endl;
	}
	//Draw scaled Polygon
	setcolor(RED);
	for(int i=0;i<n;i++)
	{
		line(x_new[i],y_new[i],x_new[(i+1)%n],y_new[(i+1)%n]);
	}
	getch();
	closegraph();
}
