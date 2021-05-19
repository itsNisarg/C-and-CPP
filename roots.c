#include<stdio.h>
#include<conio.h>
#include<math.h>
#define P printf
#define S scanf
main()
{
int a=0,b=0,c=0;
float D=0,alpha=0,beta=0;
P("ENTER a,b and c parameters of your quadratic equation separated by a comma.\n");
P("a= ");
S("%d",&a);
P("b= ");
S("%d",&b);
P("c= ");
S("%d",&c);
D=(b*b)-4*a*c;
P("Discriminant=%f\n",D);
if(D==0)
{
    alpha=beta=(-b)/(2*a);
P("\n\nTHE TWO ROOTS ARE EQUAL.\n");
P("\talpha=beta= %f",alpha);
}
else if(D>0)
{
    alpha=((-b)+sqrt(D))/(2*a);
    beta=((-b)-sqrt(D))/(2*a);
    P("\n\nTHE TWO ROOTS ARE : alpha= %f and beta= %f .\n",alpha,beta);
}
else
{
P("\n\nREAL ROOTS DON'T EXIST.\n");
}
}
