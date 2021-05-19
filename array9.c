#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
int main()
{
int a[3][3],b[3][3],c[3][3],i,j;
P("\n\tENTER MATRIX 1\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        P("\nenter no in row %d and column %d.:",i+1,j+1);
        S("%d",&a[i][j]);
    }
}
P("\n\tENTER MATRIX 2\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        P("\nenter no in row %d and column %d.:",i+1,j+1);
        S("%d",&b[i][j]);
        c[i][j]=a[i][j]+b[i][j];
    }
}
P("\n\tRESULT\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        P("\nsum of numbers in row %d and column %d of both marices is: %d",i+1,j+1,c[i][j]);
    }
    P("\n\n");
}

}
