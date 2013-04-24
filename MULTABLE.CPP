#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
int a,b;
cout<<"\n ENTER THE TABLE NUMBER ";
cin>>a;
cout<<"\n MULTIPLICATION TABLE"<<"\t\t"<<"POWER TABLE";
for(b=1;b<=20;b++)
cout<<"\n"<<a<<"X"<<b<<"="<<a*b<<"\t\t\t\t"<<a<<"^"<<b<<"="<<pow(a,b);
getch();}