#include<stdio.h>
#define P printf
#define S scanf
int main()
{
int x,i,j,k;
P("Enter a number: ");
S("%d",&x);
for(i=1;i<=x;i++)
{
for(k=x;k>i;k--)
{
P(" ");
}
for(j=i;j>=1;j--)
{
P(" %d",i);
}
P("\n");
}
return 0;
}
