#include <stdio.h>

int main(){
    int vetor[5] = {3, 1, 5, 8, 2};
    int aux, i, continua;
    int fim = 5;
    
    do{
        continua = 0;
        for(i = 0; i < fim; i = i + 1){
            if(vetor[i] > vetor[i + 1]){
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
                continua = i;
            }
        }
        fim = fim - 1;
    } while(continua != 0);
    
    for(i = 0; i < 5; i = i + 1){
        printf("%d", vetor[i]);
    }
}