//Crie uma fun��o recursiva que receba um n�mero inteiro positivo N e calcule o somat�rio dos n�meros de 1 a N

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
