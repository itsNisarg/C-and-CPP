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
for(j=x;j>=i;j--)
{
P(" %c",j+64);

}
P("\n");
}



}
