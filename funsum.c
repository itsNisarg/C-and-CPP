#include<stdio.h>
#include<conio.h>
int sum(int,int);    /*declaration or prototype of sum function*/
#define P printf
#define S scanf
int main()
{
int x,y,ans;
P("Enter value x: ");
S("%d",&x);
P("Enter value y: ");
S("%d",&y);
ans=sum(x,y);   /*calling of the sum function*/
P("Sum of the two values=%d",ans);
getch();
return 0;
}
int sum(int a,int b)    /*definition of called sum function. Here a ad b are formal arguments.*/
{
    int result;
    result=a+b;
    return result;
}
