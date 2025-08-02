/*3. Escreva um programa que leia um programa que leia uma temperatura em Celsius e calcule
o seu valor correspondente em Fahrenheit e em Kelvin. O programa deve ter um subprograma
para converter uma temperatura de Celsius para Fahrenheit e outro para converter uma
temperatura de Celsius para Kelvin.*/

#include <stdio.h>
#include <conio.h>

float temp_fahrenheit(float celcius){
    float fahrenheint = 1.8*celcius + 32;
    return fahrenheint;
}
float temp_kelvin(float celcius){
    float kelvin = celcius + 273;
    return kelvin;
}


void main(){
    float celcius;
    printf("Informe a temperatura em celcius:\n");
    scanf("%f", &celcius);

    printf("Farenheint: %.1f\nKelvin: %.1f", temp_fahrenheit(celcius), temp_kelvin(celcius));

    getch();
}