#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int i,j,k=0,n,a[100],b[100],low,p,temp;
cout<<"\n ENTER NUMBER OF ELEMENTS OF THE ARRAY : ";
cin>>n;
cout<<"\n ENTER THE ELEMENTS ONE BY ONE PRESSING ENTER : \n";
for(i=0;i<n;i++)
{cin>>a[i];}
for(i=0;i<n;i++)
{b[i]=a[i];}
for(i=k;i<n;i++)
{low=a[k];p=k;
for(j=k;j<n;j++)
{if(a[j]<=low)
{p=j;low=a[j];}}
temp=a[k];
a[k]=a[p];
a[p]=temp;
k++;}
cout<<"\n ENTERED ARRAY : \n";
for(i=0;i<n;i++)
cout<<b[i]<<"\n";
cout<<"\n SORTED ARRAY : \n";
for(i=0;i<n;i++)
cout<<a[i]<<"\n";
getch();}
