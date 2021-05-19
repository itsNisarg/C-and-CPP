#include<stdio.h>
#include<conio.h>
int gcd(int,int);
#define P printf
#define S scanf
int main()
{
int x,y,ans;
P("\nenter two numbers n1,n2: ");
S("%d,%d",&x,&y);
ans=gcd(x,y);
P("\nthe gcd of the two numbers is : %d",ans);
return 0;
}
int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
            return gcd(a-b,b);
        else
            return gcd(a,b-a);
    }
    return a;
}
