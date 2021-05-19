#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void f1(int *,int *);
int main()
{//call by reference
    int a,b;
    P("a= ");
    S("%d",&a);
    P("b= ");
    S("%d",&b);
    f1(&a,&b);
    P("\na=%d,\tb=%d",a,b);
    return 0;
}
void f1(int *p,int *q)
{
    *p=7;
    *q=9;
}
