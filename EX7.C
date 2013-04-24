/* PROGRAM TO SORT NAMES IN ALPHABETICAL ORDER */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{char name[100][100],temp[100];
int i,j,n;
clrscr();
printf("\n ENTER THE NUMBER OF NAMES TO SORT : ");
scanf("%d",&n);
printf("\n ENTER THE NAMES :\n");
for(i=0;i<n;i++)
scanf("%s",&name[i]);
for(i=0;i<n-1;i++)
{for(j=i+1;j<n;j++)
{if(strcmp(name[i],name[j])>0)
{strcpy(temp,name[i]);
strcpy(name[i],name[j]);
strcpy(name[j],temp);}}}
printf("\n THE SORTED NAME LIST =>\n\n");
for(i=0;i<n;i++)
printf("%s\n\n",name[i]);
getch();}

/*
OUTPUT :

 ENTER THE NUMBER OF NAMES TO SORT : 5                                          
                                                                                
 ENTER THE NAMES :                                                              
jona                                                                            
jobin                                                                           
james                                                                           
john                                                                            
mani                                                                            
                                                                                
 THE SORTED NAME LIST =>                                                        
                                                                                
james                                                                           
                                                                                
jobin                                                                           
                                                                                
john                                                                            
                                                                                
jona                                                                            
                                                                                
mani                                                                            
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

