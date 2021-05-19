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
if(i[k]%2==0)
    j++;
else
    l++;
}
P("\nEVEN=%d",j);
P("\nODD=%d",l);
P("\nODD NUMBERS:");
for(k=0;k<10;k++)
{
    if(i[k]%2!=0)
    {
        P("%d, ",i[k]);
    }
}
P("\nEVEN NOS: ");
for(k=0;k<10;k++)
{
    if(i[k]%2==0)
    {
        P("%d, ",i[k]);
    }
}
}
