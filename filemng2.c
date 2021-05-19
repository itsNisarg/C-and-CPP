#include<stdio.h>
#define P printf
#define S scanf
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int main()
{
    char ch;
    FILE *fp;
    fp=fopen("juju.txt","r");
    if(fp==NULL)
    {
        P("file not found");
        exit(0);
    }
    while(!feof(fp))
    {
        ch=fgetc(fp);
        P("%c",ch);
    }
    fclose(fp);
    return 0;
}
