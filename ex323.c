#include <stdio.h>
#include <stdlib.h>

//NEPS ACADEMY

int main(){

    int valor, primeiro;
    scanf("%d",&primeiro);
    int maior=primeiro;
    while(scanf("%d",&valor) == 1){
        if(valor>maior){
            maior = valor;
        }
        else if(valor == 0){
            break;
        }
    }
    printf("%d",maior);

}