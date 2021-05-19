#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
struct book             //user defined or custom or non-primitive data type
{
    int bookid;         //member variable
    float rate;
    char name[20];
};                  //semicolon is needed.
int main()
{
    //struct book b1={117,324.26,"wings of fire"};
    struct book b1;                     //structure variable
    P("\n enter the bookid,name and rate.:");
    fflush(stdin);
    S("&d",&b1.bookid);
    fflush(stdin);
    gets(b1.name);
    fflush(stdin);
    S("&f",&b1.rate);
    fflush(stdin);
    P("\n bookid=%d \t book name=%s \t rate=%f",b1.bookid,b1.name,b1.rate);
    return 0;
}
