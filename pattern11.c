#include<stdio.h>
#define P printf
#define S scanf
#include<conio.h>
#include<math.h>
void main()
{
int i,j,x;
P("Enter the number you want: ");
S("%d",&x);
for(i=1;i<=x;i++)
{
for(j=1;j<=i;j++)
{
P(" %d",j*j);
}
P("\n");
}
}
