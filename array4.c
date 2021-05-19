#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
int main()
{
int i[10],j=0,k;
float avg;
P("enter 10 numbers: \n");
for(k=0;k<10;k++)
{
P("no %d : ",k+1);
S("%d",&i[k]);
j=j+i[k];
}
P("\nsum=%d",j);
avg=(float)j/10;
P("\naverage=  %0.2f",avg);
}
