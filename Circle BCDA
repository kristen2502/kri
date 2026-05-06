//3 draw a circle using bresenham Circle Drawing Algorithm
#include <graphics.h>
#include <iostream>
#include <conio.h>
using namespace std;

// Function to draw all 8 symmetric points
void drawCirclePoints(int xc, int yc, int x, int y)
{
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
}

// Bresenham Circle Drawing Algorithm
void bresenhamCircle(int xc, int yc, int r)
{
    int x = 0;
    int y = r;
    int p = 3 - 2 * r;

    while (x <= y)
    {
        drawCirclePoints(xc, yc, x, y);

        if (p < 0)
        {
            p = p + 4 * x + 6;
        }
        else
        {
            p = p + 4 * (x - y) + 10;
            y--;
        }
        x++;
    }
}

int main()
{
    int xc, yc, r;

    cout << "Enter center (xc yc): ";
    cin >> xc >> yc;

    cout << "Enter radius: ";
    cin >> r;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // Optional: draw axes for better understanding
    line(0, yc, getmaxx(), yc);
    line(xc, 0, xc, getmaxy());

    bresenhamCircle(xc, yc, r);

    getch();
    closegraph();

    return 0;
}
