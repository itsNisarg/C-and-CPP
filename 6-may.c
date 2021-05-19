 /* max */
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define P printf
#define S scanf
void main()
{
int x,y,z;
P("enter value x: ");
S("%d",&x);
P("enter value y: ");
S("%d",&y);
P("enter value z: ");
S("%d",&z);
P("max is %d",(x>y?(x>z?x:z):(y>z?y:z)));
}
