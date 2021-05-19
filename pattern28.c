#include<stdio.h>
#define P printf
#define S scanf
int main()
{
int x,i,j,k;
P("Enter a number: ");
S("%d",&x);
for(i=x;i>=1;i--)
{
for(k=1;k<i;k++)
{
P(" ");
}
for(j=i;j<=x;j++)
{
P("%d",i);
}
P("\n");
}
return 0;
}
