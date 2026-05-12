// 6 FILL ALGORITHM
#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
    // Initialize window
    initwindow(800, 600, "Flood Fill Algorithm");

    // Set background
    setbkcolor(BLACK);
    cleardevice();

    // Draw polygon boundary
    setcolor(WHITE);

    int poly[10] = {
        200,150,
        400,150,
        400,300,
        200,300,
        200,150
    };

    drawpoly(5, poly);

    delay(500); // to visualize boundary first

    // Apply Flood Fill
    floodfill(250, 200, WHITE); // (x, y, boundary color)

    // Wait before closing
    cout << "Press Enter to exit...";
    cin.get();

    closegraph();
    return 0;
}
