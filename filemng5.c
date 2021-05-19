#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define P printf
#define S scanf
struct bank
{
    int bookid;
    char name[25];
    float rate;
};
void main()
{
    struct bank b1;
    FILE *fp;
    fp=fopen("f5.dat","wb");
    P("enter bookid, book name and rate.");
    S("%d,&b1.bookid");
    fflush(stdin);
    gets(b1.name);
    S("%f",&b1.rate);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);
}
