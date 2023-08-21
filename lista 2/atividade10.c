//Elabore um algoritmo que leia dois números inteiros e mostre o resultado da diferença do maior valor pelo menor;

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
    printf("a diferença entre eles e %d", resultado);
}
else{
    resultado=num2-num1;
    printf("a diferença entre eles e %d", resultado);
}



}
