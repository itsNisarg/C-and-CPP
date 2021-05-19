/* 4 : PROGRAM TO PLAY TIC TAC TOE */
//AUTHOR: Nisarg Suthar
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#define P printf
#define S scanf
void onstart()
{
clrscr();
gotoxy(35,12);
printf("NATURE GAMES");
delay(2000);
clrscr();
gotoxy(34,11);
    P("---------------");
gotoxy(34,12);
    P("| TIC-TAC-TOE |");
gotoxy(34,13);
    P("---------------");
delay(3000);
clrscr();
}
#pragma startup onstart

char tic[9]={'1','2','3','4','5','6','7','8','9'};
void instruct()
{
    P("\n\n Choose a cell numbered from 1 to 9 as shown below.");
    P("\n Enter the number of your choice and press ENTER.\n\n\n\n");
    P("\t\t\t 1 | 2 | 3 \n");
    P("\t\t\t---|---|---\n");
    P("\t\t\t 4 | 5 | 6 \n");
    P("\t\t\t---|---|---\n");
    P("\t\t\t 7 | 8 | 9 \n");
    delay(9000);
    clrscr();
    gotoxy(25,12);
    P("Player 1 puts X and Player 2 puts O.");
    delay(2500);
    clrscr();
    gotoxy(40,12);
    P("3");
    delay(1000);
    clrscr();
    gotoxy(40,12);
    P("2");
    delay(1000);
    clrscr();
     gotoxy(40,12);
    P("1");
    delay(1000);
    clrscr();
     gotoxy(38,12);
    P("START");
    delay(2000);
    clrscr();
}
int win()
{
    if(tic[0]==tic[1]&&tic[1]==tic[2])
	return 1;
    else if(tic[3]==tic[4]&&tic[4]==tic[5])
	return 1;
    else if(tic[6]==tic[7]&&tic[7]==tic[8])
	return 1;
    else if(tic[0]==tic[3]&&tic[3]==tic[6])
	return 1;
    else if(tic[1]==tic[4]&&tic[4]==tic[7])
	return 1;
    else if(tic[2]==tic[5]&&tic[5]==tic[8])
	return 1;
    else if(tic[0]==tic[4]&&tic[4]==tic[8])
	return 1;
    else if(tic[2]==tic[4]&&tic[4]==tic[6])
	return 1;
    else if(tic[0]!='1'&&tic[1]!='2'&&tic[2]!='3'&&tic[3]!='4'&&tic[4]!='5'&&tic[5]!='6'&&tic[6]!='7'&&tic[7]!='8'&&tic[8]!='9')
	return 0;
    else
	return -1;
}


void board()
{

    char c[9];
    for(int i=0;i<9;i++)
    {
	if(tic[i]=='X'||tic[i]=='O')
	    c[i]=tic[i];
	else
	    c[i]=' ';
    }
    P("\n");
    printf("\t\t\t %c | %c | %c \n", c[0], c[1], c[2]);
    printf("\t\t\t---|---|---\n");
    printf("\t\t\t %c | %c | %c \n", c[3], c[4], c[5]);
    printf("\t\t\t---|---|---\n");
    printf("\t\t\t %c | %c | %c \n", c[6], c[7], c[8]);
    P("\n");
}
int main()
{
    instruct();
    int /*player=1,*/i,choice;
    char mark;
    goto b;
   /* do
    {
	board();
	player=(player%2)?1:2;
	a:
	printf("\n Player %d enter your choice : ",player);
	scanf("%d",&choice);
	mark=(player==1)?'X':'O';
	if(choice==1&&tic[0]=='1')
	    tic[0]=mark;
	else if(choice==2&&tic[1]=='2')
	    tic[1]=mark;
	else if(choice==3&&tic[2]=='3')
	    tic[2]=mark;
	else if(choice==4&&tic[3]=='4')
	    tic[3]=mark;
	else if(choice==5&&tic[4]=='5')
	    tic[4]=mark;
	else if (choice==6&&tic[5]=='6')
	    tic[5]= mark;
	else if (choice==7&&tic[6]=='7')
	    tic[6]= mark;
	else if (choice==8&&tic[7]=='8')
	    tic[7]= mark;
	else if (choice==9&&tic[8]=='9')
	    tic[8]= mark;
	else
	{
	    printf("\nInvalid choice !!!.\n");
	    goto a;
	}
	i = win();
	player++;

    }while(i==-1);
    P("\n");
    board();
    if(i == 1)
    {
	printf("\n PLAYER %d WINS ! CONGRATULATIONS !!!\n", --player);
    }
    else
    {
	printf("\n GAME DRAW !!!\n");
    }
    */
    b:
    getch();
    return 0;
}