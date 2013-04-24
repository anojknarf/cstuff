/* PROGRAM TO CREATE AN ARRAY OF STRUCTURES */
#include<stdio.h>
#include<conio.h>
struct employee
{int eno;
long int esal;
char ename[40];
char ejob[40];};
void main()
{struct employee a[10];
int i,n;
clrscr();
printf("\n ENTER THE NUMBER OF EMPLOYEES : ");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("\n\n\n ENTER THE EMPLOYEE NAME    (%d): ",i);
scanf("%s",&a[i].ename);
printf("\n ENTER THE EMPLOYEE JOB     (%d): ",i);
scanf("%s",&a[i].ejob);
printf("\n ENTER THE EMPLOYEE NUMBER  (%d): ",i);
scanf("%d",&a[i].eno);
printf("\n ENTER THE EMPLOYEE SALARY  (%d): ",i);
scanf("%d",&a[i].esal);}
printf("\n\n\n ENTERED DETAILS :\n\n");
for(i=1;i<=n;i++){
printf("\n EMPLOYEE NAME    (%d):%s",i,a[i].ename);
printf("\n EMPLOYEE NUMBER  (%d):%d",i,a[i].eno);
printf("\n EMPLOYEE JOB     (%d):%s",i,a[i].ejob);
printf("\n EMPLOYEE SALARY  (%d):%d\n",i,a[i].esal);}
getch();}



































/*
OUTPUT :

 ENTER THE NUMBER OF EMPLOYEES : 2                                              
                                                                                
                                                                                
                                                                                
 ENTER THE EMPLOYEE NAME    (1): JONA                                           
                                                                                
 ENTER THE EMPLOYEE JOB     (1): CEO                                            
                                                                                
 ENTER THE EMPLOYEE NUMBER  (1): 1                                              
                                                                                
 ENTER THE EMPLOYEE SALARY  (1): 5000
                                                                                
                                                                                
                                                                                
 ENTER THE EMPLOYEE NAME    (2): FRANK                                          
                                                                                
 ENTER THE EMPLOYEE JOB     (2): MD                                             
                                                                                
 ENTER THE EMPLOYEE NUMBER  (2): 2                                              
                                                                                
 ENTER THE EMPLOYEE SALARY  (2): 4000
                                                                                
                                                                                
                                                                                
 ENTERED DETAILS :                                                              
                                                                                
                                                                                
 EMPLOYEE NAME    (1):JONA                                                      
 EMPLOYEE NUMBER  (1):1                                                         
 EMPLOYEE JOB     (1):CEO                                                       
 EMPLOYEE SALARY  (1):5000
                                                                                
 EMPLOYEE NAME    (2):FRANK                                                     
 EMPLOYEE NUMBER  (2):2                                                         
 EMPLOYEE JOB     (2):MD                                                        
 EMPLOYEE SALARY  (2):4000
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
