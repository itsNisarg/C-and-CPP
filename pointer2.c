#define P printf
#define S scanf
#include<stdio.h>
#include<conio.h>
int main()
{
    int x=5,*p=&x,**q=&p,***r=&q;
    P("\tx=%d,\tadd x=%d,\tp=%d,\tq=%d,\tr=%d",x,&x,p,q,r);
    P("\n  %d  %d  %d  %d",*r,q,&p,x);
    P("\n  %d  %d  %d  %d",**q,&r,&x,p);
    P("\n  %d  %d  %d  %d",**r,*p,*&q,&q);
    P("\n  %d  %d  %d  %d",***r,***&q,*&r,*&x);
    return 0;
}
