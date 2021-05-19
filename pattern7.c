#include<stdio.h>
#define P printf
#define S scanf
main()
{
int x,y,i,j;
P("enter a no: ");
S("%d",&x);
for(i=x;i>=1;i--)
{
    for(j=1;j<=i;j++)
    {
        printf(" %d",i);
    }
    P("\n");
}

}
