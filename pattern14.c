#include<stdio.h>
#define P printf
#define S scanf
#include<conio.h>
#include<math.h>
void main()
{
int i,j,x;
//char c='A'-1;
P("Enter the number you want: ");
S("%d",&x);
for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
{
P(" %c",64+j);
}
P("\n");
}
}
