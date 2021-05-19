/* 7 : PROGRAM TO FIND PRIMES BETWEEN TWO NUMBERS */
//AUTHOR: Nisarg Suthar
//DATE OF CREATION: 12/12/2020
#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
int main()
{
    int b,p;
    long int power=1;
    P("\n------------------------- PRIMES BETWEEN TWO NUMBERS -------------------------\n");
    for(i=1;i<=5;i++)
    {
        for(k=5-i;k>=1;k--)
        {
            P("  ");
        }
        for(j=1;j<=i;j++)
        {
            P(" * ");
        }
        P("\n");
    }
    return 0;
}
