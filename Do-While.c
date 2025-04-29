#include <stdio.h>

int main(){

    int num;
    do{

        printf("Digite um numero par para sair do programa: \n");
        scanf("%d", &num);

        if(num % 2 == 0){
            printf("Esse número é par!\n");
        } else{
            printf("Esse número é impar!\n");
        }

    } while(num % 2 != 0);
    
    printf("Saindo do programa.\n");
    
    return 0;
}