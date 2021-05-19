/* CONVERTING CELSIUS TO FAHRENHEIT */
#include<stdio.h>
main()
{
    float celsius,fahr;
    int lower,upper,step;
    lower=-100;                 //lower limit of the temperature table
    upper=100;                   //upper limit
    step=20;                    //step size
    printf("\n CELSIUS TO FAHRENHEIT \n\n");
    for(celsius=lower;celsius<=upper;celsius=celsius+step)
    {
        fahr=(9*celsius/5)+32;
        printf("%4.0f %8.1f \n",celsius,fahr);
    }
}
