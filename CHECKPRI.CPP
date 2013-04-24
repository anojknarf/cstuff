#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
long int n,prime;
cout<<"\n TYPE THE NUMBER TO BE CHECKED ";
cin>>n;
prime=1;
for(long int j=2;j<=n;j++)
{if (n==j)
continue;
else if(n%j==0)
prime=0;}
if(prime)
cout<<"\n"<<n<<"-IS PRIME";
else
cout<<"\n"<<n<<"-IS NOT PRIME";
getch();
}
