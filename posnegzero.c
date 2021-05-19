/*POSITIVE NEGATIVE OR ZERO */
#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
int main()
{
int x;
P("ENTER A NUMBER: ");
S("%d",&x);
if(x>=0)
{
if(x==0)
{
P("\nYOU ENTERED ZERO.");
}
else
{
P("\n THE NUMBER IS POSITIVE.");
}
}
else
{
P("\nYOU ENTERED A NEGATIVE NUMBER.");
}
}


