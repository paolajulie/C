//Escreva um algoritmo que exiba 20 vezes a mensagem informando qual vez está sendo escrita:
//“Esta é a mensagem 1”, “Esta é a mensagem 2” ... “Esta é a mensagem 20”

#include <stdio.h>
#include <stdlib.h>

main (){
  int contador;
  contador=0;

  while(contador<20){
        contador=contador+1;
        printf("esta e a mensagem %d \n",contador);

  }

}
