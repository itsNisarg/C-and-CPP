/*    AUTOMATED TELLER MACHINE (ATM)    */
#include<stdio.h>
#define P printf
#define S scanf
main()
{
int amt,tt,fh,oh,fy,ty,tn,fv,to;
P("ENTER THE AMOUNT: ");
S("%d",&amt);
tt=amt/2000;
amt=amt%2000;
fh=amt/500;
amt=amt%500;
oh=amt/100;
amt=amt%100;
fy=amt/50;
amt=amt%50;
ty=amt/20;
amt=amt%20;
tn=amt/10;
amt=amt%10;
fv=amt/5;
amt=amt%5;
to=amt/2;
amt=amt%2;
P("\t NUMBER OF 2000 NOTES = %d \n",tt);
P("\t NUMBER OF 500 NOTES = %d \n",fh);
P("\t NUMBER OF 100 NOTES = %d \n",oh);
P("\t NUMBER OF 50 NOTES = %d \n",fy);
P("\t NUMBER OF 20 NOTES = %d \n",ty);
P("\t NUMBER OF 10 NOTES = %d \n",tn);
P("\t NUMBER OF 5 NOTES = %d \n",fv);
P("\t NUMBER OF 2 NOTES = %d \n",to);
P("\t NUMBER OF 1 NOTES = %d \n",amt);
P("\t \t THANK YOU \t \t \n");
}
