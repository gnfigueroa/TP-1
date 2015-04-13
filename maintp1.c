#include <stdio.h>
#include <stdlib.h>

int main()
{

 float fahr, celsius;
 float lower, upper, step;
 lower = 0; /* lower limit of temperatuire scale */
 upper = 300; /* upper limit */
 step = 20; /* step size */
 fahr = lower;
 printf("Celsius      Fahrenheit\n");
 while (fahr <= upper) {
       celsius = (5.0/9.0) * (fahr-32.0);
       printf("%6.1f        %3.0f \n", celsius,fahr);
       fahr = fahr + step;
       }
 system("PAUSE");	
 return 0;
}
