#include<stdio.h>
#include<conio.h>
int p(int,int);
#define P printf
#define S scanf
int main()
{
int x,y,ans;
P("Enter number 1 : ");
S("%d",&x);
P("Enter number 1 : ");
S("%d",&y);
ans=p(x,y);
P("product=%d",ans);
}
int p(int a,int b)
{
int result=0;
result=a*b;
return result;
}
