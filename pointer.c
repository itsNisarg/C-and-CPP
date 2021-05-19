#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
int main()
{
    int y=3,x=5,z;
    int *p=&x;
    P("\nvalue of x=%d",x);
    P("\naddress of x=%u",&x);
    P("\nvalue of pointer=%d",p);
    p=&y;
    P("\nvalue of pointer=%u",p);
    p=&z;
    P("\n%u",p);
    return 0;
}
