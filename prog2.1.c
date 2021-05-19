/* TO PRINT CELSIUS-FAHRENHEIT CONVERSION TABLE */
/* FLOATING POINT VERSION */
#include<stdio.h>
main()
{
    float fahr,cels;
    int lower,upper,step;
    lower=0;                    //Lower limit of the temperature table
    upper=300;                  //Upper limit
    step=20;                    //step size
    fahr=lower;
    printf("\n Celsius to Fahrenheit \n\n");
    while(fahr<=upper)
    {
        cels=(5/9.0)*(fahr-32);
        printf("%3.0f %6.1f\n",fahr,cels);
        fahr=fahr+step;
    }
}
