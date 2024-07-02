#include <stdio.h>

double CelsiusToFahrenheit(double celsius){
    return (celsius * 9/5.f) + 32;
}

double CelsiusToKelvin(double celsius){
    return celsius + 273.15;
}

double FahrenheitToCelsius(double fahr){
    return (fahr - 32) * 5/9.f;
}

double FahrenheitToKelvin(double fahr) {
    return (fahr - 32) * 5/9.f + 273.15;
}

double KelvinToCelsius(double kelvin){
    return kelvin - 273.15; 
}

double KelvinToFahrenheit(double kelvin){
    return (kelvin - 273.15) * (9/5.f) + 32;
}

int main(){
    
    
    return 0;
}