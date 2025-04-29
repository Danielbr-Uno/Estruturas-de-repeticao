#include <stdio.h>

int main(){

    int num, i;
    printf("Digite um número para calcular a tabuada: \n");
    scanf("%d", &num);

    printf("TABUADA DE %d\n", num);
    
    for (i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, num, i*num);
    }

    return 0;
}