//Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N

#include <stdio.h>

int fatorial (int n){
 if(n==0){
    return 0;
 }
 else{
    return(n+fatorial(n-1));
     }
}
int main(){
 int n;
 printf("Digite um numero inteiro: ");
 scanf("%d",&n);
 printf("O somatorio de numeros de 1 a %d e: %d",n,fatorial(n));

}
