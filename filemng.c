#include<stdio.h>
#define P printf
#define S scanf
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int main()
{
    int i;
    FILE *fp;
    char str[]="Nisarg Ghanshyam Suthar";
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {
        P("fle cannot be opened.");
        exit(1);
    }
    for(i=0;i<strlen(str);i++)
    {
        fputc(str[i],fp);
    }
    fclose(fp);
return 0;
}
