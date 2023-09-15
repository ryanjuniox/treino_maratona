#include <stdio.h>
#include <stdlib.h>

//Lâmpadas - NEPS ACADEMY

int main(){

    printf("Defina N: ");
    int N, A, B;
    scanf("%d",&N);
    
    int valores[N];
    for(int i=0; i<N; i++){
        scanf("%d",&valores[i]);
    }

    for(int i=0; i<N; i++){
        if(valores[i] == 1){
            if(A == 1){
                A = 0;
            }else{
                A = 1;
            }
        }else if(valores[i] == 2){
            if(A == 1){
                A = 0;
            }else{
                A = 1;
            }
            
            if(B == 1){
                B = 0;
            }else{
                B = 1;
            }
        }
    }

    printf("%d\n",A);
    printf("%d\n",B);

}