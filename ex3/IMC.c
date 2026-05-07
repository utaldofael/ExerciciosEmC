#include <stdio.h>

int main(){
    double peso, altura, imc;
    printf("Informe seu peso atual: ");
    scanf("%lf", &peso);
    printf("Informe sua altura atual em centimetros: ");
    scanf("%lf", &altura);
    altura /= 100;
    imc = peso/(altura*altura);

    printf("Seu IMC e equivalente a %.2lf e sua condicao esta: ", imc);

    if (imc < 18.5){
        printf("Baixa");
    } else if (imc >= 18.5 && imc <= 24.9){
        printf("Normal");
    } else if (imc >= 25 && imc <= 29.9) {
        printf("Sobrepeso");
    } else if (imc >= 30){
        printf("Obesidade");
    }
    return 0;
}