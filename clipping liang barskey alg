//8 Write a C program the clipping using Liang-Barskey Algo.

#include<graphics.h>
#include<stdio.h>

	int main()
	{
		int gd = DETECT,gm;
		
		int x1, y1, x2, y2;
		int xmin, ymin, xmax, ymax;
		int dx, dy, i;
		
		int p[4], q[4];
		float t1 = 0.0, t2 = 1.0, t;
		
	 // Input window
    printf("Enter xmin ymin xmax ymax: ");
    scanf("%d %d %d %d", &xmin, &ymin, &xmax, &ymax);
		
		//input line
		printf("enter coordinates of line (x1 y1 x2 y2):");
		scanf ("%d %d %d %d", &x1, &y1, &x2, &y2);
		
    	initgraph(&gd, &gm, (char*)"");
		// Draw Window
		cleardevice();
		setcolor(WHITE);
		rectangle(xmin, ymin, xmax, ymax);
		
		//Drawvoriginal line
		setcolor(RED);
		line(x1, y1, x2, y2);
		
		getch();
		
		dx= x2-x1;
		dy = y2-y1;
		
		//dEFINE P AND Q
		p[0] = -dx;
		p[1] = dx;
		p[2] = -dy;
		p[3] = dy;
		
		q[0] = x1-xmin;
		q[1] = xmax-x1;
		q[2] = y1-ymin;
		q[3] = ymax-y1;
		
		for(i=0;i<4;i++)
		{
			if(p[i]==0)
			{
				if(q[i]<0)
				{
					printf("Line completely outside\n");
					getch();
					closegraph();
					return 0;
				}
			}
			else
			{
				t = (float)q[i]/p[i];
				
				if(p[i]<0)
				{
					if(t > t1)
					t1 = t;
				}
				else
				{
					if(t < t2)
					t2 = t;
				}
			}
		}
		if(t1 > t2)
		{
			printf("line lies outside the window\n");
		}
		else
		{
			int xx1 = x1 + t1*dx;
			int yy1 = y1 + t1*dy;
			int xx2 = x1 + t2*dx;
			int yy2 = y1 + t2*dy;
			
			
			
			printf("line after clipping shown in YELLOW color\n");
			setcolor (YELLOW);
			
			rectangle(xmin, ymin, xmax, ymax);
			line(xx1, yy1, xx2, yy2);
		
		}
		getch();
		closegraph();
		return 0;
	}
