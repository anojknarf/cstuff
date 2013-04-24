#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
#include<process.h>
#include<time.h>
void rectangle_box(int x, int y, int length, int width)
{    gotoxy(x,y);
     cout<<char(201);
     for(int i = 1; i<=length; i++) // row across the top
     {
	  cout<<char(174)<<flush;
     }
     cout<<char(187)<<flush;
     for(int j = 1; j <= width; j++) // edges of box
     {
	   gotoxy(x,y+j);
	   cout<<char(279)<<flush;
	   gotoxy(x+length+1, y+j);
	   cout<<char(279)<<flush;
     }
     gotoxy(x,y+width);
     cout<<char(200)<<flush;
     for(i=1; i <= length ; i++) // row across the bottom
     {
	  cout<<char(175)<<flush;
     }
     cout<<char(188)<<flush;
     return;
}
void timing(){
    time_t tim;  //create variable of time_t
    time(&tim); //pass variable tim to time function
    cout <<"               "<< ctime(&tim);}
void search()
{clrscr();
char text[100],fname[15],ROLLNO[10];int CHECKS=0,repeat=0;
do{clrscr();
rectangle_box(1, 1, 77, 24);
gotoxy(15,10);
cout<<" ENTER THE FILE NAME AS SAVED EARLIER : ";
gets(fname);
gotoxy(15,12);
cout<<" ENTER THE ROLL NUMBER YOU WANT TO CHECK : ";
gets(ROLLNO);
ifstream ifile;
ifile.open(fname,ios::in);
if(!ifile){clrscr();rectangle_box(1, 1, 77, 24);gotoxy(17,12);cout<<"        ERROR IN FILE NAME CHECK AGAIN";getch();}
while(ifile)
{ifile.getline(text,80);
if(strcmp(ROLLNO,text)==0)
{cout<<"\n"<<text;CHECKS=1;
while(ifile && (strcmp("-------------------------------------------------------------------------------",text)!=0))
{ifile.getline(text,80);cout<<"\n"<<text;}
}}if(CHECKS==0){gotoxy(17,14);cout<<"     WRONG ROLL NUMBER ENTERED CHECK AGAIN ";getch();}
gotoxy(16,24);
cout<<" ENTER 1 TO SEARCH NEW OR 0 TO EXIT TO MAIN MENU : ";cin>>repeat;
}while(repeat==1);}
class repcar
{public:
void report()
{clrscr();
textcolor(GREEN);
textbackground(RED);
rectangle_box(1, 1, 77, 24);
gotoxy(18,5);
cout<<"    ******!!!!!!!! CAUTION !!!!!!!****** ";
gotoxy(14,11);
cout<<"           TYPE ALL INFORMATION CORRECTLY ";
gotoxy(14,17);
cout<<"TO BE CORRECTED THE WHOLE FILE NEEDS TO BE WRITTEN AGAIN";
getch();
clrscr();
int rno[100],m1[100],m2[100],m3[100],m4[100],m5[100],t[100],temp,n,i,j,t1,t2,t3,t4,t5,t6,t7,t8,m6[100],t10,k=1,T,m1ch,m2ch,m3ch,m4ch,m5ch,m6ch,m1cl,m2cl,m3cl,m4cl,m5cl,m6cl,s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,J[7][100],I,TEMP,K[7][100],L=0,Z;
char nam[100][80],se[2],t9[100][80],sub2[20],sub3[20],sub4[20],sub5[20],sub6[20];
int p[100],a1,a2,a3,a4,a5,a6,TT,c,z;
cout<<"\n TYPE CLASS                                                       : ";
cin>>c;
if((c==1)||(c==2)||(c==3)||(c==4)||(c==10)){do
{textcolor(GREEN);
textbackground(RED);
char y[20],u[50];
cout<<"\n TYPE THE EXAM NAME                                               : ";
gets(u);
cout<<"\n TYPE NAME OF CLASS,SECTION,EXAM CODE,'.DOC'(DON'T LEAVE SPACE)   : ";
cin>>y;
ofstream ofile;
ofile.open(y,ios::out);
cout<<"\n TYPE SECTION                                                     : ";
gets(se);
cout<<"\n\n ENTER NUMBER OF STUDENTS                                         : ";
cin>>n;
cout<<"\n ENTER SUBJECT 2 NAME                                             : ";
gets(sub2);
cout<<"\n ENTER SUBJECT 3 NAME                                             : ";
gets(sub3);
cout<<"\n ENTER SUBJECT 4 NAME                                             : ";
gets(sub4);
cout<<"\n ENTER SUBJECT 5 NAME                                             : ";
gets(sub5);
for(i=0;i<n;i++)
{cout<<"\n ENTER NAME OF STUDENT                                            : ";
gets(nam[i]);
cout<<"\n ENTER ROLL NUMBER OF STUDENT(DON'T ADD ZERO AS THE FIRST DIGIT)  : ";
cin>>rno[i];
cout<<"\n ENTER ENGLISH MARKS                                              : ";
cin>>m1[i];
cout<<"\n ENTER SUBJECT 2 MARKS                                            : ";
cin>>m2[i];
cout<<"\n ENTER SUBJECT 3 MARKS                                            : ";
cin>>m3[i];
cout<<"\n ENTER SUBJECT 4 MARKS                                            : ";
cin>>m4[i];
cout<<"\n ENTER SUBJECT 5 MARKS                                            : ";
cin>>m5[i];
t[i]=m1[i]+m2[i]+m3[i]+m4[i]+m5[i];
p[i]=t[i]/5;
getch();
clrscr();
}
for(Z=0;Z<n;Z++)
{for(i=0;i<(n-1);i++)
{for(int j=(i+1);j<n;j++)
{if(t[i]<t[j])
{t1=t[i];
t[i]=t[j];
t[j]=t1;
t2=m1[i];
m1[i]=m1[j];
m1[j]=t2;
t3=m2[i];
m2[i]=m2[j];
m2[j]=t3;
t4=m3[i];
m3[i]=m3[j];
m3[j]=t4;
t5=m4[i];
m4[i]=m4[j];
m4[j]=t5;
t6=m5[i];
m5[i]=m5[j];
m5[j]=t6;
t7=p[i];
p[i]=p[j];
p[j]=t7;
t8=rno[i];
rno[i]=rno[j];
rno[j]=t8;
strcpy(t9[i],nam[i]);
strcpy(nam[i],nam[j]);
strcpy(nam[j],t9[i]);}}}}
m1ch=m1[0];
m2ch=m2[0];
m3ch=m3[0];
m4ch=m4[0];
m5ch=m5[0];
m1cl=m1[0];
m2cl=m2[0];
m3cl=m3[0];
m4cl=m4[0];
m5cl=m5[0];
for(i=0;i<n;i++)
{if(m1[i]>m1ch)
m1ch=m1[i];
if(m2[i]>m2ch)
m2ch=m2[i];
if(m3[i]>m3ch)
m3ch=m3[i];
if(m4[i]>m4ch)
m4ch=m4[i];
if(m5[i]>m5ch)
m5ch=m5[i];
if(m1[i]<m1cl)
m1cl=m1[i];
if(m2[i]<m2cl)
m2cl=m2[i];
if(m3[i]<m3cl)
m3cl=m3[i];
if(m4[i]<m4cl)
m4cl=m4[i];
if(m5[i]<m5cl)
m5cl=m5[i];}
for(i=0;i<n;i++)
{s1+=m1[i];
s2+=m2[i];
s3+=m3[i];
s4+=m4[i];
s5+=m5[i];}
a1=s1/n;
a2=s2/n;
a3=s3/n;
a4=s4/n;
a5=s5/n;
clrscr();
T=m1ch+m2ch+m3ch+m4ch+m5ch;
TT=a1+a2+a3+a4+a5;
for(i=0;i<n;i++)
{clrscr();
ofile<<"\n\n"<<rno[i];
cout<<"\n     ST.JOHN'S ENGLISH SCHOOL & JUNIOR COLLEGE BESANT NAGAR CHENNAI";ofile<<"\n     ST.JOHN'S ENGLISH SCHOOL & JUNIOR COLLEGE BESANT NAGAR CHENNAI";
cout<<"\n                #**************FILE NAME**************#                    ";ofile<<"\n                #**************FILE NAME**************#                    ";
cout<<"\n                #**************"<<y<<"**************#                    ";ofile<<"\n                #**************"<<y<<"**************#                    ";
cout<<"\n                        "<<u<<" EXAMINATON";ofile<<"\n                        "<<u<<" EXAMINATON";
cout<<"\n MS    : MARKS SCORED"<<"                    CAVG  : CLASS AVERAGE";ofile<<"\n MS    : MARKS SCORED"<<"             CAVG  : CLASS AVERAGE";
cout<<"\n CH    : CLASS HIGHEST"<<"                   SUB 2 : "<<sub2;ofile<<"\n CH    : CLASS HIGHEST"<<"                   SUB 2 : "<<sub2;
cout<<"\n TM    : TOTAL MARKS"<<"                     SUB 3 : "<<sub3;ofile<<"\n TM    : TOTAL MARKS"<<"                     SUB 3 : "<<sub3;
cout<<"\n ML    : MARKS LOST"<<"                      SUB 4 : "<<sub4;ofile<<"\n ML    : MARKS LOST"<<"                      SUB 4 : "<<sub4;
cout<<"\n MLWCH : MARKS LOST WITH CLASS HIGHEST"<<"   SUB 5 : "<<sub5;ofile<<"\n MLWCH : MARKS LOST WITH CLASS HIGHEST"<<"   SUB 5 : "<<sub5;
cout<<"\n CL    : CLASS LOWEST";ofile<<"\n CL    : CLASS LOWEST";
getch();
 cout<<"\n\n               #****#   REPORT CARD   #****#     ";ofile<<"\n               #****#   REPORT CARD   #****#     ";
 cout<<"\n\n  NAME OF STUDENT       : "<<nam[i];ofile<<"\n  NAME OF STUDENT       : "<<nam[i];
 cout<<"\n  CLASS                 : "<<c;ofile<<"\n  CLASS                 : "<<c;
 cout<<"\n  SECTION               : "<<se;ofile<<"\n  SECTION               : "<<se;
 cout<<"\n  ROLL NUMER            : "<<rno[i];ofile<<"\n  ROLL NUMER            : "<<rno[i];
 cout<<"\n                          MS"<<"\tCH"<<"\tTM"<<"\tML"<<"\tMLWCH"<<"\tCAVG"<<"\tCL";ofile<<"\n                          MS"<<"\tCH"<<"\tTM"<<"\tML"<<"\tMLWCH"<<"\tCAVG"<<"\tCL";
 cout<<"\n  ENGLISH   MARKS       : "<<m1[i]<<"\t"<<m1ch<<"\t"<<"100"<<"\t"<<100-m1[i]<<"\t"<<m1ch-m1[i]<<"\t"<<a1<<"\t"<<m1cl;ofile<<"\n  ENGLISH   MARKS       : "<<m1[i]<<"\t"<<m1ch<<"\t"<<"100"<<"\t"<<100-m1[i]<<"\t"<<m1ch-m1[i]<<"\t"<<a1<<"\t"<<m1cl;
 cout<<"\n  SUBJECT 2 MARKS       : "<<m2[i]<<"\t"<<m2ch<<"\t"<<"100"<<"\t"<<100-m2[i]<<"\t"<<m2ch-m2[i]<<"\t"<<a2<<"\t"<<m2cl;ofile<<"\n  SUBJECT 2 MARKS       : "<<m2[i]<<"\t"<<m2ch<<"\t"<<"100"<<"\t"<<100-m2[i]<<"\t"<<m2ch-m2[i]<<"\t"<<a2<<"\t"<<m2cl;
 cout<<"\n  SUBJECT 3 MARKS       : "<<m3[i]<<"\t"<<m3ch<<"\t"<<"100"<<"\t"<<100-m3[i]<<"\t"<<m3ch-m3[i]<<"\t"<<a3<<"\t"<<m3cl;ofile<<"\n  SUBJECT 3 MARKS       : "<<m3[i]<<"\t"<<m3ch<<"\t"<<"100"<<"\t"<<100-m3[i]<<"\t"<<m3ch-m3[i]<<"\t"<<a3<<"\t"<<m3cl;
 cout<<"\n  SUBJECT 4 MARKS       : "<<m4[i]<<"\t"<<m4ch<<"\t"<<"100"<<"\t"<<100-m4[i]<<"\t"<<m4ch-m4[i]<<"\t"<<a4<<"\t"<<m4cl;ofile<<"\n  SUBJECT 4 MARKS       : "<<m4[i]<<"\t"<<m4ch<<"\t"<<"100"<<"\t"<<100-m4[i]<<"\t"<<m4ch-m4[i]<<"\t"<<a4<<"\t"<<m4cl;
 cout<<"\n  SUBJECT 5 MARKS       : "<<m5[i]<<"\t"<<m5ch<<"\t"<<"100"<<"\t"<<100-m5[i]<<"\t"<<m5ch-m5[i]<<"\t"<<a5<<"\t"<<m5cl;ofile<<"\n  SUBJECT 5 MARKS       : "<<m5[i]<<"\t"<<m5ch<<"\t"<<"100"<<"\t"<<100-m5[i]<<"\t"<<m5ch-m5[i]<<"\t"<<a5<<"\t"<<m5cl;
 cout<<"\n  TOTAL                 : "<<t[i]<<"\t"<<T<<"\t"<<"500"<<"\t"<<500-t[i]<<"\t"<<T-t[i]<<"\t"<<TT;ofile<<"\n  TOTAL                 : "<<t[i]<<"\t"<<T<<"\t"<<"500"<<"\t"<<500-t[i]<<"\t"<<T-t[i]<<"\t"<<TT;
 cout<<"\n  PERCENTAGE            : "<<p[i]<<"%"<<"\t"<<T/5<<"%"<<"\t"<<"100%"<<"\t"<<100-p[i]<<"%"<<"\t"<<(T/5)-p[i]<<"%"<<"\t"<<TT/5<<"%";ofile<<"\n  PERCENTAGE            : "<<p[i]<<"%"<<"\t"<<T/5<<"%"<<"\t"<<"100%"<<"\t"<<100-p[i]<<"%"<<"\t"<<(T/5)-p[i]<<"%"<<"\t"<<TT/5<<"%";
 if((m1[i]<33) || (m2[i]<33) || (m3[i]<33) || (m4[i]<33) || (m5[i] <33))
{cout<<"\n  RANK                  : NO RANK";ofile<<"\n  RANK                  : NO RANK";}
 else if(t[i]==t[i+1])
{cout<<"\n  RANK                  : "<<k;ofile<<"\n  RANK                  : "<<k;}
 else
{cout<<"\n  RANK                  : "<<k;ofile<<"\n  RANK                  : "<<k;
 k++;}
if((p[i]>=88)&&(p[i]<=100))
{cout<<"\n  GRADE                 : A ***** EXCELLENT";ofile<<"\n  GRADE                 : A ***** EXCELLENT";}
else if((p[i]>=78)&&(p[i]<88))
{cout<<"\n  GRADE                 : B ****  VERY GOOD";ofile<<"\n  GRADE                 : B ****  VERY GOOD";}
else if((p[i]>=68)&&(p[i]<78))
{cout<<"\n  GRADE                 : C ***   GOOD";ofile<<"\n  GRADE                 : C ***   GOOD";}
else if((p[i]>=48)&&(p[i]<68))
{cout<<"\n  GRADE                 : D **    OK";ofile<<"\n  GRADE                 : D **    OK";}
else if((p[i]>=33)&&(p[i]<48))
{cout<<"\n  GRADE                 : E *     FAIR";ofile<<"\n  GRADE                 : E *     FAIR";}
else
{cout<<"\n  GRADE                 : F       POOR";ofile<<"\n  GRADE                 : F       POOR";}
cout<<"\n-------------------------------------------------------------------------------";ofile<<"\n\n-------------------------------------------------------------------------------";
getch(); }
cout<<"\n TO ADD A NEW CLASS OR TO EDIT THE PRESENT CLASS PRESS ZERO;TO EXIT PRESS 1 : ";
cin>>z;}while(z==0);}
else if((c==5)||(c==6)||(c==7)||(c==8)||(c==9))
{
do
{textcolor(GREEN);
textbackground(RED);
char y[20],u[50];
cout<<"\n TYPE THE EXAM NAME                                               : ";
gets(u);
cout<<"\n TYPE NAME OF CLASS,SECTION,EXAM CODE,'.DOC'(DON'T LEAVE SPACE)   : ";
cin>>y;
ofstream ofile;
ofile.open(y,ios::out);
cout<<"\n TYPE SECTION                                                     : ";
gets(se);
cout<<"\n\n ENTER NUMBER OF STUDENTS                                         : ";
cin>>n;
cout<<"\n ENTER SUBJECT 2 NAME                                             : ";
gets(sub2);
cout<<"\n ENTER SUBJECT 3 NAME                                             : ";
gets(sub3);
cout<<"\n ENTER SUBJECT 4 NAME                                             : ";
gets(sub4);
cout<<"\n ENTER SUBJECT 5 NAME                                             : ";
gets(sub5);
cout<<"\n ENTER SUBJECT 6 NAME                                             : ";
gets(sub6);
for(i=0;i<n;i++)
{cout<<"\n ENTER NAME OF STUDENT                                            : ";
gets(nam[i]);
cout<<"\n ENTER ROLL NUMBER OF STUDENT(DON'T ADD ZERO AS THE FIRST DIGIT)  : ";
cin>>rno[i];
cout<<"\n ENTER ENGLISH MARKS                                              : ";
cin>>m1[i];
cout<<"\n ENTER SUBJECT 2 MARKS                                            : ";
cin>>m2[i];
cout<<"\n ENTER SUBJECT 3 MARKS                                            : ";
cin>>m3[i];
cout<<"\n ENTER SUBJECT 4 MARKS                                            : ";
cin>>m4[i];
cout<<"\n ENTER SUBJECT 5 MARKS                                            : ";
cin>>m5[i];
cout<<"\n ENTER SUBJECT 6 MARKS                                            : ";
cin>>m6[i];
t[i]=m1[i]+m2[i]+m3[i]+m4[i]+m5[i]+m6[i];
p[i]=t[i]/6;
getch();
clrscr();
}
for(Z=0;Z<n;Z++)
{for(i=0;i<(n-1);i++)
{for(int j=(i+1);j<n;j++)
{if(t[i]<t[j])
{t1=t[i];
t[i]=t[j];
t[j]=t1;
t2=m1[i];
m1[i]=m1[j];
m1[j]=t2;
t3=m2[i];
m2[i]=m2[j];
m2[j]=t3;
t4=m3[i];
m3[i]=m3[j];
m3[j]=t4;
t5=m4[i];
m4[i]=m4[j];
m4[j]=t5;
t6=m5[i];
m5[i]=m5[j];
m5[j]=t6;
t7=p[i];
p[i]=p[j];
p[j]=t7;
t8=rno[i];
rno[i]=rno[j];
rno[j]=t8;
strcpy(t9[i],nam[i]);
strcpy(nam[i],nam[j]);
strcpy(nam[j],t9[i]);
t10=m6[i];
m6[i]=m6[j];
m6[j]=t10;}}}}
m1ch=m1[0];
m2ch=m2[0];
m3ch=m3[0];
m4ch=m4[0];
m5ch=m5[0];
m6ch=m6[0];
m1cl=m1[0];
m2cl=m2[0];
m3cl=m3[0];
m4cl=m4[0];
m5cl=m5[0];
m6cl=m6[0];
for(i=0;i<n;i++)
{if(m1[i]>m1ch)
m1ch=m1[i];
if(m2[i]>m2ch)
m2ch=m2[i];
if(m3[i]>m3ch)
m3ch=m3[i];
if(m4[i]>m4ch)
m4ch=m4[i];
if(m5[i]>m5ch)
m5ch=m5[i];
if(m6[i]>m6ch)
m6ch=m6[i];
if(m1[i]<m1cl)
m1cl=m1[i];
if(m2[i]<m2cl)
m2cl=m2[i];
if(m3[i]<m3cl)
m3cl=m3[i];
if(m4[i]<m4cl)
m4cl=m4[i];
if(m5[i]<m5cl)
m5cl=m5[i];
if(m6[i]<m6cl)
m6cl=m6[i];}
for(i=0;i<n;i++)
{s1+=m1[i];
s2+=m2[i];
s3+=m3[i];
s4+=m4[i];
s5+=m5[i];
s6+=m6[i];}
a1=s1/n;
a2=s2/n;
a3=s3/n;
a4=s4/n;
a5=s5/n;
a6=s6/n;
clrscr();
T=m1ch+m2ch+m3ch+m4ch+m5ch+m6ch;
TT=a1+a2+a3+a4+a5+a6;
for(i=0;i<n;i++)
{clrscr();
ofile<<"\n\n"<<rno[i];
cout<<"\n     ST.JOHN'S ENGLISH SCHOOL & JUNIOR COLLEGE BESANT NAGAR CHENNAI";ofile<<"\n     ST.JOHN'S ENGLISH SCHOOL & JUNIOR COLLEGE BESANT NAGAR CHENNAI";
cout<<"\n                #**************FILE NAME**************#                    ";ofile<<"\n                #**************FILE NAME**************#                    ";
cout<<"\n                #**************"<<y<<"**************#                    ";ofile<<"\n                #**************"<<y<<"**************#                    ";
cout<<"\n                        "<<u<<" EXAMINATON";ofile<<"\n                        "<<u<<" EXAMINATON";
cout<<"\n MS    : MARKS SCORED"<<"                    CAVG  : CLASS AVERAGE";ofile<<"\n MS    : MARKS SCORED"<<"             CAVG  : CLASS AVERAGE";
cout<<"\n CH    : CLASS HIGHEST"<<"                   SUB 2 : "<<sub2;ofile<<"\n CH    : CLASS HIGHEST"<<"                   SUB 2 : "<<sub2;
cout<<"\n TM    : TOTAL MARKS"<<"                     SUB 3 : "<<sub3;ofile<<"\n TM    : TOTAL MARKS"<<"                     SUB 3 : "<<sub3;
cout<<"\n ML    : MARKS LOST"<<"                      SUB 4 : "<<sub4;ofile<<"\n ML    : MARKS LOST"<<"                      SUB 4 : "<<sub4;
cout<<"\n MLWCH : MARKS LOST WITH CLASS HIGHEST"<<"   SUB 5 : "<<sub5;ofile<<"\n MLWCH : MARKS LOST WITH CLASS HIGHEST"<<"   SUB 5 : "<<sub5;
cout<<"\n CL    : CLASS LOWEST"<<"   SUB 6 : "<<sub6;ofile<<"\n CL    : CLASS LOWEST"<<"                                     SUB 6 : "<<sub6;
getch();
 cout<<"\n\n               #****#   REPORT CARD   #****#     ";ofile<<"\n               #****#   REPORT CARD   #****#     ";
 cout<<"\n\n  NAME OF STUDENT       : "<<nam[i];ofile<<"\n  NAME OF STUDENT       : "<<nam[i];
 cout<<"\n  CLASS                 : "<<c;ofile<<"\n  CLASS                 : "<<c;
 cout<<"\n  SECTION               : "<<se;ofile<<"\n  SECTION               : "<<se;
 cout<<"\n  ROLL NUMER            : "<<rno[i];ofile<<"\n  ROLL NUMER            : "<<rno[i];
 cout<<"\n                          MS"<<"\tCH"<<"\tTM"<<"\tML"<<"\tMLWCH"<<"\tCAVG"<<"\tCL";ofile<<"\n                          MS"<<"\tCH"<<"\tTM"<<"\tML"<<"\tMLWCH"<<"\tCAVG"<<"\tCL";
 cout<<"\n  ENGLISH   MARKS       : "<<m1[i]<<"\t"<<m1ch<<"\t"<<"100"<<"\t"<<100-m1[i]<<"\t"<<m1ch-m1[i]<<"\t"<<a1<<"\t"<<m1cl;ofile<<"\n  ENGLISH   MARKS       : "<<m1[i]<<"\t"<<m1ch<<"\t"<<"100"<<"\t"<<100-m1[i]<<"\t"<<m1ch-m1[i]<<"\t"<<a1<<"\t"<<m1cl;
 cout<<"\n  SUBJECT 2 MARKS       : "<<m2[i]<<"\t"<<m2ch<<"\t"<<"100"<<"\t"<<100-m2[i]<<"\t"<<m2ch-m2[i]<<"\t"<<a2<<"\t"<<m2cl;ofile<<"\n  SUBJECT 2 MARKS       : "<<m2[i]<<"\t"<<m2ch<<"\t"<<"100"<<"\t"<<100-m2[i]<<"\t"<<m2ch-m2[i]<<"\t"<<a2<<"\t"<<m2cl;
 cout<<"\n  SUBJECT 3 MARKS       : "<<m3[i]<<"\t"<<m3ch<<"\t"<<"100"<<"\t"<<100-m3[i]<<"\t"<<m3ch-m3[i]<<"\t"<<a3<<"\t"<<m3cl;ofile<<"\n  SUBJECT 3 MARKS       : "<<m3[i]<<"\t"<<m3ch<<"\t"<<"100"<<"\t"<<100-m3[i]<<"\t"<<m3ch-m3[i]<<"\t"<<a3<<"\t"<<m3cl;
 cout<<"\n  SUBJECT 4 MARKS       : "<<m4[i]<<"\t"<<m4ch<<"\t"<<"100"<<"\t"<<100-m4[i]<<"\t"<<m4ch-m4[i]<<"\t"<<a4<<"\t"<<m4cl;ofile<<"\n  SUBJECT 4 MARKS       : "<<m4[i]<<"\t"<<m4ch<<"\t"<<"100"<<"\t"<<100-m4[i]<<"\t"<<m4ch-m4[i]<<"\t"<<a4<<"\t"<<m4cl;
 cout<<"\n  SUBJECT 5 MARKS       : "<<m5[i]<<"\t"<<m5ch<<"\t"<<"100"<<"\t"<<100-m5[i]<<"\t"<<m5ch-m5[i]<<"\t"<<a5<<"\t"<<m5cl;ofile<<"\n  SUBJECT 5 MARKS       : "<<m5[i]<<"\t"<<m5ch<<"\t"<<"100"<<"\t"<<100-m5[i]<<"\t"<<m5ch-m5[i]<<"\t"<<a5<<"\t"<<m5cl;
 cout<<"\n  SUBJECT 6 MARKS       : "<<m6[i]<<"\t"<<m6ch<<"\t"<<"100"<<"\t"<<100-m6[i]<<"\t"<<m6ch-m6[i]<<"\t"<<a6<<"\t"<<m6cl;ofile<<"\n  SUBJECT 6 MARKS       : "<<m6[i]<<"\t"<<m6ch<<"\t"<<"100"<<"\t"<<100-m6[i]<<"\t"<<m6ch-m6[i]<<"\t"<<a6<<"\t"<<m6cl;
 cout<<"\n  TOTAL                 : "<<t[i]<<"\t"<<T<<"\t"<<"600"<<"\t"<<600-t[i]<<"\t"<<T-t[i]<<"\t"<<TT;ofile<<"\n  TOTAL                 : "<<t[i]<<"\t"<<T<<"\t"<<"600"<<"\t"<<600-t[i]<<"\t"<<T-t[i]<<"\t"<<TT;
 cout<<"\n  PERCENTAGE            : "<<p[i]<<"%"<<"\t"<<T/6<<"%"<<"\t"<<"100%"<<"\t"<<100-p[i]<<"%"<<"\t"<<(T/6)-p[i]<<"%"<<"\t"<<TT/6<<"%";ofile<<"\n  PERCENTAGE            : "<<p[i]<<"%"<<"\t"<<T/6<<"%"<<"\t"<<"100%"<<"\t"<<100-p[i]<<"%"<<"\t"<<(T/6)-p[i]<<"%"<<"\t"<<TT/6<<"%";
 if((m1[i]<33) || (m2[i]<33) || (m3[i]<33) || (m4[i]<33) || (m5[i] <33) || (m6[i] <33))
{cout<<"\n  RANK                  : NO RANK";ofile<<"\n  RANK                  : NO RANK";}
 else if(t[i]==t[i+1])
{cout<<"\n  RANK                  : "<<k;ofile<<"\n  RANK                  : "<<k;}
 else
{cout<<"\n  RANK                  : "<<k;ofile<<"\n  RANK                  : "<<k;
 k++;}
if((p[i]>=88)&&(p[i]<=100))
{cout<<"\n  GRADE                 : A ***** EXCELLENT";ofile<<"\n  GRADE                 : A ***** EXCELLENT";}
else if((p[i]>=78)&&(p[i]<88))
{cout<<"\n  GRADE                 : B ****  VERY GOOD";ofile<<"\n  GRADE                 : B ****  VERY GOOD";}
else if((p[i]>=68)&&(p[i]<78))
{cout<<"\n  GRADE                 : C ***   GOOD";ofile<<"\n  GRADE                 : C ***   GOOD";}
else if((p[i]>=48)&&(p[i]<68))
{cout<<"\n  GRADE                 : D **    OK";ofile<<"\n  GRADE                 : D **    OK";}
else if((p[i]>=33)&&(p[i]<48))
{cout<<"\n  GRADE                 : E *     FAIR";ofile<<"\n  GRADE                 : E *     FAIR";}
else
{cout<<"\n  GRADE                 : F       POOR";ofile<<"\n  GRADE                 : F       POOR";}
cout<<"\n-------------------------------------------------------------------------------";ofile<<"\n\n-------------------------------------------------------------------------------";
getch(); }
cout<<"\n TO ADD A NEW CLASS OR TO EDIT THE PRESENT CLASS PRESS ZERO;TO EXIT PRESS 1 : ";
cin>>z;}while(z==0);}
else
{
do
{textcolor(GREEN);
textbackground(RED);
char y[20],u[50];
cout<<"\n TYPE THE EXAM NAME                                               : ";
gets(u);
cout<<"\n TYPE NAME OF CLASS,SECTION,EXAM CODE,'.DOC'(DON'T LEAVE SPACE)   : ";
cin>>y;
ofstream ofile;
ofile.open(y,ios::out);
cout<<"\n TYPE SECTION                                                     : ";
gets(se);
cout<<"\n\n ENTER NUMBER OF STUDENTS                                         : ";
cin>>n;
cout<<"\n ENTER SUBJECT 2 NAME                                             : ";
gets(sub2);
cout<<"\n ENTER SUBJECT 3 NAME                                             : ";
gets(sub3);
cout<<"\n ENTER SUBJECT 4 NAME                                             : ";
gets(sub4);
cout<<"\n ENTER SUBJECT 5 NAME                                             : ";
gets(sub5);
cout<<"\n ENTER SUBJECT 6 NAME                                             : ";
gets(sub6);
for(i=0;i<n;i++)
{cout<<"\n ENTER NAME OF STUDENT                                            : ";
gets(nam[i]);
cout<<"\n ENTER ROLL NUMBER OF STUDENT(DON'T ADD ZERO AS THE FIRST DIGIT)  : ";
cin>>rno[i];
cout<<"\n ENTER ENGLISH MARKS                                              : ";
cin>>m1[i];
cout<<"\n ENTER SUBJECT 2 MARKS                                            : ";
cin>>m2[i];
cout<<"\n ENTER SUBJECT 3 MARKS                                            : ";
cin>>m3[i];
cout<<"\n ENTER SUBJECT 4 MARKS                                            : ";
cin>>m4[i];
cout<<"\n ENTER SUBJECT 5 MARKS                                            : ";
cin>>m5[i];
cout<<"\n ENTER SUBJECT 6 MARKS                                            : ";
cin>>m6[i];
J[0][i]=m1[i];
J[1][i]=m2[i];
J[2][i]=m3[i];
J[3][i]=m4[i];
J[4][i]=m5[i];
J[5][i]=m6[i];
TEMP=J[0][i];
for(I=0;I<6;I++)
{if(J[I][i]<=TEMP) {TEMP=J[I][i];temp=I;}}
t[i]=m1[i]+m2[i]+m3[i]+m4[i]+m5[i]+m6[i]-TEMP;
p[i]=t[i]/5;
L=0;
for(I=0;I<6;I++)
{if(I != temp) {K[L][i]=J[I][i];L++;}}
getch();
clrscr();
}
for(Z=0;Z<n;Z++)
{for(i=0;i<(n-1);i++)
{for(int j=(i+1);j<n;j++)
{if(t[i]<t[j])
{t1=t[i];
t[i]=t[j];
t[j]=t1;
t2=m1[i];
m1[i]=m1[j];
m1[j]=t2;
t3=m2[i];
m2[i]=m2[j];
m2[j]=t3;
t4=m3[i];
m3[i]=m3[j];
m3[j]=t4;
t5=m4[i];
m4[i]=m4[j];
m4[j]=t5;
t6=m5[i];
m5[i]=m5[j];
m5[j]=t6;
t7=p[i];
p[i]=p[j];
p[j]=t7;
t8=rno[i];
rno[i]=rno[j];
rno[j]=t8;
strcpy(t9[i],nam[i]);
strcpy(nam[i],nam[j]);
strcpy(nam[j],t9[i]);
t10=m6[i];
m6[i]=m6[j];
m6[j]=t10;}}}}
m1ch=m1[0];
m2ch=m2[0];
m3ch=m3[0];
m4ch=m4[0];
m5ch=m5[0];
m6ch=m6[0];
m1cl=m1[0];
m2cl=m2[0];
m3cl=m3[0];
m4cl=m4[0];
m5cl=m5[0];
m6cl=m6[0];
for(i=0;i<n;i++)
{if(m1[i]>m1ch)
m1ch=m1[i];
if(m2[i]>m2ch)
m2ch=m2[i];
if(m3[i]>m3ch)
m3ch=m3[i];
if(m4[i]>m4ch)
m4ch=m4[i];
if(m5[i]>m5ch)
m5ch=m5[i];
if(m6[i]>m6ch)
m6ch=m6[i];
if(m1[i]<m1cl)
m1cl=m1[i];
if(m2[i]<m2cl)
m2cl=m2[i];
if(m3[i]<m3cl)
m3cl=m3[i];
if(m4[i]<m4cl)
m4cl=m4[i];
if(m5[i]<m5cl)
m5cl=m5[i];
if(m6[i]<m6cl)
m6cl=m6[i];}
for(i=0;i<n;i++)
{s1+=m1[i];
s2+=m2[i];
s3+=m3[i];
s4+=m4[i];
s5+=m5[i];
s6+=m6[i];}
a1=s1/n;
a2=s2/n;
a3=s3/n;
a4=s4/n;
a5=s5/n;
a6=s6/n;
clrscr();
T=m1ch+m2ch+m3ch+m4ch+m5ch;
TT=a1+a2+a3+a4+a5;
for(i=0;i<n;i++)
{clrscr();
ofile<<"\n\n"<<rno[i];
cout<<"\n     ST.JOHN'S ENGLISH SCHOOL & JUNIOR COLLEGE BESANT NAGAR CHENNAI";ofile<<"\n     ST.JOHN'S ENGLISH SCHOOL & JUNIOR COLLEGE BESANT NAGAR CHENNAI";
cout<<"\n                #**************FILE NAME**************#                    ";ofile<<"\n                #**************FILE NAME**************#                    ";
cout<<"\n                #**************"<<y<<"**************#                    ";ofile<<"\n                #**************"<<y<<"**************#                    ";
cout<<"\n                        "<<u<<" EXAMINATON";ofile<<"\n                        "<<u<<" EXAMINATON";
cout<<"\n MS    : MARKS SCORED"<<"                    CAVG  : CLASS AVERAGE";ofile<<"\n MS    : MARKS SCORED"<<"                    CAVG  : CLASS AVERAGE";
cout<<"\n CH    : CLASS HIGHEST"<<"                   SUB 2 : "<<sub2;ofile<<"\n CH    : CLASS HIGHEST"<<"                   SUB 2 : "<<sub2;
cout<<"\n TM    : TOTAL MARKS"<<"                     SUB 3 : "<<sub3;ofile<<"\n TM    : TOTAL MARKS"<<"                     SUB 3 : "<<sub3;
cout<<"\n ML    : MARKS LOST"<<"                      SUB 4 : "<<sub4;ofile<<"\n ML    : MARKS LOST"<<"                      SUB 4 : "<<sub4;
cout<<"\n MLWCH : MARKS LOST WITH CLASS HIGHEST"<<"   SUB 5 : "<<sub5;ofile<<"\n MLWCH : MARKS LOST WITH CLASS HIGHEST"<<"   SUB 5 : "<<sub5;
cout<<"\n CL    : CLASS LOWEST"<<"                    SUB 6 : "<<sub6;ofile<<"\n CL    : CLASS LOWEST"<<"                    SUB 6 : "<<sub6;
cout<<"\n #     : EXCLUDED SUBJECT";ofile<<"\n #     : EXCLUDED SUBJECT";
getch();
 cout<<"\n\n               #****#   REPORT CARD   #****#     ";ofile<<"\n               #****#   REPORT CARD   #****#     ";
 cout<<"\n\n  NAME OF STUDENT       : "<<nam[i];ofile<<"\n  NAME OF STUDENT       : "<<nam[i];
 cout<<"\n  CLASS                 : "<<c;ofile<<"\n  CLASS                 : "<<c;
 cout<<"\n  SECTION               : "<<se;ofile<<"\n  SECTION               : "<<se;
 cout<<"\n  ROLL NUMER            : "<<rno[i];ofile<<"\n  ROLL NUMER            : "<<rno[i];
 cout<<"\n                          MS"<<"\tCH"<<"\tTM"<<"\tML"<<"\tMLWCH"<<"\tCAVG"<<"\tCL";ofile<<"\n                          MS"<<"\tCH"<<"\tTM"<<"\tML"<<"\tMLWCH"<<"\tCAVG"<<"\tCL";
 cout<<"\n  ENGLISH   MARKS       : "<<m1[i]<<"\t"<<m1ch<<"\t"<<"100"<<"\t"<<100-m1[i]<<"\t"<<m1ch-m1[i]<<"\t"<<a1<<"\t"<<m1cl;if(m1[i]==TEMP){cout<<" # ";}ofile<<"\n  ENGLISH   MARKS       : "<<m1[i]<<"\t"<<m1ch<<"\t"<<"100"<<"\t"<<100-m1[i]<<"\t"<<m1ch-m1[i]<<"\t"<<a1<<"\t"<<m1cl;if(m1[i]==TEMP){ofile<<" # ";}
 cout<<"\n  SUBJECT 2 MARKS       : "<<m2[i]<<"\t"<<m2ch<<"\t"<<"100"<<"\t"<<100-m2[i]<<"\t"<<m2ch-m2[i]<<"\t"<<a2<<"\t"<<m2cl;if(m2[i]==TEMP){cout<<" # ";}ofile<<"\n  SUBJECT 2 MARKS       : "<<m2[i]<<"\t"<<m2ch<<"\t"<<"100"<<"\t"<<100-m2[i]<<"\t"<<m2ch-m2[i]<<"\t"<<a2<<"\t"<<m2cl;if(m2[i]==TEMP){ofile<<" # ";}
 cout<<"\n  SUBJECT 3 MARKS       : "<<m3[i]<<"\t"<<m3ch<<"\t"<<"100"<<"\t"<<100-m3[i]<<"\t"<<m3ch-m3[i]<<"\t"<<a3<<"\t"<<m3cl;if(m3[i]==TEMP){cout<<" # ";}ofile<<"\n  SUBJECT 3 MARKS       : "<<m3[i]<<"\t"<<m3ch<<"\t"<<"100"<<"\t"<<100-m3[i]<<"\t"<<m3ch-m3[i]<<"\t"<<a3<<"\t"<<m3cl;if(m3[i]==TEMP){ofile<<" # ";}
 cout<<"\n  SUBJECT 4 MARKS       : "<<m4[i]<<"\t"<<m4ch<<"\t"<<"100"<<"\t"<<100-m4[i]<<"\t"<<m4ch-m4[i]<<"\t"<<a4<<"\t"<<m4cl;if(m4[i]==TEMP){cout<<" # ";}ofile<<"\n  SUBJECT 4 MARKS       : "<<m4[i]<<"\t"<<m4ch<<"\t"<<"100"<<"\t"<<100-m4[i]<<"\t"<<m4ch-m4[i]<<"\t"<<a4<<"\t"<<m4cl;if(m4[i]==TEMP){ofile<<" # ";}
 cout<<"\n  SUBJECT 5 MARKS       : "<<m5[i]<<"\t"<<m5ch<<"\t"<<"100"<<"\t"<<100-m5[i]<<"\t"<<m5ch-m5[i]<<"\t"<<a5<<"\t"<<m5cl;if(m5[i]==TEMP){cout<<" # ";}ofile<<"\n  SUBJECT 5 MARKS       : "<<m5[i]<<"\t"<<m5ch<<"\t"<<"100"<<"\t"<<100-m5[i]<<"\t"<<m5ch-m5[i]<<"\t"<<a5<<"\t"<<m5cl;if(m5[i]==TEMP){ofile<<" # ";}
 cout<<"\n  SUBJECT 6 MARKS       : "<<m6[i]<<"\t"<<m6ch<<"\t"<<"100"<<"\t"<<100-m6[i]<<"\t"<<m6ch-m6[i]<<"\t"<<a6<<"\t"<<m6cl;if(m6[i]==TEMP){cout<<" # ";}ofile<<"\n  SUBJECT 6 MARKS       : "<<m6[i]<<"\t"<<m6ch<<"\t"<<"100"<<"\t"<<100-m6[i]<<"\t"<<m6ch-m6[i]<<"\t"<<a6<<"\t"<<m6cl;if(m6[i]==TEMP){ofile<<" # ";}
 cout<<"\n  TOTAL                 : "<<t[i]<<"\t"<<"-  "<<"\t"<<"500"<<"\t"<<"-  "<<"\t"<<"- "<<"\t"<<"- ";ofile<<"\n  TOTAL                 : "<<t[i]<<"\t"<<"-  "<<"\t"<<"500"<<"\t"<<500-t[i]<<"\t"<<"- "<<"\t"<<"- ";
 cout<<"\n  PERCENTAGE            : "<<p[i]<<"%"<<"\t"<<"- "<<"%"<<"\t"<<"100%"<<"\t"<<"- "<<"%"<<"\t"<<"- "<<"%"<<"\t"<<"- "<<"%";ofile<<"\n  PERCENTAGE            : "<<p[i]<<"%"<<"\t"<<"- "<<"%"<<"\t"<<"100%"<<"\t"<<100-p[i]<<"%"<<"\t"<<"- "<<"%"<<"\t"<<"- "<<"%";
 if( (K[0][i]<33) || (K[1][i]<33) || (K[2][i]<33) || (K[3][i]<33) || (K[4][i] <33) )
{cout<<"\n  RANK                  : NO RANK";ofile<<"\n  RANK                  : NO RANK";}
 else if(t[i]==t[i+1])
{cout<<"\n  RANK                  : "<<k;ofile<<"\n  RANK                  : "<<k;}
 else
{cout<<"\n  RANK                  : "<<k;ofile<<"\n  RANK                  : "<<k;
 k++;}
if((p[i]>=88)&&(p[i]<=100))
{cout<<"\n  GRADE                 : A ***** EXCELLENT";ofile<<"\n  GRADE                 : A ***** EXCELLENT";}
else if((p[i]>=78)&&(p[i]<88))
{cout<<"\n  GRADE                 : B ****  VERY GOOD";ofile<<"\n  GRADE                 : B ****  VERY GOOD";}
else if((p[i]>=68)&&(p[i]<78))
{cout<<"\n  GRADE                 : C ***   GOOD";ofile<<"\n  GRADE                 : C ***   GOOD";}
else if((p[i]>=48)&&(p[i]<68))
{cout<<"\n  GRADE                 : D **    OK";ofile<<"\n  GRADE                 : D **    OK";}
else if((p[i]>=33)&&(p[i]<48))
{cout<<"\n  GRADE                 : E *     FAIR";ofile<<"\n  GRADE                 : E *     FAIR";}
else
{cout<<"\n  GRADE                 : F       POOR";ofile<<"\n  GRADE                 : F       POOR";}
cout<<"\n-------------------------------------------------------------------------------";ofile<<"\n\n-------------------------------------------------------------------------------";
getch(); }
cout<<"\n TO ADD A NEW CLASS OR TO EDIT THE PRESENT CLASS PRESS ZERO;TO EXIT PRESS 1 : ";
cin>>z;}while(z==0);}
getch();}
};
void main()
{int jona;
repcar r;
clrscr();
textcolor(GREEN);
textbackground(RED);
rectangle_box(1, 1, 77, 24);
gotoxy(13,11);
cout<<"            WELCOME TO REPORT CARD PRO v 1.0";
gotoxy(13,13);
cout<<" BY JONA FRANK.S & CELESTINE PREETHAM (YEAR 2008-2009)";
gotoxy(13,15);
timing();
getch();
clrscr();
rectangle_box(1, 1, 77, 24);
gotoxy(15,5);
cout<<"                !!!!!! NOTE !!!!!!";
gotoxy(15,12);
cout<<"   MAKE SURE YOU TURN ON CAPSLOCK BEFORE STARTING";
getch();
char password[5];int TRY=0;do{clrscr();
rectangle_box(1, 1, 77, 24);
gotoxy(29,5);cout<<"    ******$$******";
gotoxy(29,20);cout<<"    ******$$******";
gotoxy(26,13);
cout<<"ENTER THE PASSWORD : ";
gets(password);
if(strcmp("STJOHNS",password)==0){
do{clrscr();textbackground(RED);
rectangle_box(1, 1, 77, 24);
gotoxy(2,3);
cout<<"                         *******    MENU    ******* \n";
gotoxy(14,23);
timing();
gotoxy(20,9);
cout<<"NEW REPORT CARD // EDIT REPORT CARD : 1 ";
gotoxy(20,11);
cout<<"SEARCH // FIND                      : 2 ";
gotoxy(20,13);
cout<<"INSTRUCTIONS // HELP                : 3 ";
gotoxy(20,15);
cout<<"ABOUT // PROGRAM DETAILS            : 4 ";
gotoxy(20,17);
cout<<"EXIT                                : 5 ";
gotoxy(20,19);
cout<<"YOUR CHOICE                         : ";
cin>>jona;
if(jona==1)
r.report();
else if(jona==2){clrscr();search();}
else if(jona==3){clrscr();textbackground(RED);
cout<<" \nMANUAL :";
cout<<" \n1.JUST ENTER THE DATA REQUIRED (CLASS,SECTION,MARKS etc).";
cout<<" \n2.ENTER THE DATA PROPERLY ELSE TO EDIT YOU WILL HAVE TO ENTER THE FULL DATA       AGAIN FROM THE BEGINNING,TO EDIT TYPE THE SAVED FILE NAME IN THE REQUIRED       FIELD.";
cout<<" \n3.THE EXAM CODE IS THE FIRST LETTERS OF THE EXAM NAME eg:FOR "<<"First Terminal       EXAMINATION"<<" - CODE IS : FT ; FOR "<<"Annual Promotion EXAMINATION"<<" - CODE IS : AP";
cout<<" \n4.EXAMPLE FOR FILE NAME: XIAFT.DOC , FOR ELEVENTH STANDARD; 'A' SECTION;FIRST     TERMINAL EXAMINATION.";
cout<<" \n5.TO EDIT A PATICULAR CLASS ; TYPE THE SAME FILE NAME AS YOU TYPED EARLIER.";
cout<<" \n6.CALCULATION OF BEST OF 6 SUBJECTS FOR CLASS XI & XII WILL BE DONE               AUTOMATICALLY WHEN ENTERED;MARKS FOR THE 6th SUBJECT WILL ALSO BE DISPLAYED.";
cout<<" \n7.THE REPORT CARD CAN BE PRINTED FROM THE WORD FILE SAVED BY THE PROGRAM IN THE   C++ FOLDER.";
cout<<" \n8.TO SEARCH FOR THE REPORT JUST TYPE THE FILE NAME (AS SAVED EARLIER) AND THE     ROLL NUMBER OF THE STUDENT.";
cout<<" \n8.IN GENERAL";
cout<<" \n  SUBJECT 2:MATHS";
cout<<" \n  SUBJECT 3:COMPUTER SCIENCE/SCIENCE/BUSINESS STUDIES";
cout<<" \n  SUBJECT 4:PHYSICS/SOCIAL STUDIES/ACCOUNTS";
cout<<" \n  SUBJECT 5:CHEMISTRY/LANGUAGE 2";
cout<<" \n  SUBJECT 6:LANGUAGE 3/PHYSICAL EDUCATION/HOME SCIENCE/E.D/I.P";
cout<<" \n9.IF 6TH SUBJECT IS NOT TAKEN TYPE ZERO IN ITS PLACE(MARKS) ";getch();}
else if(jona==4){clrscr();textbackground(RED);
cout<<" \nNAME                   :REPCARV1 ";
cout<<" \nCREATOR                :S.JONA FRANK , CELESTINE PREETHAM ";
cout<<" \nVERSION                :1.0";
cout<<" \nYEAR                   :2008-2009";
cout<<" \nORGANISATION           :ST.JOHN'S ENGLISH SCHOOL & JUNIOR COLLEGE BESANT NAGAR,                         CHENNAI";
cout<<" \nDETAILS                :THIS IS A C++ PROGRAM FOR SIMPLIFYING THE JOB OF WRITING                        A REPORT CARD.";
gotoxy(29,15);cout<<"  ******$$******";
getch();}
else exit(1);
}while(jona!=5);}
else
{clrscr();
rectangle_box(1, 1, 77, 24);
gotoxy(15,12);TRY++;
cout<<"WRONG PASSWORD TRY AGAIN , NUMBER OF TRIES LEFT : "<<(4-TRY);getch();}}while(TRY != 4);
getch();}


