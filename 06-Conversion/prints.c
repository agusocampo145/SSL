#include "prints.h"
#include "conversion.h"
#include <stdio.h>

void printFila(double valor, Escala inicial)
{
    if (inicial == CELCIUS)
    {
        printf("%f\t\t%.2f", valor, celciusAfahrenheit(valor));
    }
    else
    {
        printf("%f\t\t%.2f", valor, fahrenheitAcelcius(valor));
    }
}

void printFilas(const double valores[], Escala inicial)
{

    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        printFila(valores[i], inicial);
        printf("\n");
    }
}

void printTablaCelcius(const double valoresCelsius[])
{
    printf("Tabla de conversion de Celcius a Fahrenheit\n");
    printf("Cº\t\t\tFº\n");
    printFilas(valoresCelsius, CELCIUS);
}

void printTablaFahrenheit(const double valoresFahrenheit[]){
    printf("Tabla de conversion de Fahrenheit a Celcius\n");
    printf("Fº\t\t\tCº\n");
    printFilas(valoresFahrenheit, FAHRENHEIT);
}
