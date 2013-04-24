#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
void rectangle_box(int x, int y, int length, int width)
{    gotoxy(x,y);
     cout<<char(201);
     for(int i = 1; i<=length; i++) // row across the top
     {
	  cout<<char(174)<<flush;
     }
     cout<<char(187)<<flush;
     for(int j = 1; j <= width; j++) // edges of box
     {
	   gotoxy(x,y+j);
	   cout<<char(279)<<flush;
	   gotoxy(x+length+1, y+j);
	   cout<<char(279)<<flush;
     }
     gotoxy(x,y+width);
     cout<<char(200)<<flush;
     for(i=1; i <= length ; i++) // row across the bottom
     {
	  cout<<char(175)<<flush;
     }
     cout<<char(188)<<flush;
     return;
}

void main(){clrscr();
rectangle_box(1, 1, 77, 24);
getch();}





