#include <stdio.h>

int main(){
    int maior=0, menor=0, posMaior, posMenor;
    int i;
    int N;
    printf("Qual tamanho do vetor? ");
    scanf("%d", &N);
    int numeros[N];

    for (i=0;i < N;i++){
        printf("Informe o valor da posicao %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    for (i=0;i<N;i++){
        printf("[%d] ", numeros[i]);
    }


    for (i=0;i<N;i++){
        if (maior < numeros[i]){
            maior = numeros[i];
            posMaior = i;
        } else {
            continue;
        }
    }

    for (i=0;i<N;i++){
        if (menor > numeros[i] || menor == 0){
            menor = numeros[i];
            posMenor = i;
        } else {
            continue;
        }
    }
    printf("\nO maior numero desse array e: %d na posicao: %d", maior, posMaior+1);
    printf("\nO menor numero desse array e: %d na posicao: %d", menor, posMenor+1);
    return 0;
}