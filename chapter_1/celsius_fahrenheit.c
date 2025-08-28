#include <stdio.h>

int main(void){
    printf("Celsius Fahrenheit Table\n");

    float fahr, celsius;
    int start, end, step;

    start = 0;
    end = 100;
    step = 5;

    celsius = start;

    while (celsius <= end){
        fahr  = (9.0/5.0)*celsius+32;
        printf("%3.0f %2.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}