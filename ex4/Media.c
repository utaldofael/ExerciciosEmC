#include <stdio.h>

int main(){
    int i;
    int N;
    double media=0;
    printf("Qual tamanho? ");
    scanf("%d", &N);
    double M[N];

    for (i=0;i < N;i++){
        printf("Informe um valor na posicao %d: ", i+1);
        scanf("%lf", &M[i]);
        media += M[i];
    }
    media = media / N;
    printf("A media desses %d numeros e: %.2lf", N, media);

    return 0;
}