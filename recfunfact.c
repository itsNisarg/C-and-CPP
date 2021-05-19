#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
int fact(int);
int main()
{
int n,s;
P("\nEnter a number: ");
S("%d",&n);
s=fact(n);
P("\nthe factorial of %d is: %d",n,s);
}
int fact(int a)
{
if(a==1)
return 1;
a=a*fact(a-1);
return a;
}
