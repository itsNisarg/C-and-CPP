#include<stdio.h>
#define P printf
#define S scanf
void main()
{
char x;
P("enter the small letter : ");
S("%c",&x);
x=x-32;
P("the capital letter is : %c",x);
}
