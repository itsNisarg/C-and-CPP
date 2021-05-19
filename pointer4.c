#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void f1(int,int);
int main()
{//call by value
    int a,b;
    P("a= ");
    S("%d",&a);
    P("b= ");
    S("%d",&b);
    f1(a,b);
    P("\na=%d,\tb=%d",a,b);
return 0;
}
void f1(int x,int y)
{
    x=4;
    P("\n x=%d",x);
}
