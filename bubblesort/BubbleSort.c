#include <stdio.h>

int main(){
    int i, j;
    int N;
    int a;
    printf("Quantos valores? ");
    scanf("%d", &N);
    int numeros[N];

    for (i=0;i<N;i++){
        printf("Informe o valor da posicao %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    
    for (i=0;i<N-1;i++){
        for (j=0;j<N-1;j++){
            if (numeros[j] < numeros[j+1]){
                a = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = a;
            } else{
                continue;
            }
        }
    }

    for (i=0;i<N;i++){
        printf("[%d] ", numeros[i]);
    }

    return 0;
}