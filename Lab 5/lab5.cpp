<<<<<<< HEAD
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int xc, yc;

void plotEllipsePoints(int x, int y)
{
    delay(10);
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
}

void main()
{
    int gd = DETECT, gm;
    int rx, ry;
    float x, y, p1, p2;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    printf("Enter center (xc, yc): ");
    scanf("%d %d", &xc, &yc);

    printf("Enter Rx and Ry: ");
    scanf("%d %d", &rx, &ry);

    // Region 1 initial values
    x = 0;
    y = ry;

    // Initial decision parameter
    p1 = (ry * ry) - (rx * rx * ry) + (0.25 * rx * rx);

    // ---------------- REGION 1 ----------------
    while ((2 * ry * ry * x) < (2 * rx * rx * y))
    {
        plotEllipsePoints(x, y);

        if (p1 < 0)
        {
            x++;
            p1 = p1 + (2 * ry * ry * x) + (ry * ry);
        }
        else
        {
            x++;
            y--;
            p1 = p1 + (2 * ry * ry * x) - (2 * rx * rx * y) + (ry * ry);
        }
    }

    // Region 2 initial value
    p2 = (ry * ry) * (x + 0.5) * (x + 0.5)
       + (rx * rx) * (y - 1) * (y - 1)
       - (rx * rx * ry * ry);

    // ---------------- REGION 2 ----------------
    while (y >= 0)
    {
        plotEllipsePoints(x, y);

        if (p2 > 0)
        {
            y--;
            p2 = p2 - (2 * rx * rx * y) + (rx * rx);
        }
        else
        {
            y--;
            x++;
            p2 = p2 + (2 * ry * ry * x) - (2 * rx * rx * y) + (rx * rx);
        }
    }

    outtextxy(10, 10, "Midpoint Ellipse Drawing Algorithm");

    getch();
    closegraph();
}
=======
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int xc, yc;

void plotEllipsePoints(int x, int y)
{
    delay(10);
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
}

void main()
{
    int gd = DETECT, gm;
    int rx, ry;
    float x, y, p1, p2;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    printf("Enter center (xc, yc): ");
    scanf("%d %d", &xc, &yc);

    printf("Enter Rx and Ry: ");
    scanf("%d %d", &rx, &ry);

    // Region 1 initial values
    x = 0;
    y = ry;

    // Initial decision parameter
    p1 = (ry * ry) - (rx * rx * ry) + (0.25 * rx * rx);

    // ---------------- REGION 1 ----------------
    while ((2 * ry * ry * x) < (2 * rx * rx * y))
    {
        plotEllipsePoints(x, y);

        if (p1 < 0)
        {
            x++;
            p1 = p1 + (2 * ry * ry * x) + (ry * ry);
        }
        else
        {
            x++;
            y--;
            p1 = p1 + (2 * ry * ry * x) - (2 * rx * rx * y) + (ry * ry);
        }
    }

    // Region 2 initial value
    p2 = (ry * ry) * (x + 0.5) * (x + 0.5)
       + (rx * rx) * (y - 1) * (y - 1)
       - (rx * rx * ry * ry);

    // ---------------- REGION 2 ----------------
    while (y >= 0)
    {
        plotEllipsePoints(x, y);

        if (p2 > 0)
        {
            y--;
            p2 = p2 - (2 * rx * rx * y) + (rx * rx);
        }
        else
        {
            y--;
            x++;
            p2 = p2 + (2 * ry * ry * x) - (2 * rx * rx * y) + (rx * rx);
        }
    }

    outtextxy(10, 10, "Midpoint Ellipse Drawing Algorithm");

    getch();
    closegraph();
}
>>>>>>> 1c9084fd4f6e4052c8208e8628346dca034b0e05
