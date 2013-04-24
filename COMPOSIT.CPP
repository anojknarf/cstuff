#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
long int n,prime;
cout<<"\n ENTER RANGE";
cin>>n;
for(long int i=2;i<=n;i++)
{prime=1;
for(long int j=2;j<=i;j++)
{if (i==j)
continue;
else if(i%j==0)
prime=0;}
if(!prime)
cout<<i<<"\n";}
getch();
}
