/* PROGRAM TO MULTIPLY 2 MATRICES */
#include<stdio.h>
#include<conio.h>
void main()
{int a[10][10],b[10][10],c[10][10],m,n,i,j,p,q,k;
clrscr();
printf("\n ENTER ORDER OF MATRIX 'A' :\n");
scanf("%d%d",&m,&n);
printf("\n ENTER ORDER OF MATRIX 'B' :\n");
scanf("%d%d",&p,&q);
if(n==p)
{printf("ENTER THE VALUES OF MATRIX 'A' :\n");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{scanf("%d",&a[i][j]);}}
printf("ENTER THE VALUES OF MATRIX 'B' :\n");
for(i=0;i<p;i++)
{for(j=0;j<q;j++)
{scanf("%d",&b[i][j]);}}
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{c[i][j]=0;
for(k=0;k<p;k++)
{c[i][j]=(c[i][j]+(a[i][k]*b[k][j]));}}}
printf("\n\n\t\t\t =='A'X'B'== \n");
for(i=0;i<m;i++)
{for(j=0;j<q;j++)
{printf("%d  ",c[i][j]);}
printf("\n");}}
else
printf("\n MATRIX OPERATION NOT POSSIBLE ");
getch();}


/*
OUTPUT :

 ENTER ORDER OF MATRIX 'A' :
2
2

 ENTER ORDER OF MATRIX 'B' :
2
2
ENTER THE VALUES OF MATRIX 'A' :
1 1
1 1
ENTER THE VALUES OF MATRIX 'B' :
1 1
1 1


			 =='A'X'B'==
2  2
2  2

*/



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
