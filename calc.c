#include<stdio.h>
#include<conio.h>
#include<math.h>
#define P printf
#define S scanf
void main()
{
float x,y,ans;
char op;
P("\n\t\t***** CALCULATOR *****\n\n");
P("eNTER THE FIRST OPERAND: ");
S("%f",&x);
P("ENTER THE SECOND OPERAND: ");
S("%f",&y);
P("ENTER THE OPERATOR: ");
fflush(stdin);
S("%c",&op);
switch(op)
{
case '+':
ans=x+y;
break;
case '-':
ans=x-y;
break;
case '*':
ans=x*y;
break;
case '/':
if(y!=0)
{
ans=x/y;
}
else
{
P("\n division by zero is not defined.");
}
break;
}
P("\nTHE RESULT OF THE OPERATION IS : %f", ans);

}
