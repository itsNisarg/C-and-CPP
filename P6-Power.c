/* 4 : PROGRAM TO FIND PRIMES BETWEEN TWO NUMBERS */
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
    P("\n Enter the BASE  : ");S("%d",&b);
    P("\n Enter the POWER : ");S("%d",&p);                                     //INPUT OF FIRST NUMBER
    for(int i=1;i<=p;i++)
    {
        power=power*b;
    }
    P("\n EXPONENT= %ld",power);
    return 0;
}
