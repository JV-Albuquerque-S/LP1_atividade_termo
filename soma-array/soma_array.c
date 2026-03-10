#include <stdio.h>

int main(){
    int arr[5];
    int result = 0;

    printf("Insira cinco numeros, apertando Enter apos cada um \n");

    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<5; i++){
        result+=arr[i];
    }

    printf("%d", result);

    return 0;
}