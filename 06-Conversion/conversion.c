#include <stdio.h>

const double CONVERSION_FAHRENHEIT = 5.0 / 9.0;
const double CONVERSION_CELIUS = 9.0 / 5.0;



double fahrenheitAcelcius(double fahrenheit)
{
    return (fahrenheit - 32) * CONVERSION_FAHRENHEIT;
}

double celciusAfahrenheit(double celcius)
{
    return (celcius * CONVERSION_CELIUS) + 32;
}
