#include <stdio.h>

int main() {
    float temp;
    char unidade;

    printf("Digite 'C' para converter Celsius -> Fahrenheit e 'F' para converter Fahrenheit -> Celsius \n");
    scanf("%c", &unidade);

    if(unidade!='C' && unidade!='F' && unidade!='c' && unidade!='f'){
        printf("Apenas as entradas 'C' ou 'F' sao aceitas");
        return 0;
    }

    printf("Digite o valor da temperatura \n");
    scanf("%f", &temp);

    if(unidade=='C' || unidade=='c'){
        printf("%.1f", temp*1.8+32);
    }else{
        printf("%.1f", (temp-32)/1.8);
    }

    return 0;
}