#include<stdio.h>
#include<conio.h>
#include<math.h>
#define P printf
#define S scanf
main()
{
int x,y,ans=0;
S("%d",&x);
scanf("%d",&y);
if(x>y)
{
    for(y;y<=x;y++)
{
    if(y%2==1)
    {
        P("\n %d",y);
       ans=ans+y;
    }

}
}
else
{
   for(x;x<=y;x++)
{
  if(x%2==1)
    {
        P("\n %d",x);
     ans=ans+x;
    }
}
}

P("ans:%d",ans);
}
