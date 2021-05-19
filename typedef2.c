#include<stdio.h>
#define P printf
#define S scanf
typedef int *acc;
int main()
{
    int x=3;
    P("\n x=%d",x);
    acc p=&x;
    *p=11;
    P("\n x=%d",x);
}
