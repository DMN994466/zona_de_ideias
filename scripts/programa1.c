#include <stdio.h>

void select_sort(int vetor[], int tam) {
    int menor, troca;

    //loop externo para percorrer o vetor
    for(int i = 0; i < tam - 1; i++) {

        menor = i;
        //loop interno para comparar o elemento atual com os próximos elementos
        for(int j = (i + 1); j < tam; j++) {
            if(vetor[j] < vetor[menor]) {
                menor = j;
            }
        }
        //troca o elemento atual com o menor elemento encontrado
        if(i != menor) {
           troca = vetor[i];
            vetor[i] = vetor[menor];
           vetor[menor] = troca;
        }
    }

}


int main() {
    int vetor[5] = {10, 33, 18, 25, 42};

    select_sort(vetor, 5);

    for(int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}