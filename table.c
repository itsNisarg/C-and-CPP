#include<stdio.h>
#include<conio.h>
#include<math.h>
#define P printf
#define S scanf
void main()
{
int i,n;
P("ENTER THE TABLE YOU WANT: ");
S("%d",&n);
for(i=1;i<=n;i++)
{
    if(n%i==0)
    {
    P("\n%d",i);
    }

}
}
