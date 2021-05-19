#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
int main()
{
int i,j=0,k,l;
char s1[20],ch;
printf("enter a string.--");
S("%s",s1);
P("which character ?");
ch=getche();
for(i=0;s1[i]!=0;i++)
{
    if(s1[i]==ch)
    {
        j++;
    }
}
P("the char %c is repeated %d times",ch,j);

}
