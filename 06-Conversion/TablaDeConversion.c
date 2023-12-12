#include <stdio.h>
#include "prints.h"

const double temperaturasEnCelcius[] = {1, 20, 50, 70, 100};
const double temperaturasEnFahrenheit[] = {0, 32, 50, 90, 120};

int main()
{
    printTablaCelcius(temperaturasEnCelcius);
    printf("-----------------------------\n");
    printTablaFahrenheit(temperaturasEnFahrenheit);

}
