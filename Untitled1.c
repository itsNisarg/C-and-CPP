#include<stdio.h >
#define P printf
#define S scanf
void main()
{
int x=0,y=0,ans=0;
P("\n enter a value :");
S("%d",&x);
P("\n enter a value :");
S("%d",&y);
ans=x;
x=y;
y=ans;
P("\n the first value was :%d",y);
P("\n the second value was :%d",x);
}
