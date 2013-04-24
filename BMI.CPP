#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
float a,b,c,d,e;
cout<<"\n Type in your height in centimeters: ";
cin>>a;
cout<<"\n Type your weight in Kg's: ";
cin>>b;
c=a/100;
d=pow(c,2);
e=b/d;
cout<<"\n YOUR BMI(BODY MASS INDEX) IS="<<e;
if(e<18.0)
cout<<"\n YOU ARE UNDER WEIGHT!!";
else if((e>=18.0)&&(e<=25.0))
cout<<"\n YOUR WEIGHT IS UNDER CONTROL";
else if((e>25.0)&&(e<=30.0))
cout<<"\n YOU ARE OVER WEIGHT!!;REDUCE WEIGHT OR INCREASE HEIGHT;IDEAL BMI IS FROM 18 TO 25.";
else
cout<<"\n YOU ARE OBESE!!!;REDUCE WEIGHT OR INCREASE HEIGHT;IDEAL BMI IS FROM 18 TO 25.";
getch();}