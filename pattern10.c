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
for(i=x;i>=1;i--)
{
for(j=i;j<=x;j++)
{
P("%d",j);
}
P("\n");
}
}
