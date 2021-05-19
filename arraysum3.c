#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
int main()
{
int i[3],j[3],s[3],k;
P("enter 3 numbers: \n");
for(k=0;k<3;k++)
{
P("no %d : ",k+1);
S("%d",&i[k]);
}
P("enter other 3 nos: \n");
for(k=0;k<3;k++)
{
P("no %d : ",k+1);
S("%d",&j[k]);
}
for(k=0;k<3;k++)
{
s[k]=i[k]+j[k];
P("\n %d + %d = %d",i[k],j[k],s[k]);
}


}
