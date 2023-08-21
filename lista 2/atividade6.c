//Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem decrescente

#include<stdio.h>
#include<stdlib.h>

int main () {
    int valor1, valor2, valor3;
    printf("digite um valor inteiro ");
    scanf("%d", &valor1);
    printf("digite um outro valor inteiro ");
    scanf("%d", &valor2);
    printf("digite um outro valor inteiro ");
    scanf("%d", &valor3);

    if (valor1 > valor2 && valor2 > valor3 ){
            //1 2 3
        printf(" a ordem e %d %d %d", valor1, valor2, valor3);
    } else if (valor2>valor1 && valor1 > valor3){
        //2 1 3
        printf("a ordem e %d %d %d", valor2, valor1, valor3);
    } else if( valor1 > valor3 && valor3 > valor2){
        // 1 3 2
         printf("a ordem e %d %d %d", valor1, valor3, valor2);
    } else if ( valor2>valor3 && valor3>valor1){
        // 2 3 1
        printf("a ordem e %d %d %d",valor2,valor3,valor1);
    } else if (valor3>valor2 && valor2>valor1){
    printf("a ordem e %d %d %d", valor3, valor2, valor1);
    } else {
    printf("a ordem e 3 1 2");
    }


}
