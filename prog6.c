/* To copy input to the output*/
#include<stdio.h>
main()
{
    int c;
    c=getchar();
    while(c!=EOF)
    {
        putchar(c);
        c=getchar();
    }
}
