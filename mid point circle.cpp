//4 midpoin approach
#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;

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

void midpointCircle(int xc, int yc, int r)
{
    int x = 0;
    int y = r;

    int p = 1 - r;

    while (x <= y)
    {
        drawCirclePoints(xc, yc, x, y);

        if (p < 0)
        {
            p = p + 2 * x + 3;
        }
        else
        {
            p = p + 2 * (x - y) + 5;
            y--;   // FIXED
        }
        x++;
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int xc, yc, r;

    cout << "Enter origin (xc, yc): ";
    cin >> xc >> yc;

    cout << "Enter radius: ";
    cin >> r;

    midpointCircle(xc, yc, r);

    char text[50];
    printf(text, "origin(%d,%d)", xc, yc);  // FIXED
    outtextxy(xc + 10, yc + 10, text);

    getch();
    closegraph();
    return 0;
}
