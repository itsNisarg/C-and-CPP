#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
int sum(int);
int main()
{
int n,s;
P("\nEnter a number: ");
S("%d",&n);
s=sum(n);
P("\nthe sum of %d numbers is: %d",n,s);
}
int sum(int a)
{
if(a==1)
return 1;
a=a+sum(a-1);
return a;
}
