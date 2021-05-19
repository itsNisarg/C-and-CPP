# include<stdio.h>
#define P printf
#define S scanf
main()
{
int x,y,i,j;
P("enter a number: ");
S("%d",&x);
for(i=5;i>=1;i--)
{
    for(y=i-1;y>=1;y--)
    {
        P(" ");
    }
for(j=i;j<=x;j++)
{
P("%d",i);

}
P("\n");
}



}
