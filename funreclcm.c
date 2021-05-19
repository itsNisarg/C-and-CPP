#include<stdio.h>
#include<conio.h>
int lcm(int,int);
#define P printf
#define S scanf
int main()
{
int x,y,ans;
P("\nenter two numbers n1,n2: ");
S("%d,%d",&x,&y);
ans=lcm(x,y);
P("\nthe lcm of the two numbers is : %d",ans);
return 0;
}
int lcm(int a,int b)
{
   static int comm=1;
    if(comm%a==0&&comm%b==0)
        return comm;
    comm++;
    lcm(a,b);
}
