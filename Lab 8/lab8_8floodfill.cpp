<<<<<<< HEAD
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void flood(int,int,int,int);
void main()
{
    int gd,gm=DETECT;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    rectangle(50,50,100,100);
    flood(55,55,12,0);
    getch();
}
void flood(int x,int y, int fill_col, int old_col)
{
if(getpixel(x,y)==old_col)
    {
        delay(10); putpixel(x,y,fill_col);
        flood(x+1,y,fill_col,old_col);
        flood(x-1,y,fill_col,old_col);
        flood(x,y+1,fill_col,old_col);
        flood(x,y-1,fill_col,old_col);
        flood(x + 1, y - 1, fill_col, old_col);
        flood(x + 1, y + 1, fill_col, old_col);
        flood(x - 1, y - 1, fill_col, old_col);
        flood(x - 1, y + 1, fill_col, old_col);
    }
}

=======
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void flood(int,int,int,int);
void main()
{
    int gd,gm=DETECT;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    rectangle(50,50,100,100);
    flood(55,55,12,0);
    getch();
}
void flood(int x,int y, int fill_col, int old_col)
{
if(getpixel(x,y)==old_col)
    {
        delay(10); putpixel(x,y,fill_col);
        flood(x+1,y,fill_col,old_col);
        flood(x-1,y,fill_col,old_col);
        flood(x,y+1,fill_col,old_col);
        flood(x,y-1,fill_col,old_col);
        flood(x + 1, y - 1, fill_col, old_col);
        flood(x + 1, y + 1, fill_col, old_col);
        flood(x - 1, y - 1, fill_col, old_col);
        flood(x - 1, y + 1, fill_col, old_col);
    }
}

>>>>>>> 1c9084fd4f6e4052c8208e8628346dca034b0e05
