#include <stdio.h>

int main(){
    double grausC, grausF;
    printf("Informe a temperatura em graus Celsius: ");
    scanf("%lf", &grausC);
    grausF = grausC*9/5 + 32;
    printf("Temperatura em Celsius(C): %.2lfC\n", grausC);
    printf("Temperatura em Fahrenheit(F): %.2lfF", grausF);

    return 0;
}