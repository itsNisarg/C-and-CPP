#include<stdio.h>
#define P printf
#define S scanf
main()
{
int x,y,i,j;
P("enter a number: ");
S("%d",&x);
for(i=1;i<=x;i++)
{
    for(y=x-i;y>=1;y--)
    {
        P(" ");
    }
    for(j=1;j<=i;j++)
    {
        P("%d",j);

    }
    P("\n");
}



}
