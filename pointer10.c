#include<stdio.h>
#define P printf
#define S scanf
struct Book
{
    int bookid;
    float rate;
    char name[20];
};
struct Book input();
void display(struct Book);
int main()
{
    struct Book b1[5];
    int i;
    for(i=0;i<=5;i++)
    {
        b1[i]=input();
    }
    for(i=0;i<=5;i++)
    {
        display(b1[i]);
    }
    return 0;
}
struct Book input()
{
    struct Book b;
    P("\nenter book id, rate and name.");
    S("%d",&b.bookid);
    fflush(stdin);
    gets(b.name);
    S("%f",&b.rate);
    return b;
};
void display(struct Book g)
{
    P("\n bookid=%d\tbook name=%s\trate=%f",g.bookid,g.name,g.rate);
}
