#include<stdio.h>
#define P printf
#define S scanf
int main()
{
int i,j,k=0,l;
P("enter a number: ");
S("%d",&l);
for(i=1;i<=l;i++)
{
if(i%2!=0)
{
    for(j=1;j<=i;j++,k++)
    {
        if(j%2==1)
            P(" 0");
        else
            P(" 1");
    }
}
else
{
    for(j=1;j<=i;j++,k++)
    {
        if(j%2==1)
            P(" 1");
        else
            P(" 0");
    }
}
P("\n");
}
}

