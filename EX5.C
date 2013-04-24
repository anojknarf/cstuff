/* PROGRAM TO SORT NUMBERS IN ORDER */
#include<stdio.h>
#include<conio.h>
void main()
{int a[10],n,i,j,temp;
clrscr();
printf("\n ENTER NUMBER OF VALUES TO SORT : ");
scanf("%d",&n);
printf("\n ENTER THE NUMBERS ONE BY ONE TO SORT =>\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{for(j=1;j<n;j++)
{if(a[j-1]>=a[j])
{temp=a[j-1];
a[j-1]=a[j];
a[j]=temp;}}}
printf("\n THE NUMBERS IN ASCENDING ORDER =>\n");
for(i=0;i<n;i++)
printf("\n NUMBER %d IS = %d",i+1,a[i]);
getch();}

/*
OUTPUT:

 ENTER NUMBER OF VALUES TO SORT : 5                                             
                                                                                
 ENTER THE NUMBERS ONE BY ONE TO SORT =>                                        
9                                                                               
99                                                                              
1                                                                               
2                                                                               
87                                                                              
                                                                                
 THE NUMBERS IN ASCENDING ORDER =>                                              
                                                                                
 NUMBER 1 IS = 1                                                                
 NUMBER 2 IS = 2                                                                
 NUMBER 3 IS = 9                                                                
 NUMBER 4 IS = 87                                                               
 NUMBER 5 IS = 99                                                               
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
