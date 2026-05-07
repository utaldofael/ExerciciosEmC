#include <stdio.h>

int main(){
    int i;
    int N = 3;
    struct Aluno {
        char nome[40];
        double n1, n2, n3, media;
    };
    
    struct Aluno aluno[N];

    for (i=0;i<N;i++){
        printf("Informe o nome do %d aluno: ", i+1);
        scanf("%s", aluno[i].nome);
        printf("Informe a primeira nota: ");
        scanf("%lf", &aluno[i].n1);
        printf("Informe a segunda nota: ");
        scanf("%lf", &aluno[i].n2);
        printf("Informe a terceira nota: ");
        scanf("%lf", &aluno[i].n3);
        aluno[i].media = (aluno[i].n1+aluno[i].n2+aluno[i].n3)/3;
    }

    for (i=0;i<N;i++){
        printf("A media do aluno %s foi de: %.2lf\n", aluno[i].nome, aluno[i].media);
        if (aluno[i].media >= 6){
            printf("%s esta APROVADO(a)!\n", aluno[i].nome);
        } else {
            printf("%s esta REPROVADO(a)!\n", aluno[i].nome);
        }
    }


    
    return 0;
}