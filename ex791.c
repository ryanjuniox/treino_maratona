#include <stdio.h>
#include <stdlib.h>

//CODEFORCES

int main(){

    int A, B;
    scanf("%d %d",&A, &B);

    int ano=0;
    int flag_weight = 0;
    while(flag_weight == 0){
        ano++;
        A = A*3;
        B = B*2;
        if(3*B < A){
            flag_weight = 1;
        }
    }

    printf("%d",ano);

}