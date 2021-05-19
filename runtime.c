#include<stdio.h>
#include<conio.h>
#include<stdlib.h> //if you don't declare memory allocation
#define P printf
#define S scanf
int main()
{
    int *p,s,*ptr,i,sum=0;
    P("enter the size of the array: ");
    S("%d",&s);
    ptr=(int*)malloc(s*sizeof(int));
    p=ptr;
    P("memory allocation %u",ptr);
    if(ptr==NULL)
    {
        P("out of memory");
        exit(0);
    }
    P("\n enter %d details",s);
    for(i=1;i<=s;i++)
    {
        S("%d",ptr);
        sum=sum+*ptr;
        ptr++;
    }
    P("\n elements are:");
    for(i=1;i<=s;i++)
    {
        P("\n %d",*p);
        p++;
    }
    P("\n sum = %d",sum);
    free(ptr);
return 0;
}
