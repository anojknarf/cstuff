#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
int i,n;
cout<<"\n TYPE LIMIT:";
cin>>n;
cout<<"\n NUMBER"<<"\t"<<"SQUARE"<<"\t"<<"CUBE"<<"\t"<<"MODULUS"<<"\t"<<"SQUARE ROOT";
for(i=1;i<=n;i++)
cout<<"\n"<<i<<"\t"<<pow(i,2)<<"\t"<<pow(i,3)<<"\t"<<abs(i)<<"\t"<<sqrt(i);
getch();
}