/* TO CHECK WHETHER A YEAR IS A LEAP YEAR OR NOT */
#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
int main()
{
int x;
P("\n Enter the year : ");
S("%d",&x);
if(x%4==0)
{
P("\n\t THE YEAR IS A LEAP YEAR.");
}
else
{
P("\n \t THE YEAR IS NOT A LEAP YEAR.");
}


}
