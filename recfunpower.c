#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
int power(int,int);
int main()
{
int n,p,s;
P("\nEnter base number: ");
S("%d",&n);
P("\nEnter power number: ");
S("%d",&p);
s=power(n,p);
P("\nthe number %d to the power of %d is: %d",n,p,s);
}
int power(int b,int a)
{
if(a==1)
return b;
b=b*power(b,a-1);
return b;
}
