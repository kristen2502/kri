//square trans. predefined vertex
#include <graphics.h>
#include <math.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm,(char*) "");

    // Predefined square vertices
    int x[4] = {200, 300, 300, 200};
    int y[4] = {200, 200, 300, 300};

    // Draw original square
    setcolor(WHITE);
    for(int i = 0; i < 4; i++) {
        line(x[i], y[i], x[(i+1)%4], y[(i+1)%4]);
    }

    // Rotation angle
    float angle;
    printf("Enter rotation angle (in degrees): ");
    scanf("%f", &angle);

    float rad = angle * M_PI / 180;

    // Rotation about center (250,250)
    int cx = 250, cy = 250;

    int xr[4], yr[4];

    // Apply rotation formula
    for(int i = 0; i < 4; i++) {
        xr[i] = cx + (x[i] - cx) * cos(rad) - (y[i] - cy) * sin(rad);
        yr[i] = cy + (x[i] - cx) * sin(rad) + (y[i] - cy) * cos(rad);
    }

    // Draw rotated square
    setcolor(YELLOW);
    for(int i = 0; i < 4; i++) {
        line(xr[i], yr[i], xr[(i+1)%4], yr[(i+1)%4]);
    }

    getch();
    closegraph();
    return 0;
}
