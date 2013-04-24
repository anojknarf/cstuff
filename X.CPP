#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
void main()
{clrscr();
char a[20][20];
int i,j;
cout<<"\n ENTER 4 STATEMENTS: \n";
for(i=1;i<5;i++)
gets (a[i]);
cout<<"THE ENTERED STATEMENTS ARE: \n";
for(i=1;i<5;i++)
{cout<<a[i]<<"\n";}
for(i=1;i<5;i++)
{strrev(a[i]);}
cout<<"THE REVERSED STATEMENTS ARE: \n";
for(i=1;i<5;i++)
{cout<<a[i]<<"\t\t SIZE="<<strlen(a[i])<<"\n";}
for(i=1;i<5;i++)
{for(j=2;j<5;j++)
{if(strcmp(a[i],a[j]) !=0)
{cout<<i<<"&"<<j<<" statements are not equal\n";}
else
{cout<<i<<"&"<<j<<" statements are equal\n";}
}}
getch();}