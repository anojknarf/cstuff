#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
void main()
{int magic[20][20],n,i,row,column,nrow,ncolumn;
do
{clrscr();
cout<<" Enter size of magic square(ONLY ODD NUMBERS)\n";
cin>>n;}
while(n%2==0);
for(row=0;row<n;row++)
{for(column=0;column<n;column++)
magic[row][column]=0;}
row=0;
column=n/2;
for(i=1;i<=n*n;i++)
{magic[row][column]=i;
nrow=row--;
ncolumn=column++;
if(row<0)
row=n-1;
if(column>n-1)
column=0;
if(magic[row][column] != 0)
{row=nrow+1;
column=ncolumn;}}
cout<<"\t\t\t*****MAGIC SQUARE*****\n";
for(i=1;i<=6*n;i++)
cout<<"_";
cout<<endl;
for(row=0;row<n;row++)
{cout<<"|";
for(column=0;column<n;column++)
cout<<setw(4)<<magic[row][column]<<"|";
cout<<endl;
for(i=1;i<=6*n;i++)
cout<<"_";
cout<<endl;}
getch();}
