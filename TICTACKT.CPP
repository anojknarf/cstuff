#include<iostream.h>
#include<iomanip.h>
void main()
{char base[9],player[15];
int i,j,move_count,player_move,won,centre_me,ret;
int check_horizontal(char[],char);
int check_vertical(char[],char);
int check_diagonal(char[],char,int);
int validate_diagonal(char[]);
for(i=0;i<9;i++)
base[i]='.';
move_count=0;
centre_me=1;
won=1;
cout<<"TIC TACK TOE GAME\n\n";
cout<<"PLAYER NAME:";
cin>>player;
cout<<"\n\n";
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
cout<<setw(3)<<base[i*3+j];
cout<<"\n" ;}
while(move_count<9 && won==1)
{cout<<"\n\n YOUR MOVE (1-9):";
cin>>player_move;
if(player_move<1||player_move>9||base[player_move-1] !='.')
{cout<<"\nINVALID MOVE :";
continue;}
base[player_move-1]='X';
move_count++;
switch(move_count){
case 1:
if(base[4]=='.'){base[4]='O';
centre_me=0;}
else
base[0]='O';
move_count++;
break;
default:if(check_horizontal(base,'0')==0|| check_vertical(base,'O')==0||check_diagonal(base,'O',centre_me)==0)
{won=0;
break;}
else{if(validate_diagonal(base)==2)
{won=2;
break;}
ret=check_horizontal(base,'X');
if(ret==2)
{won=2;
break;}
else if(ret!=0)
{ret=check_vertical(base,'X');
if(ret==2)
{won=2;
break;}
else if(ret!=0)
{ret=check_diagonal(base,'X',centre_me);
if(ret==2)
{won=2;
break;}
else if(ret!=0)
{if(base[0]=='.') base[0]='O';
else if(base[0]=='.') base[0]='O';
else if(base[2]=='.') base[2]='O';
else if(base[6]=='.') base[6]='O';
else if(base[8]=='.') base[8]='O';
else if(base[8-player_move]=='.') base[8-player_move]='O';
else{
for(i=0;i<9;i++)
if(base[i]=='.')
{base[i]='O';
break;}}}}}
move_count++;
break;}}
for(i=0;i<3;i++){
for(j=0;j<3;j++)
cout<<setw(3)<<base[i*3+j];
cout<<"\n";}}
if(won==0)
cout<<"\n\nI WON!";
else if(won==2)
cout<<"\n\n"<<player<<"WON!";
else
cout<<"\n\nThe game is drawn";
}
int check_horizontal(char a[],char b)
{int x,y,count,space;
for(x=0;x<3;x++)
{count=0;space=99;
for(y=0;y<3;y++)
{if(a[x*3+y]==b)
count++;
else if (a[x*3+y]=='.')
space=x*3+y;}
if(count==2 && space!=99)
{a[space]='O';
return 0;}
if(count==3) return 2;}
return 1;}
int check_vertical(char a[],char b)
{int x,y,count,space;
for(x=0;x<3;x++)
{count=0;space=99;
for(y=0;y<3;y++)
{if(a[x*3+y]==b)
count++;
else if (a[x*3+y]=='.')
space=x*3+y;}
if(count==2 && space!=99)
{a[space]='O';
return 0;}
if(count==3) return 2;}
return 1;}
int check_diagonal(char a[],char b,int c)
{if((c==0 && b=='X')||(c==1 && b=='O'))
return 1;
else if(c==0)
{if(a[0]=='.' && a[8]=='O')
a[0]='O';
else if(a[2]=='.' && a[6]=='O')
a[2]='O';
else if(a[6]=='.' && a[2]=='O')
a[6]='O';
else if(a[8]=='.' && a[0]=='O')
a[8]='O';
else return 1;}
else{
if(a[0]=='.' && a[8]=='X')
a[0]='O';
else if(a[2]=='.' && a[6]=='X')
a[2]='O';
else if(a[6]=='.' && a[2]=='X')
a[2]='O';
else if(a[8]=='.' && a[0]=='X')
a[8]='O';
else return 1;}
return 0;
}
int validate_diagonal(char a[])
{if((a[2]=='X' && a[6]=='X')||(a[0]=='.' && a[8]=='X'))
return 2;
else return 0;}