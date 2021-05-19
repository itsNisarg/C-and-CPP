#include<stdio.h>
#include<conio.h>
#include<stdlib.h> //if you don't declare memory allocation
#define P printf
#define S scanf
int main()
{
    int n,*arr,i;
    P("enter size");
    S("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    if(arr==NULL)
    {
        P("No  memory");
    }
    else
    {
        P("array element");
        for(i=0;i<n;i++)
        {
            P("\n %d",*(arr+i));
        }
    }
    free(arr);
}
