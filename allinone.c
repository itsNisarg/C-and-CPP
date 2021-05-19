/* ALL IN ONE PROGRAM */
#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int w,x,y,z;
int count=1;
max:
P("\n Enter value W : ");
S("%d",&w);
P("\n Enter value X : ");
S("%d",&x);
P("\n Enter value Y : ");
S("%d",&y);
P("\n Enter value Z : ");
S("%d",&z);
P("\n\t\t   MAXIMUM OF FOUR NUMBERS is : %d",(w>x?(w>y?(w>z?w:z):(y>z?y:z)):(x>y?(x>z?x:z):(y>z?y:z))));
P("\n \n");
count++;
if(count<=4)
    goto max;
}
