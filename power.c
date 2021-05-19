# include<stdio.h>
#define P printf
#define S scanf
main()
{
int x,y,i,p=1;
P("ENTER NO: ");
S("%d",&x);
P("ENTER INDEX: ");
S("%d",&y);
for(i=1;i<=y;i++)
{
p=p*x;
}
P("RESULT : %d",p);
}

