#include <stdio.h>

int main(){
    char texto[500];
    int num = 0;

    printf("Insira o texto\n");
    fgets(texto, 500, stdin);
    
    for (int i=0; texto[i]!='\0'; i++){
        num=i;
    }
    
    printf("%d", num);

    return 0;
}