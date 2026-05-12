// rotate square
#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>

double points[8];

void rotateSquare(int cx,int cy,int w,int h,int angle)
{
    int i;
    double theta, dx, dy;

    theta = angle * M_PI / 180.0;
    dx = w / 2.0;
    dy = h / 2.0;

    // Correct rotation
    double x[4] = {-dx, dx, dx, -dx};
    double y[4] = {-dy, -dy, dy, dy};

    for(i = 0; i < 4; i++)
    {
        points[2*i]   = x[i]*cos(theta) - y[i]*sin(theta) + cx;
        points[2*i+1] = x[i]*sin(theta) + y[i]*cos(theta) + cy;
    }

    for(i=0;i<8;i+=2)
    {
        line(points[i], points[i+1],
             points[(i+2)%8], points[(i+3)%8]);
    }
}

int main()
{
    int gd = DETECT, gm;
    int angle;

    int cx = 250, cy = 250;
    int w = 100, h = 100;

    printf("Enter angle to rotate the square: ");
    scanf("%d", &angle);

    initgraph(&gd, &gm, (char*)"");

    // Original square
    setcolor(WHITE);
    outtextxy(10,10,(char*)"WHITE = Original Square");
    rotateSquare(cx, cy, w, h, 0);   // ? angle 0 = original

    // Rotated square
    setcolor(YELLOW);
    outtextxy(10,30,(char*)"YELLOW = Rotated Square");
    rotateSquare(cx, cy, w, h, angle);  // ? rotated

    getch();
    closegraph();

    return 0;
}
