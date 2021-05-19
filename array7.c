#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
int main()
{
int i[10],j=0,l=0,k;
P("enter 10 numbers: \n");
for(k=0;k<10;k++)
{
P("no %d : ",k+1);
S("%d",&i[k]);
}
for(j=0;j<10-1;j++)
{
    for(l=j+1;l<10;l++)
    {
        if(i[l]>i[j])
        {
            k=i[l];
            i[l]=i[j];
            i[j]=k;
        }
    }
}
for(j=0;j<10;j++)
{
    P("%d, ",i[j]);
}
}
