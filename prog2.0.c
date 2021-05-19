/* TO PRINT CELSIUS-FAHRENHEIT CONVERSION TABLE */
#include<stdio.h>
main()
{
    int fahr,cels;
    int lower,upper,step;
    lower=0;                    //Lower limit of the temperature table
    upper=300;                  //Upper limit
    step=20;                    //step size
    fahr=lower;
    while(fahr<=upper)
    {
        cels=(fahr-32)*5/9;
        printf("%3d %6d\n",fahr,cels);
        fahr=fahr+step;
    }
}
