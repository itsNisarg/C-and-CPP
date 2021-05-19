#in   clude<stdio.h>
#include<conio.h>
void fact(int);    /*declaration or prototype*/
#define P printf
#define S scanf
int main()
{
int x,ans;
P("Enter a no:");
S("%d",&x);
fact(x);
return 0;
}
void fact(int a)     //definition
{
    int i;
    P("the factors of the number are: ");
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
            P("\t%d",i);
    }
}
