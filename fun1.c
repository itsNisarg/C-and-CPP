#include<stdio.h>
#include<conio.h>
void italy();     /*declaration/prototype*/
void usa();
void jap();
#define P printf
#define S scanf
int main()
{
int i,j,k;
char a,b;
P("MAIN\n");
italy();
P("\nfinal main");
}
void italy()         /*defining*/
{
P("\nitaly");
usa();
P("\nback to italy");
}
void usa()
{
P("\nusa");
jap();
P("\nback to usa");
}
void jap()
{
P("\njapan");
}
