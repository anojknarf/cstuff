#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
double i;
cout<<"\n TYPE NUMBER:";
cin>>i;
cout<<"\n NUMBER"<<"\t"<<"SQUARE"<<"\t"<<"CUBE"<<"\t"<<"MODULUS"<<"\t"<<"SQUARE ROOT"<<"\t"<<"LOGARITHM";
cout<<"\n"<<i<<"\t"<<pow(i,2)<<"\t"<<pow(i,3)<<"\t"<<abs(i)<<"\t"<<sqrt(i)<<"\t"<<log10(i);
getch();
}