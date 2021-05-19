#include<stdio.h>
#define P printf
#define S scanf
main()
{
int x,y,i,j;
P("enter a number: ");
S("%d",&x);
for(i=x;i>=1;i--)
{
    for(y=i;y<=x;y++)
    {
        P(" ");
    }
for(j=i;j>=1;j--)
{
P(" %d",j);

}
P("\n");
}



}
