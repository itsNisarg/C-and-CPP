#include<stdio.h>
#include<conio.h>
#include<math.h>
#define P printf
#define S scanf
main()
{
int x,n;
P("\n*******WELCOME TO ICE-CREAM PARLOUR.*******\n");
P("*******************************************");
P("\n\tENTER THE CHOICE OF FLAVOUR.\n");

P("\n\tPRESS 1 for vanilla \n\tPRESS 2 for chocolate \n\tPRESS 3 for strawberry \n\tPRESS 4 for mango.");
P("\n\nYOUR CHOICE: ");
S("%d",&x);
if(x==1)
{
    P("\n\tYOU HAVE CHOSEN VANILLA FLAVOUR.");
    P("\nRATE is Rs 20 per cup.\n");
    P("\nYOU WILL GET 20 percent DISCOUNT ON VANILLA.");
    P("\n\tENTER THE NUMBER OF CUPS YOU WANT: ");
    S("%d",&n);
    P("%d CUPS WILL COST %d",n,n*20);
    P("\nYOU GET Rs %f DISCOUNT.",(float)(n*20*0.2));
    P("\n\tYOU HAVE TO PAY Rs %f",(float)(n*20*0.8));
}
else if(x==2)
{
    P("\n\tYOU HAVE CHOSEN CHOCOLATE FLAVOUR.");
    P("\nRATE is Rs 30 per cup.");
    P("\nYOU WILL GET 25 percent DISCOUNT ON CHOCOLATE.");
    P("\n\tENTER THE NUMBER OF CUPS YOU WANT: ");
    S("%d",&n);
    P("%d CUPS WILL COST %d",n,n*30);
    P("\nYOU GET Rs %f DISCOUNT.",(float)(n*30*0.25));
    P("\n\tYOU HAVE TO PAY Rs %f",(float)(n*30*0.75));
}
else if(x==3)
{
    P("\n\tYOU HAVE CHOSEN STRAWBERRY FLAVOUR.");
    P("\nRATE is Rs 25 per cup.");
    P("\nYOU WILL GET 10 percent DISCOUNT ON STRAWBERRY.");
    P("\n\tENTER THE NUMBER OF CUPS YOU WANT: ");
    S("%d",&n);
    P("%d CUPS WILL COST %d",n,n*25);
    P("\nYOU GET Rs %f DISCOUNT.",(float)(n*25*0.1));
    P("\n\tYOU HAVE TO PAY Rs %f",(float)(n*25*0.9));
}
else if(x==4)
{
    P("\n\tYOU HAVE CHOSEN MANGO FLAVOUR.");
    P("\nRATE is Rs 35 per cup.");
    P("\nYOU WILL GET 30 percent DISCOUNT ON MANGO.");
    P("\n\tENTER THE NUMBER OF CUPS YOU WANT: ");
    S("%d",&n);
    P("%d CUPS WILL COST %d",n,n*35);
    P("\nYOU GET Rs %f DISCOUNT.",(float)(n*35*0.3));
    P("\n\tYOU HAVE TO PAY Rs %f",(float)(n*35*0.7));
}
else
{
    P("\nENTER A VALID CHOICE.");
}
}
