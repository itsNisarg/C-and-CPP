#include<stdio.h>
#define P printf
#define S scanf
int main()
{
int i,j,k,l,x;
P("ENTER ROW:");
S("%d",&x);
for(i=0;i<=x;i++)
{
for(k=1;k<=x-i;k++)
{
P("  ");

}
for(j=i;j>=0;j--)
{
P(" %d",j);

}
for(l=1;l<=i;l++)
{

P(" %d",l);
}
P("\n");
}





}
