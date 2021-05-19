#include<stdio.h>
#define P printf
#define S scanf
main()
{
int i,j,k,n;
P("ENTER : ");
S("%d",&n);
for(i=1;i<=n;i++)
{
if(i==1||i==n)
{
for(j=1;j<=n;j++)
{
printf("*");
}
}
else
{
printf("*");
for(k=1;k<=n-2;k++)
{
P(" ");
}
P("*");
}
P("\n");
}
}
