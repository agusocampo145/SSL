#ifndef PRINTS_H
#define PRINTS_H

typedef enum
{
    CELCIUS,
    FAHRENHEIT
} Escala;

void printFilas(const double valores[], Escala inicial);

void printFila(double valor, Escala inicial);

void printTablaCelcius(const double valoresCelsius[]);

void printTablaFahrenheit(const double valoresFahrenheit[]);

#endif