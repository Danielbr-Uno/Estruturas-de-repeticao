#include <stdio.h>

void recursivo(int num){
    if(num > 0){
        printf("%d\n", num);
        recursivo(num - 1);
    }
}

int main(){

    int qtd = 10;
    printf("Contagem regressiva: \n");
    recursivo(qtd);

    return 0;
}