#include<stdio.h>
#define P printf
#define S scanf
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int main()
{
    char str[20];
    FILE *fp;
    fp=fopen("juju.txt","r");
    if(fp==NULL)
    {
        P("file not found");
        exit(1);
    }
    while(fgets(str,8,fp)!=NULL)
    {
        P("%s",str);
    }
    fclose(fp);
    return 0;
}
