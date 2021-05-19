#include<stdio.h>
#include<conio.h>
#include<math.h>
#define P printf
#define S scanf
void main()
{
int qty,rate;
char choice;
P("Press B for burger \n F for french fries \n P for pizza \n S for sandwitch");
P("enter the food item you want to eat: ");
S("%c",&choice);
switch(choice)
{
case 'b':
P("enter the qty you want:");
S("%d",&qty);
rate=200;
break;
case 'f':
P("enter the qty you want:");
S("%d",&qty);
rate=50;
break;
case 'p':
P("enter the qty you want:");
S("%d",&qty);
rate=500;
break;
case 's':
P("enter the qty you want:");
S("%d",&qty);
rate=150;
break;
}
P("the amount you have to pay is:%d",rate*qty);
}
