<<<<<<< HEAD
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    //for pixel of two different color
    putpixel(100,200,4); //draws a pixel of color red

    putpixel(200,300,7); //draws a pixel of color Lightgray

    //for two lines of different color and dimensions

    setcolor(BLUE);
    line(50,50,200,200); //draws a line of color BLUE in the given co-ordinates

    setcolor(RED);
    line(100,100,400,400); //draws a line of color RED in the given co-ordinates

    //for two rectangle of different color

    setcolor(WHITE);
    rectangle(50,100,200,200); //draws a rectangle of color WHITE

    setcolor(GREEN);
    rectangle(100,150,250,250); //draws a rectangle of color GREEN

    //for two circle of different color
    setcolor(YELLOW);
    circle(300,350,3); //draws a circle of color YELLOW

    setcolor(RED);
    circle(600,50,4); //draws a circle of color RED

    getch();
    closegraph();
    return 0;
=======
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    //for pixel of two different color
    putpixel(100,200,4); //draws a pixel of color red

    putpixel(200,300,7); //draws a pixel of color Lightgray

    //for two lines of different color and dimensions

    setcolor(BLUE);
    line(50,50,200,200); //draws a line of color BLUE in the given co-ordinates

    setcolor(RED);
    line(100,100,400,400); //draws a line of color RED in the given co-ordinates

    //for two rectangle of different color

    setcolor(WHITE);
    rectangle(50,100,200,200); //draws a rectangle of color WHITE

    setcolor(GREEN);
    rectangle(100,150,250,250); //draws a rectangle of color GREEN

    //for two circle of different color
    setcolor(YELLOW);
    circle(300,350,3); //draws a circle of color YELLOW

    setcolor(RED);
    circle(600,50,4); //draws a circle of color RED

    getch();
    closegraph();
    return 0;
>>>>>>> 1c9084fd4f6e4052c8208e8628346dca034b0e05
}