#include<stdio.h>
#define P printf
#define S scanf
int main()
{
    int x,n,rate,z=1,f,discount;
    float amount,net;
    P("\n*******WELCOME TO ICE-CREAM PARLOUR.*******\n");
    P("*******************************************");
    P("\nHOW MANY DIFFERENT FLAVOURS YOU WANT?: ");
    S("%d",&f);
    choice:
        P("\n\n\n\tENTER THE CHOICE OF FLAVOUR.\n");
        P("\n\tPRESS 1 for vanilla \n\tPRESS 2 for chocolate \n\tPRESS 3 for strawberry \n\tPRESS 4 for mango.");
        P("\n\nYOUR CHOICE: ");
        S("%d",&x);
if(x==1)
    {
        P("\n\tYOU HAVE CHOSEN VANILLA FLAVOUR.");
        rate=20;discount=20;
        P("\nYOU WILL GET %d percent DISCOUNT ON VANILLA.",discount);
        goto bill;
    }
else if(x==2)
    {
        P("\n\tYOU HAVE CHOSEN CHOCOLATE FLAVOUR.");
        rate=30;discount=25;
        P("\nYOU WILL GET %d percent DISCOUNT ON CHOCOLATE.",discount);
        goto bill;
    }
else if(x==3)
    {
        P("\n\tYOU HAVE CHOSEN STRAWBERRY FLAVOUR.");
        rate=25;discount=10;
        P("\nYOU WILL GET %d percent DISCOUNT ON STRAWBERRY.",discount);
        goto bill;
    }
else if(x==4)
    {
        P("\n\tYOU HAVE CHOSEN MANGO FLAVOUR.");
        rate=35;discount=30;
        P("\nYOU WILL GET %d percent DISCOUNT ON MANGO.",discount);
        goto bill;
    }
else
    {
        P("\nENTER A VALID CHOICE.");
        goto choice;
    }
bill:

P("\nRATE is Rs %d per cup.\n",rate);
P("\n\tENTER THE NUMBER OF CUPS YOU WANT: ");
S("%d",&n);
P("%d CUPS WILL COST %d",n,n*rate);
P("\nYOU GET Rs %f DISCOUNT.",(float)(n*rate)*((float)discount/100));
amount=(n*rate)*(1-((float)discount/100));
P("\n\tYOU HAVE TO PAY Rs %f",amount);
z++;
net=net+amount;
if(z<=f)
{
    goto choice;
}
P("\n\n\n\t\tTHE NET AMOUNT TO PAY IS: %f",net);
P("\n\n\t\t****** THANK YOU AND HAVE A NICE DAY******");
}
