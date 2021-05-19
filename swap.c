#include<stdio.h>
#define P printf
#define S scanf
void main()
{
int a,b;
P("\n Enter the first number_a: ");
S("%d",&a);
P("\n Enter the second number_b: ");
S("%d",&b);
a=a+b;
b=a-b;
a=a-b;
P("\n\t the value of a is %d",a);
P("\n\t the value of b is %d",b);
}
