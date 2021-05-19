# include<stdio.h>
#define P printf
#define S scanf
main()
{
int x,y,i,j,k;
P("enter a number: ");
S("%d",&x);
for(i=1;i<=x;i++)
{    P("*");
}

for(k=1;k<=x-2;k++)
{
    P("\n");
P("*");
for(y=1;y<=x-2;y++)
{
    P(" ");
}
P("*");
}
P("\n");
for(i=1;i<=x;i++)
{    P("*");
}
}
