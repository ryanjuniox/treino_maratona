#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//CODEFORCES

int main(){

    int numeroInt, K, cont;
    char numeroString[50];
    scanf("%s %d",numeroString, &K);
    numeroInt = atoi(numeroString);
    
    for(int i=0; i<K; i++){
        cont =  strlen(numeroString);
        if(numeroString[cont-1] == '0'){
            numeroInt = numeroInt/10;
        }
        else{
            numeroInt--;
        }
        sprintf(numeroString,"%d",numeroInt);
    }

    printf("%d",numeroInt);

}