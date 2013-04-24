/* PROGRAM TO PRINT THE ELECTRICITY BILL OF A CONSUMER */
#include<stdio.h>
#include<conio.h>
void main()
{int units,num;
float amount;
char name[100];
clrscr();
printf("\n\t\t\t ELECTRICITY BILL PREPARATION ");
printf("\n\n\t ENTER CONSUMER NUMBER : ");
scanf("%d",&num);
printf("\n\n\t ENTER CONSUMER NAME   : ");
scanf("%s",&name);
printf("\n\n\t ENTER CONSUMED AMOUNT : ");
scanf("%d",&units);
if(units<=100)
amount=units*0.5;
else if(units<=200)
amount=100+(0.75*(units-100));
else if(units<=300)
amount=150+(1.00*(units-200));
else
amount=250+(1.50*(units-300));
printf("\n\n\n\t\t\tELECTRICITY BILL ");
printf("\n\n\t CONSUMER NUMBER : %d",num);
printf("\n\n\t CONSUMER NAME   : %s",name);
printf("\n\n\t BILL AMOUNT     : Rs %6.2f/-",amount);
getch();}

/*
OUTPUT:

                         ELECTRICITY BILL PREPARATION                           
                                                                                
         ENTER CONSUMER NUMBER : 12345                                          
                                                                                
                                                                                
         ENTER CONSUMER NAME   : JONAFRANK                                      
                                                                                
                                                                                
         ENTER CONSUMED AMOUNT : 2500                                           
                                                                                
                                                                                
                                                                                
                        ELECTRICITY BILL                                        
                                                                                
         CONSUMER NUMBER : 12345                                                
                                                                                
         CONSUMER NAME   : JONAFRANK                                            
                                                                                
         BILL AMOUNT     : Rs 3550.00/-                                         
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


