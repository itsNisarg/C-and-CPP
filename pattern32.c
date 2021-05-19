#include<stdio.h>
#define P printf
#define S scanf
int main()
{
int x,i,j,k;
P("Enter a number: ");
S("%d",&x);
  for(i=1;i<=x-1;i++)
{
for(k=x-i;k>=1;k--)
{
P(" ");
}
for(j=1;j<=i;j++)
{
P(" *");
}
P("\n");
}
for(i=x;i>=1;i--)
{
for(k=x;k>i;k--)
{
P(" ");
}
for(j=1;j<=i;j++)
{
P(" *");
}
P("\n");
}


return 0;
}

