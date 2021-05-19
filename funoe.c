#include<stdio.h>
#include<conio.h>
#define S scanf
#define P printf
int oe(int);
int main()
{
clrscr();
int x,i;
P("Please enter a number:");
S("%d",&x);
i=oe(x);
if(i==1)
{
P("number is odd");
}
else
{
P("number is even");
}
return 0;
}
int oe(int a)
{
if(a%2==0)
{
return 0;
}
else
{
return 1;
}
}
