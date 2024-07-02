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
    
    int exit = 0;
    double temp1;
    char scale1, scale2;

    while(!exit){
        printf("Please enter the temperature you'd like to convert: ");
        scanf(" %lf", &temp1);
        printf("Please enter the scales you would like to convert to in the following format X -> Y: ");
        scanf(" %c -> %c", &scale1, &scale2);

        if (scale1 == 'F' && scale2 == 'C'){
            printf("%lfF->C = %lf\n", temp1,FahrenheitToCelsius(temp1));
        }else if(scale1 == 'F' && scale2 == 'K'){
            printf("%lfF->K = %lf\n", temp1, FahrenheitToKelvin(temp1));
        }else if(scale1 == 'C' && scale2 == 'F'){
            printf("%lfC->F = %lf\n", temp1, CelsiusToFahrenheit(temp1));
        }else if (scale1 == 'C' && scale2 == 'K'){
            printf("%lfC->K = %lf\n", temp1, CelsiusToKelvin(temp1));
        }else if(scale1 == 'K' && scale2 == 'F'){
            printf("%lfK->F = %lf\n", temp1, KelvinToFahrenheit(temp1));
        }else if(scale1 == 'K' && scale2 == 'C'){
            printf("%lfK->C = %lf\n", temp1, KelvinToCelsius(temp1));
        }else{
            printf("Unknown scales...\n");
        }


    }
    
    return 0;
}