/* BEST POINTER PROGRAMME */
#include<stdio.h>
#define P printf
#define S scanf
struct Book
{
    int bid;
    float rate;
    char name[20];
};
struct Book input();
int main()
{
    struct Book b1;
    b1=input();
    P("\n book id=%d \n book name=%s \n rate=%f",b1.bid,b1.name,b1.rate);
}
struct Book input()
{
    struct Book b;
    P("\n enter book id , book name and rate.");
    S("%d",&b.bid);
    fflush(stdin);
    gets(b.name);
    S("%f",&b.rate);
    return b;
};
