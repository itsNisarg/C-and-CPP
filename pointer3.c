#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
int main()
{
    int a,b,c,*p,*q,***z;
    p=&a;
    q=&b;
    P("\nAddress of p=%d and address of p+1=%d",p,p+1);
    P("\nAddress of p=%d and address of p+3=%d",p,p+3);
    P("\nAddress of p=%d and address of p-2=%d",p,p-2);
    P("\nAddress of p=%d and q=%d and address of p-q=%d",p,q,p-q);
return 0;
}
