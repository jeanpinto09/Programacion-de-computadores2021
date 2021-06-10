#include<stdio.h>
int numero1;
int numero2;
int resultado = 0; 

int main(){
    printf("Ingresar dos numeros de la forma: X, Y\n");
    scanf("%i, %i", &numero1, &numero2);
    printf("Los dos numeros son; %i y %i\n", numero1, numero2);
    for(int i = 0 ; i < numero2; i++){
        resultado += numero1;

    }
    return 0;
}

