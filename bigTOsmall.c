#include<stdio.h>
#define P printf
#define S scanf
void main()
{
char x;
P("enter the capital letter : ");
S("%c",&x);
x=x+32;
P("the small letter is : %c",x);
}
