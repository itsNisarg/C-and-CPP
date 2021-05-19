#include<stdio.h>
#define P printf
#define S scanf
int main()
{
int i,j,k,x,l=1;
P("Enter : ");
S("%d",&x);
for(i=1;i<=x;i++)
{
         for(k=x-i;k>=1;k--)
        {
            P(" ");
        }
        if(i%2==1)
        {

        for(j=1;j<=i;j++,l++)
        {
        P(" %d",l);

        }
        }
        else
        {

        for(j=1;j<=i;j++)
        {
        P(" %c",j+64);
        }
    }
P("\n");
}
}
