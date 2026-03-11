#include <stdio.h>
#include <stdbool.h>

int main(){
    int num = 0;
    bool primo = true;

    printf("Insira um numero\n");
    scanf("%d", &num);

    if(num==2){
        printf("%d eh um numero primo", num);
        return 0;
    }else if(num==1){
        printf("%d nao eh um numero primo", num);
        return 0; 
    }
    
    for(int i=num-1; i>1; i--){
        if(num%i==0){
            primo = false;
        }
    }
    if(primo){
        printf("%d eh um numero primo", num);
    }else{
        printf("%d nao eh um numero primo", num);
    }
}