#include<stdio.h>
int main(){
    int i=1;
    int num;

    printf("Este programa  le mostrara los divisores de un numero positivo ");
    printf("ingrese el numero positivo\n");
    scanf("%d", &num);
    printf("los divisores de %d son:\n, num");

    while (i<=num){
        if((num%i) == 0){
            printf("%d\n, i");
        }
        i++;
    }




}


