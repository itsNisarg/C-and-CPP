#include<stdio.h>
#define P printf
#define S scanf
void main()
{
float cm,m,km,in,ft;
P("enter the distance in kilometers: ");
S("%f",&km);
m=km*1000;
cm=m*100;
in=cm/2.54;
ft=in/12;
P("\t the distance in centimeters is: %f \n",cm);
P("\t the distance in meters is: %f \n",m);
P("\t the distance in inches is: %f \n",in);
P("\t the distance in feet is: %f \n",ft);
}
