<<<<<<< HEAD
#include <stdio.h>
#include <graphics.h>
#include <math.h>

int myround(float a);

void main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, steps, k;
    float xincr, yincr, x, y, dx, dy;

    printf("Enter x1, y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter x2, y2: ");
    scanf("%d %d", &x2, &y2);

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    dx = x2 - x1;
    dy = y2 - y1;

    if (fabs(dx) > fabs(dy))
        steps = fabs(dx);
    else
        steps = fabs(dy);

    xincr = dx / steps;
    yincr = dy / steps;

    x = x1;
    y = y1;

    putpixel(x1, y1, WHITE);  // draw starting point

    for (k = 1; k <= steps; k++)
    {
        delay(50);
        x += xincr;
        y += yincr;
        putpixel(myround(x), myround(y), WHITE);
    }

    outtextxy(200, 20, "DDA Line");
    outtextxy(x1 + 5, y1 - 5, "(x1, y1)");
    outtextxy(x2 + 5, y2 + 5, "(x2, y2)");

    getch();
    closegraph();
}

int myround(float a)
{
    return (int)(a + 0.5);
}
=======
#include <stdio.h>
#include <graphics.h>
#include <math.h>

int myround(float a);

void main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, steps, k;
    float xincr, yincr, x, y, dx, dy;

    printf("Enter x1, y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter x2, y2: ");
    scanf("%d %d", &x2, &y2);

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    dx = x2 - x1;
    dy = y2 - y1;

    if (fabs(dx) > fabs(dy))
        steps = fabs(dx);
    else
        steps = fabs(dy);

    xincr = dx / steps;
    yincr = dy / steps;

    x = x1;
    y = y1;

    putpixel(x1, y1, WHITE);  // draw starting point

    for (k = 1; k <= steps; k++)
    {
        delay(50);
        x += xincr;
        y += yincr;
        putpixel(myround(x), myround(y), WHITE);
    }

    outtextxy(200, 20, "DDA Line");
    outtextxy(x1 + 5, y1 - 5, "(x1, y1)");
    outtextxy(x2 + 5, y2 + 5, "(x2, y2)");

    getch();
    closegraph();
}

int myround(float a)
{
    return (int)(a + 0.5);
}
>>>>>>> 1c9084fd4f6e4052c8208e8628346dca034b0e05
