 #include<fstream.h>
 #include<conio.h>
 #include<stdio.h>
 #include<string.h>
 #include<iostream.h>
 #include<process.h>
 int accno=0;
 class bank
 {public :
 char name[40];
 float balance;
 int status;
 void newacc(void);
 void depwittra(int temp);
 int dispacc(int temp);
 void closeacc(void);
 int copy(void);};

 void bank::newacc(void)
 {int i;clrscr();
 for(i=0;i<40;i++)name[i]=' ';
 balance=0.0;
 cout<<"\n ******# CREATE AN ACCOUNT #****** ";
 cout<<"\n ACCOUNT NUMBER : "<<(++accno)<<"\n";
 cout<<"\n NAME           : ";
 gets(name);
 cout<<"\n DEPOSIT AMOUNT : ";
 cin>>balance;
 status=1;}
 int bank::dispacc(int temp)
 {if(status !=0)
 {clrscr();
 cout<<"\n ******# ACCOUNT DETAILS #****** ";
 cout<<"\n NAME           : "<<name;
 cout<<"\n ACCOUNT BALANCE: "<<balance;
 cout<<"\n ACCOUNT NUMBER : "<<temp;
 return 1;
 }
 else
 {cout<<"\n ACCOUNT DETAILS NOT AVAILABLE !!! SORRY ";return 0;
 }}
  void bank::depwittra(int temp)
  {clrscr();
   int cho,dep,wit;
   cout<<"\n ENTER 1 => MODIFY ACCOUNT/2 => DEPOSIT AMOUNT/3 => WITHDRAW AMOUNT ";
   cin>>cho;
 if(cho==1)
  {int i;
  char tname[40];
  for(i=0;i<40;i++)
  tname[i]=' ';
  float tbalance=0.0;
  clrscr();
 cout<<"\n ******# ACCOUNT DETAILS #****** ";
 cout<<"\n NAME           : "<<name;
 cout<<"\n ACCOUNT BALANCE: "<<balance;
 cout<<"\n ACCOUNT NUMBER : "<<accno;
 cout<<"\n ENTER NEW DETAILS>>>>>/IF NO CHANGE PRESS ENTER KEY FOR ALL DETAILS ";
 cout<<"\n NAME           : ";
 gets(tname);
 cout<<"\n DEPOSIT AMOUNT : ";
 cin>>tbalance;
 if(strlen(tname) !=0)
 strcpy(name,tname);
 if(tbalance>0)
 balance=tbalance;}
 else if(cho==2)
 {cout<<"\n ENTER DEPOSIT AMOUNT : ";
  cin>>dep;
  balance=balance+dep;
  dispacc(temp);}
  else if(cho==3)
  {cout<<"\n ENTER WITHDRAWAL AMOUNT : ";
  cin>>wit;
  if (balance-wit>=1000)
 {balance=balance-wit;
  dispacc(temp);}
  else
  cout<<"\n INSUFFICIENT BALANCE ";}}
void bank::closeacc(void)
  {if(status ==0)
  cout<<"\n ACCOUNT DOES NOT EXIST";
  else
  status=0;}
  int bank::copy()
  {if(status==0)
  return 0;
  else
  return 1;}
void main()
{int choice,offset,temp,flag,ch;
bank obj;
fstream fio;
fio.open("atm.dat", ios::in | ios::out | ios::binary);
textcolor(BLACK+BLINK);
textbackground(WHITE);
if(!fio)
{cout<<"\n FILE CORRUPTED ";getch();
exit(1);}
fio.seekg(0,ios::end);
int filesize=fio.tellp();
accno=filesize/sizeof(bank);
while(1)
{clrscr();
gotoxy(25,7); cout<<" *******# JF BANK ATM #******* ";
gotoxy(25,9); cout<<" *******#    MENU     #******* ";
gotoxy(25,11);cout<<"     NEW ACCOUNT    =>> 1";
gotoxy(25,13);cout<<"     MODIFY ACCOUNT =>> 2";
gotoxy(25,15);cout<<"     DISPLAY ACCOUNT=>> 3";
gotoxy(25,17);cout<<"     CLOSE ACCOUNT  =>> 4";
gotoxy(25,19);cout<<"     EXIT           =>> 5";
gotoxy(25,21);cout<<"     ENTER CHOICE (1-5) : ";
cin>>choice;
if(choice==1)
{obj.newacc();
temp=accno;
offset = ((temp-1)*sizeof(bank));
fio.seekp(offset,ios::beg);
fio.write((char *)&obj,sizeof(bank));}
else if(choice==2)
{if(!accno){
cout<<"\n NO ENTRY AVAILABLE";
getch();}
cout<<"\n ENTER ACCOUNT NUMBER :";
cin>>temp;
if(temp>accno){
cout<<"\n INVALID ACCOUNT NUMBER";
getch();}
else
{
 offset =((temp-1) * sizeof(bank));
 fio.seekg(offset,ios::beg);
 fio.read((char *)&obj,sizeof(bank));
 flag=obj.dispacc(temp);
 getch();
 if(flag)
 {cout<<"\n MODIFY THIS RECORD 1 =>YES/2 =>NO : ";
 cin>>ch;
 if(ch == 1)
 {cout<<"\n ENTER NEW VALUES ";
 obj.depwittra(temp);
 fio.seekg(offset,ios::beg);
 fio.write((char*)&obj,sizeof(bank));
 cout<<"\n NEW VALUES REPLACED";
 getch();}}}}
else if(choice==3)
{if(!accno)
{cout<<"\n NO ENTRY AVAILABLE ";
getch();
}
cout<<"\n ENTER ACCOUNT NUMBER :";
cin>>temp;
if(temp>accno){
cout<<"\n INVALID ACCOUNT NUMBER";
getch();}
else
{offset=(temp-1)*sizeof(bank);
fio.seekg(offset,ios::beg);
fio.read((char *) &obj,sizeof(bank));
obj.dispacc(temp);
getch();
}}
else if(choice==4)
{if(!accno)
{cout<<"\n NO ENTRY AVAILABLE ";
getch();
}
cout<<"\n ENTER ACCOUNT NUMBER :";
cin>>temp;
if(temp>accno){
cout<<"\n INVALID ACCOUNT NUMBER";
getch();}
else
{offset=(temp-1)*sizeof(bank);
fio.seekg(offset,ios::beg);
fio.read((char *) &obj,sizeof(bank));
obj.dispacc(temp);
getch();
if(flag){
obj.closeacc();
fio.seekg(offset,ios::beg);
fio.write((char *) &obj,sizeof(bank));
cout<<"\n NOW THE RECORD IS DELETED ";
getch();
}}}
else if(choice==5)
{fstream fio1;
fio1.open("tempu.dat",ios::in | ios::out | ios::binary);
if(!fio1)
{cout<<"\n FILE CORRUPTED ";getch();
exit(1);}
fio.seekg(0);
fio1.seekg(0);
bank tobj;
do
{fio.read((char *) &obj,sizeof(bank));
flag=obj.copy();
if(flag)
{tobj=obj;
fio1.write((char *)&tobj,sizeof(bank));
}
}while(fio);
cout<<"\n ACTIVE ACCOUNTS STORED IN tempu.dat FILE";
cout<<"\n USE tempu.dat FILE FOR THE NEXT RUN \n\n";
getch();
fio.close();
fio1.close();
exit(0);}
else
{cout<<"\n WRONG CHOICE ,(1-5) ";
getch();}}}




