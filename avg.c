#include<stdio.h>
#define P printf
#define S scanf
main()
{
int x,y=0,i;

P("ENTER NO: ");
S("%d",&x);
for(i=1;i<x;i++)
{

if(x%i==0)
y=y+i;
}
if(y==x)
{
    P("A PERFECT NUMBER");
}
else
{
P("NOT A PERFECT NUMBER.");
}
}
