/*
Programa pasaje de Celsius a Fahreinheit (0 a 300)
Gabriel Nicolas Figueroa
26 de abril del 2015 
*/

#include <stdio.h>

int main(void)
{
 float fahr, celsius;
 float lower, upper, step;

 lower = 0; /* lower limit of temperatuire scale */
 upper = 300; /* upper limit */
 step = 20; /* step size */

 celsius = lower;

 printf("Celsius      Fahrenheit\n");

 while (celsius <= upper) {
       fahr = (9.0/5.0 * celsius)+32.0;
       printf("%6.1f        %3.1f \n", celsius,fahr);
       celsius = celsius + step;
       }
 return 0;
}
