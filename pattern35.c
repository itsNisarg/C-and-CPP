#include<stdio.h>
#define P printf
#define S scanf
int main()
{
int i,j,k=1,l,x;
P("ENTER ROW:");
S("%d",&x);
for(i=1;i<=x;i++)
{
for(j=1;j<=i;j++,k++)
{
P(" %d",k);
}
P("\n");
}
}
