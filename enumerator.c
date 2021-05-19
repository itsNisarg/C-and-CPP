#include<stdio.h>
#define P printf
#define S scanf
enum month
{
    jan,feb,march,april,may,june,july,aug,sept,oct,nov,dec
};
enum boolean
{
    false,true
};
enum designation
{
    manager,custom_office,superviser
};
int main()
{
    enum month m1;
    enum boolean b1;
    m1=march;
    P("\n month value=%d",m1);
    b1=true;
    P("\n true value=%d",b1);
    return 0;
}
