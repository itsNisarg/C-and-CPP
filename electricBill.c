#include<stdio.h>
#include<conio.h>
#include<math.h>
#define P printf
#define S scanf
main()
{
int unit,bill=0;
P("\n\t\t*********************************");
P("\n\t\t***** YOUR ELECTRICITY BILL *****");
P("\n\t\t*********************************");
P("\nEnter the number of UNITS of electrical energy consumed: ");
S("%d",&unit);
if(unit<50&&unit>=0)
    {
    bill=bill+(2*unit);
    }
else
    {
    bill=bill+100;
    unit=unit-50;
    }

if(unit<50&&unit>=0)
    {
    bill=bill+(3*unit);
    }
else
   {
   bill=bill+150;
   unit=unit-50;
   }
if(unit<100&&unit>=0)
    {
    bill=bill+(4.5*(float)unit);
    }
else
    {
    bill=bill+450;
    unit=unit-100;
    }
if(unit<200&&unit>=0)
    {
    bill=bill+(6*unit);
    }
else
    {
    bill=bill+1200;
    unit=unit-200;
    }

if(unit>=0)
    {
    bill=bill+(10*unit);
    }

P("YOUR ELECTRICITY BILL is : %d",bill);
P("\t\t\n***** THANK YOU *****");
}
