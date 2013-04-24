#include<iostream.h>
#include<conio.h>
#include<math.h>
void ap(int a[3])
{cout<<"\n THIS SERIES IS IN ARITHEMETIC PROGRESSION   :";
int d,e,f,g;
d=a[1]-a[0];
cout<<"\n FIRST TERM                                  = "<<a[0];
cout<<"\n COMMON DIFFERENCE                           = "<<d;
cout<<"\n 'n'th TERM=A+ND                             = "<<a[0]<<"+n"<<d;
cout<<"\n SUM OF n TERMS=N/2(2A+(N-1)D)               = n/2*(2*"<<a[0]<<"+(n-1)*"<<d<<")";
cout<<"\n ENTER VALUE OF 'n'                          : ";
cin>>e;
f=a[0]+((e-1)*d);
g=((e/2)*((2*a[0])+((e-1)*d)));
cout<<"\n 'n'th TERM                                  = "<<f;
cout<<"\n SUM OF 'n' TERMS                            = "<<g;
getch();}
void gp(int a[3])
{cout<<"\n THIS SERIES IS IN GEOMETRIC PROGRESSION     : ";
int r,j,s,l;
r=a[1]/a[0];
cout<<"\n FIRST TERM                                  = "<<a[0];
cout<<"\n COMMON RATIO                                = "<<r;
if(r>1)
{cout<<"\n 'n'th TERM=AR^(N-1)                         = "<<a[0]<<"."<<r<<"^(N-1)";
 cout<<"\n SUM OF n TERMS=A(R^N-1)/(R-1)               = "<<a[0]<<"("<<r<<"^n-1"<<"/("<<r<<"-1)";
 cout<<"\n ENTER VALUE OF 'n'                          : ";
 cin>>j;
 l=a[0]*pow(r,(j-1));
 s=(a[0]*((pow(r,j)-1)/(r-1)));
 cout<<"\n 'n'th TERM=Ar^n                             = "<<l;
 cout<<"\n SUM OF 'n' TERMS=A(R^N-1)/(R-1)             = "<<s;}
else
{cout<<"\n 'n'th TERM=AR^(N-1)                         = "<<a[0]<<"."<<r<<"^(N-1)";
 cout<<"\n SUM OF n TERMS=A(1-R^N)/(1-R)               = "<<a[0]<<"(1-"<<r<<"^n)"<<"/(1-"<<r<<")";
 cout<<"\n ENTER VALUE OF 'n'                          : ";
 cin>>j;
 l=a[0]*pow(r,(j-1));
 s=(a[0]*((1-pow(r,j))/(1-r)));
 cout<<"\n 'n'th TERM                                  = "<<l;
 cout<<"\n SUM OF 'n' TERMS                            = "<<s;}
getch();}
void main()
{clrscr();
int a[3],i,y;
do{
cout<<"\n ENTER THE FIRST 3 VALUES OF THE AP/GP SERIES: ";
for(i=0;i<3;i++)
cin>>a[i];
if(2*a[1]==a[0]+a[2])
ap(a);
else if(a[1]*a[1]==a[0]*a[2])
gp(a);
else
cout<<"\n SORRY THIS SERIES IS NOT IN AP OR GP";
cout<<"\n PRESS ZERO TO EXIT/TO CONTINUE PRESS ANY KEY: ";
cin>>y;
}
while(y!=0);
getch();}

