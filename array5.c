#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
int main()
{
int i[10],j=0,l=0,k;
float avg;
P("enter 10 numbers: \n");
for(k=0;k<10;k++)
{
P("no %d : ",k+1);
S("%d",&i[k]);
if(i[k]>0)
    j++;
if(i[k]<0)
    l++;
}
P("\nPOSITIVE=%d",j);
P("\nNEGATIVE=%d",l);
P("\nZEROS= %d",10-l-j);
}
