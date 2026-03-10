#include <stdio.h>

int main(){
    int num;

    printf("Insira um numero \n");
    scanf("%d", &num);

    if(num<0){
        printf("O numero deve ser maior ou igual a zero");
        return 0;
    } else if(num==0){
        printf("1");
        return 0;
    }

    for(int i=num; i>1; i--){
        num=num*(i-1);
    }

    printf("%d", num);

    return 0;
}