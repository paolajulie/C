//Criar dois vetores A e B cada um com 10 elementos inteiros. Construir um vetor C, onde cada elemento de C é a soma dos respectivos elementos em A e B, ou seja:
//C[i] = A[i] + B[i]

#include <stdio.h>
#include <stdlib.h>

int main(){

 int a[10];
 int b[10];
 int c[10];

 printf("Digite 10 numero inteiros: \n");
 for(int i =0 ;i<10;i++){
    printf("Elemento %d:", i+1);
    scanf("%d",&a[i]);

 }
 printf("Digite mais 10 numero inteiros: \n");
 for(int i =0 ;i<10;i++){
    printf("Elemento %d:", i+1);
    scanf("%d",&b[i]);

 }

 for(int i =0 ;i<10;i++){
    c[i]=a[i]+b[i];
    printf("a soma dos valores e: %d \n",c[i]);

 }
 return 0;

}
