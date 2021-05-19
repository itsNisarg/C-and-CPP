#include<stdio.h>
#define P printf
#define S scanf
void main()
{
int i,j,x;
P("Enter the number you want: ");
S("%d",&x);
for(i=1;i<=x;i++)
{
for(j=i;j<=x;j++)
{
P("%d",j);
}
P("\n");
}
}
