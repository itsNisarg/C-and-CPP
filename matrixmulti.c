#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
int main()
{
int i,j,k,l=0;
int a[3][3],b[3][3],c[3][3];
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
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        for(k=0;k<3;k++)
        {
            l=l+a[j][k];
        }
        c[i][j]=l;

    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
     P("\t%d",c[i][j]);
    }
    P("\n");
}
}
