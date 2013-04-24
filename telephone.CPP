#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<iomanip.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void welcome_screen()
{clrscr();
textbackground(BLACK);
gotoxy(20,10);
cputs("-----WELCOME---------");
gotoxy(25,12);
textcolor(WHITE);
cputs("TELEPHONE MANAGEMENT SOFTWARE");
gotoxy(38,16);
textcolor(WHITE+BLINK);
cputs("PROGRAMMED BY: ");
gotoxy(50,18);
cputs("Vikranth, Jubran and Thomas");
textcolor(WHITE+BLINK);
cputs("    ***PRESS ANY KEY TO CONTINUE***");
getch();
}
class directory
{
public:
int record;
long pn1;
char pn2[10];
int age;
char address1[100];
char description[100];
char occupation[20];
char name[40];
char emailadd[50];
char webpage[50];
void modification();
void establishing();
void delet(int pnn);
void menu();
void intoit();
void view();
int test();
}obj;
void directory::establishing()
{ofstream fout;
fout.open("storage.dat",ios::out|ios::app);
intoit();
fout.write((char*)&obj,sizeof(obj));
fout.close();}
int directory::test()
{
ifstream fin;
fin.open("storage.dat");
fin.seekg(0,ios::end);
int n=fin.tellg()/sizeof(obj);
cout<<"\n NUMBER OF RECORDS= "<<n;
return n;}
void directory::intoit()
{
clrscr();
char ch;
textcolor(BLACK+BLINK);
gotoxy(30,1);
cprintf("[ADDITION]");
textcolor(BLACK);
cout<<"\n ENTER HOUSE PHONE NUMBER: ";
cin>>pn1;
cout<<"\n ENTER MOBILE PHONE NUMBER: ";
cin>>pn2;
cin.get(ch);
cout<<"\nENTER NAME: ";
cin.getline(name,30,'\n');
cout<<"\nENTER OCCUPATION: ";
cin.getline(occupation,20,'\n');
cout<<"\nENTER HOUSE ADRESS: ";
cin.getline(address1,100,'\n');
cout<<"\n ENTER DESCRIPTION: ";
cin.getline(description,100,'\n');
cout<<"\n ENTER EMAIL ADDRESS: ";
cin.getline(emailadd,50,'\n');
cout<<"\n ENTER WEBPAGE: ";
cin.getline(webpage,50,'\n');}
void directory::modification()
{
clrscr();
textcolor(BLACK+BLINK);
gotoxy(30,1);
cprintf("[MODIFICATION]");
textcolor(BLACK);
long pn;
int n,i;
ifstream fin;
ofstream fout;
fin.open("storage.dat");
if(fin.fail())
{
cout<<"\nFILE NOT FOUND!";
fout.close();
getch();
}
fout.open("new.dat");
while(fin)
{
fin.read((char*)&obj,sizeof(obj));
fout.write((char*)&obj,sizeof(obj));}
fin.close();
fout.close();
fout.open("storage.dat",ios::app);
fin.open("new.dat");
if(fin.fail())
{
cout<<"\nFILE NOT FOUND!";
getch();exit(1);
}
int pnn;
cout<<"\nENTER PHONE NUMBER: ";
cin>>pnn;
directory o2;
int ki=0;
n=test();
for(int j=0;j<n;j++)
{
fin.read((char*)&obj,sizeof(obj));
if(pnn==pn1){cout<<"\n ENTER NEW VALUES FOR RECORD : "<<ki+1;
cout<<"\n ENTER HOUSE PHONE NUMBER: ";
cin>>o2.pn1;
cout<<"\n ENTER MOBILE PHONE NUMBER: ";
cin>>o2.pn2;
cout<<"\nENTER NAME: ";
cin.getline(o2.name,30,'\n');
cout<<"\nENTER OCCUPATION: ";
cin.getline(o2.occupation,20,'\n');
cout<<"\nENTER HOUSE ADRESS: ";
cin.getline(o2.address1,100,'\n');
cout<<"\n ENTER DESCRIPTION: ";
cin.getline(o2.description,100,'\n');
cout<<"\n ENTER EMAIL ADDRESS: ";
cin.getline(o2.emailadd,50,'\n');
cout<<"\n ENTER WEBPAGE: ";
cin.getline(o2.webpage,50,'\n');
cout<<"\n NEW RECORD NUMBER = "<<n+1;
fout.write((char *)&o2,sizeof(o2));ki++; }
fout.close();
fin.close();
delet(pnn);
}}
void directory :: delet(int pnn)
{
clrscr();
window(1,1,80,25);
textcolor(BLACK+BLINK);
gotoxy(30,1);
cprintf("[DELETION]");
long pn;
int n,i;
ifstream fin;
ofstream fout;
fin.open("storage.dat");
if(!fin)
{
cout<<"\nFILE NOT FOUND!";
getch();
}
fout.open("new.dat",ios::out);
while(fin)
{
fin.read((char*)&obj,sizeof(obj));
fout.write((char*)&obj,sizeof(obj));}
fin.close();
fout.close();
fout.open("storage.dat",ios::out);
fin.open("new.dat");
if(fin.fail())
{
cout<<"\n FILE NOT FOUND!";
getch();
}
while(fin)
{
fin.read((char*)&obj,sizeof(obj));
if(pnn!=pn1)
fout.write((char*)&obj,sizeof(obj));
}
fout.close();
fin.close();
}
void directory::view()
{
ifstream fin;
int n,j;
fin.open("storage.dat");
if(fin.fail()|fin.bad())
{
cout<<"\n FILE NOT FOUND!";
getch();
return;}
clrscr();
int i=0;
n=test();
for(j=0;j<n;j++)
{
cout<<"\nRECORD"<<i+1<<"\n";
fin.read((char*)&obj,sizeof(obj));
cout<<"PHONE NUMBER: "<<obj.pn1<<"\n";
cout<<"MOBILE NUMBER: "<<obj.pn2<<"\n";
cout<<"NAME: "<<obj.name<<"\n";
cout<<"HOUSE ADDRESS: "<<obj.address1<<"\n";
cout<<"OCCUPATION: "<<obj.occupation<<"\n";
cout<<"DESCRIPTION: "<<obj.description<<"\n";
cout<<"EMAIL ADDRESS: "<<obj.emailadd<<"\n";
cout<<"WEBPAGE: "<<obj.webpage<<"\n";
i+=1;
}
fin.close();
getch();}
void directory::menu()
{
char ch;
do{clrscr();
textbackground(WHITE);
textcolor(BLACK);
cout<<"KINDLY SELECT FROM THE GIVEN OPTIONS TO PROCEED: ";
gotoxy(30,8);
cprintf("A:ADDITION");
gotoxy(30,9);
cprintf("D:DELETION\n\r");
gotoxy(30,10);
cprintf("V:VIEW\n\r");
gotoxy(30,11);
cprintf("M:MODIFICATION\n\r");
gotoxy(30,12);
cprintf("E:EXIT\n\r");
ch=getch();
switch(ch)
{
case'a':
case'A':
{establishing();break;}
case'd':
case'D':
{int pnn;
cout<<"\nENTER PHONE NUMBER: ";
cin>>pnn;
delet(pnn);
break;}
case'm':
case'M':
{modification();
break;}
case'v':
case'V':
{view();
break;}
case'e':
case'E':
{system("cls");
exit(0);}}}while(ch!='e'||ch!='E');
}
int main()
{
welcome_screen();
obj.menu();
return(0);
}

