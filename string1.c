#include<stdio.h>
#include<conio.h>
#include<string.h>
#define P printf
#define S scanf
int main()
{
int i,j;
char s3[15],s1[15],s2[15];
char *x;
P("ENTER STRING 1; ");
gets(s1);
P("ENTER STRING 2; ");
gets(s2);
;
i=strcmp(s1,s2);
if(i==0)
{
    P("\nThe strings are same.");
}
else{
    P("\nThe strings are not same.");
}
i=strcmpi(s1,s2);
if(i==0)
{
    P("\nThe strings are same.");
}
else{
    P("\nThe strings are not same.");
}
strcat(s1,s2);
P("\n%s",s1);
strcpy(s1,s2);
P("\n%s",&s2[0]);
j=strlen(s2);
P("\n%d",j);
strupr(s2);
P("\n%s",s2);
x=strrev(s2);
P("\n%s",s2);
}
