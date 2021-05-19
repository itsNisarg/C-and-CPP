#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
int square(int x)
{
    return (x*x);
}
int cube(int x)
{
    return(x*x*x);
}
int calculate(int (*p)(int),int n)
{
    return (p(n));
}
int main()
{
    int ch;
    int n,ans;
    P("\n press 1 for square.");
    P("\n press 2 for cube.");
    P("\n enter your choice.");
    S("%d",&ch);
    P("\n enter number");
    S("%d",&n);
    switch(ch)
    {
        case 1:
        ans=calculate(square,n);
        P("\n square is %d",ans);
        break;
        case 2:
        ans=calculate(cube,n);
        P("\n cube is %d",ans);
        break;
    }
return 0;
}
