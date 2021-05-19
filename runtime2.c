#include<stdio.h>
#define P printf
#define S scanf
void *malloc(unsigned int);
int main()
{
    float *p;
    p=(float*)malloc(12);
}
