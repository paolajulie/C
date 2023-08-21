//Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverá se somar os dois,
//caso contrário multiplique A por B. Ao final, apresente o resultado

#include<stdio.h>
#include<stdlib.h>

int main (){
    int valor1, valor2;
    printf("Digite um numero inteiro ");
    scanf("%d", &valor1);
     printf("Digite um numero inteiro ");
    scanf("%d", &valor2);
    if (valor1 == valor2){
        printf("o resultado e %d", valor1+valor2 );
    } else  {
    printf("o resultado e %d", valor1*valor2);
    }



    return 0;

}
