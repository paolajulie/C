//Criar um vetor A com 8 elementos inteiros. Construir um vetor B de mesmo tipo e tamanho e com os elementos do vetor A multiplicados por 2, ou seja: B[i] = A[i] * 2.

#include <stdio.h>
#include <stdlib.h>

int main(){

 int a[8];
 int b[8];

 printf("Digite 8 numero inteiros: \n");
 for(int i =0 ;i<8;i++){
    printf("Elemento %d:", i+1);
    scanf("%d",&a[i]);

 }

 for(int i =0 ;i<8;i++){
    b[i]=a[i]*2;
    printf("o dobro do valor e: %d \n",b[i]);

 }






}
