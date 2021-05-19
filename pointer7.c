#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void input(int *,int);
void display(int *,int);
int main()
{
    int a[10];
    input(&a,10);
    display(a,10);
    return 0;
}
void input(int *p,int size)
{
    int i;
    P("enter %d number",size);
    for(i=0;i<size;i++)
    {
        S("%d",p+i);
    }
}
void display(int* p,int size)
{
    int i;
    P("\n display %d numbers.",size);
    for(i=0;i<size;i++)
    {
        P("%d \n",*(p+i));
    }
}
