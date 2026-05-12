#include <graphics.h>
#include <iostream>
#include <cmath>
using namespace std;

// 2 Function to implement Bresenham Line Drawing Algorithm
void bresenham(int x0, int y0, int x1, int y1)
{
    int dx = abs(x1 - x0);
    int dy = abs(y1 - y0);

    int sx = (x0 < x1) ? 1 : -1;
    int sy = (y0 < y1) ? 1 : -1;

    int err = dx - dy;

    while (true)
    {
        putpixel(x0, y0, WHITE);

        if (x0 == x1 && y0 == y1)
            break;

        int e2 = 2 * err;

        if (e2 > -dy)
        {
            err = err - dy;
            x0 = x0 + sx;
        }

        if (e2 < dx)
        {
            err = err + dx;
            y0 = y0 + sy;
        }
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    int x0, y0, x1, y1;

    cout << "Enter starting point (x0 y0): ";
    cin >> x0 >> y0;

    cout << "Enter ending point (x1 y1): ";
    cin >> x1 >> y1;

    // Call Bresenham function
    bresenham(x0, y0, x1, y1);

    getch();
    closegraph();

    return 0;
}
