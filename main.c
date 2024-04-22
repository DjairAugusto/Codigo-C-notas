#include <stdio.h>

void notas(float N){
    if(N<=39){
        printf("Classificacao: F");
    }else if(N<=59){
        printf("Classificacao: E");
    }else if (N<=69){
        printf("Classificacao: D");
    }else if(N<=79){
        printf("Classificacao: C");
    }else if(N<=89){
        printf("Classificacao: B");
    }else{
        printf("Classificacao: A");
    }
}

int main() {
    float N;
    int op=0,A;
    while(op==0){
        printf("\nQuantos alunos a serem avaliados?: ");
        scanf("%d",&A);
        while(A>0){
            printf("\nEntre com a nota do aluno %d: ",A);
            scanf("%f",&N);
            notas(N);
            A--;
        }
        printf("\n\nDeseja resetar? Digite 0 para sim e 1 para não: ");
        scanf("%d",&op);
    }
    printf("\n\nProgama encerrado!");
    return 0;
}
