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
void display(struct Book);
int main()
{
    struct Book b1;
    b1=input();
    display(b1);
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
void display(struct Book g)
{
 P("\n book id=%d \n book name=%s \n rate=%f",g.bid,g.name,g.rate);
};
