//Elabore um algoritmo que leia dois n�meros inteiros e mostre o resultado da diferen�a do maior valor pelo menor;

#include<stdio.h>
#include<stdlib.h>

int main(){
int num1, num2, resultado;

printf("Digite um numero inteiro ");
scanf("%d", &num1);

printf("Digite outro numero inteiro ");
scanf("%d", &num2);

if(num1>num2){
    resultado=num1-num2;
    printf("a diferen�a entre eles e %d", resultado);
}
else{
    resultado=num2-num1;
    printf("a diferen�a entre eles e %d", resultado);
}



}
