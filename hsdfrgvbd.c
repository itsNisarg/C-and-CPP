#include<stdio.h>
#include<conio.h>
#include<math.h>
#define P printf
#define S scanf
void main()
{
int h,w,i,n=0;

for(i=1;i<=5;i++)
{
P("ENTER HEIGHT of STUDENT %d: ",i);
S("%d",&h);
P("ENTER WEIGHT of STUDENT %d: ",i);
S("%d",&w);
if(h>170&&w<50)
{
n=n+1;
}
}
P("NO OF STUDENTS = %d",n);
}
