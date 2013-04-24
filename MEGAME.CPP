#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{clrscr();
int x;
cout<< "ENTER LEVEL: ";
cin>>x;
switch(x)
{case 1:
{cout<<"                                     *****MEMORY GAME******  \n";
int a[7][7],b[7][7],i,j,k,l=0,m=0,o;
for(i=0;i<5;i++)
{for(j=0;j<5;j++)
{o=random(7);
k=random(o+2);
a[i][j]=k;}}
for(i=0;i<5;i++)
{for(j=0;j<5;j++)
{cout<<a[i][j]<<" ";}
cout<<"\n";
}
cout<<"\nPRESS ANY KEY AFTER SEEING";
getch();
clrscr();
cout<<"                                      *****MEMORY GAME******  \n ";
cout<<" ENTER WHAT YOU SAW \n";
for(i=0;i<5;i++)
{for(j=0;j<5;j++)
{cin>>b[i][j];}}
cout<<"ORIGINAL \n";
for(i=0;i<5;i++)
{for(j=0;j<5;j++)
{cout<<a[i][j]<<" ";}
cout<<"\n";
}
for(i=0;i<5;i++)
{for(j=0;j<5;j++)
{if(a[i][j]==b[i][j])
l++;
else
m++;}}
cout<<"\nCORRECT ONES: "<<l;
cout<<"\nWRONG ONES: "<<m;
if(l==25)
cout<<"\nYOU HAVE EXCELLENT MEMORY";
else if(l>=20)
cout<<"\nYOU HAVE VERY GOOD MEMORY";
else if(l>=15)
cout<<"\nYOU HAVE GOOD MEMORY";
else
cout<<"\n OK";
getch();
break;
}
case 2:
{cout<<"                                     *****MEMORY GAME******  \n";
int a[7][7],b[7][7],i,j,k,l=0,m=0,o;
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{o=random(7);
k=random(o+2);
a[i][j]=k;}}
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{cout<<a[i][j]<<" ";}
cout<<"\n";
}
cout<<"\nPRESS ANY KEY AFTER SEEING";
getch();
clrscr();
cout<<"                                      *****MEMORY GAME******  \n ";
cout<<" ENTER WHAT YOU SAW \n";
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{cin>>b[i][j];}}
cout<<"ORIGINAL \n";
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{cout<<a[i][j]<<" ";}
cout<<"\n";
}
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{if(a[i][j]==b[i][j])
l++;
else
m++;}}
cout<<"\nCORRECT ONES: "<<l;
cout<<"\nWRONG ONES: "<<m;
if(l==9)
cout<<"\n YOU HAVE EXCELLENT MEMORY";
else if(l>=6)
cout<<"\nYOU HAVE VERY GOOD MEMORY";
else
cout<<"\n OK";
getch();
break;
}
default:cout<<"\nONLY LEVEL 1,2 EXIST";}
getch();}