#include<stdio.h>
#include<conio.h>
int fact(int);    /*declaration or prototype*/
#define P printf
#define S scanf
int main()
{
int x,ans;
P("Enter a no:");
S("%d",&x);
ans=fact(x);
P("Factorial=%d",ans);
}
int fact(int a) //definition
{
    int i,p=1;
    for(i=1;i<=a;i++)
        p=p*i;
    return p;
}
