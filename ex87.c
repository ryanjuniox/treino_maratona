#include <stdio.h>
#include <stdlib.h>

/*Flíper - NEPS ACADEMY*/

int main(){

    int P,R;
    scanf("%d %d\n",&P, &R);
    if((P == 0 || P == 1) && (R == 0 || R == 1)){
        if(P == 1){
            if(R == 1){
                printf("A\n");
            }
            else if(R == 0){
                printf("B\n");
            }
        }
        else{
            printf("C");
        }
    }
}