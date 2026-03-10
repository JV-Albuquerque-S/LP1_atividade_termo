#include <stdio.h>

int main() {
    int num;

    printf("Insira um numero: \n");
    scanf("%d", &num);

    if(num<=0){
        printf("O numero deve ser positivo");
        return 0;
    }

    for(int i=1; i<=num; i++){
        printf("%d \n", i);
    }

    return 0;
}