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
    fp=fopen("huhu.txt","w");
    P("\nenter a string.");
    gets(str);
    fputs(str,fp);
    fclose(fp);
    return 0;
}
