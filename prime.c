#include<stdio.h>
#include<conio.h>
#include<math.h>
#define P printf
#define S scanf
main()
{
int n=0,x,i;
//P("enter a number: ");
//S("%d",&x);
for(int x=202003001;x<=202003050;x++)
{

for(i=2;i<x/2;i++)
{
if(x%i==0)
{
    P("\n%d %d",x,i);
n++;
break;
}

}

}
}

