//Leia a idade de 10 pessoas e exiba a idade da pessoa mais nova.

#include <stdio.h>
#include <stdlib.h>

main(){
 int numero, idade, contador;
 contador=0;
 numero=10000;
 idade=0;

  while(contador<20){
    printf("Insira sua idade ");
    scanf("%d",&idade);
    contador=contador +1;
    if(idade<numero){
        numero=idade;
  }
  }

  printf("%d",numero);

}
