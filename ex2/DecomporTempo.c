#include <stdio.h>

int main(){
    int entrada, segundos, minutos, horas;
    printf("Informe um tempo em segundos: ");
    scanf("%d", &entrada);

    horas = (entrada/60)/60;
    minutos = (entrada/60)%60;
    segundos = entrada%60;

    printf("%d\n", horas);
    printf("%d\n", minutos);
    printf("%d\n", segundos);

    printf("Entrada: %d --> Saida: %02d:%02d:%02d", entrada, horas, minutos, segundos);

    return 0;
}