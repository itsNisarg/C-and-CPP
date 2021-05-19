#include<stdio.h>
#define P printf
#define S scanf
void main()
{
int p,t,r,si;
P("\n enter the principal amount:");
S("%d",&p);
P("\n enter the rate of interest:");
S("%d",&r);
P("\n enter the time period in years:");
S("%d",&t);
si=(p*r*t)/100;
P("\n the simple interest on your principal amount %d rupees for %d years at the rate of %d percent per annum is: %d rupees",p,t,r,si);
}
