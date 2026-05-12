// Line Shearing along X and Y axis

#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    int x1, y1, x2, y2;
    int shx, shy;

    initgraph(&gd, &gm, (char*)"");

    printf("Enter the endpoints of the line:\n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    // Shearing along X-axis
    printf("Enter the shear parameter along X-axis: ");
    scanf("%d", &shx);

    cleardevice();

    setcolor(WHITE);
    outtextxy(0, 0,(char*) "WHITE = Before Shearing");
    line(x1, y1, x2, y2);

    setcolor(RED);
    outtextxy(0, 20,(char*) "RED = After Shearing along X-axis");

    // X-axis Shearing
    line(x1 + shx * y1, y1, x2 + shx * y2, y2);

    getch(); // pause to view X-shear

    // Shearing along Y-axis
    printf("Enter the shear parameter along Y-axis: ");
    scanf("%d", &shy);

    cleardevice();

    setcolor(WHITE);
    outtextxy(0, 0,(char*) "WHITE = Before Shearing");
    line(x1, y1, x2, y2);

    setcolor(RED);
    outtextxy(0, 20,(char*) "RED = After Shearing along Y-axis");

    // Y-axis Shearing
    line(x1, y1 + shy * x1, x2, y2 + shy * x2);

    getch();
    closegraph();
    return 0;
}
