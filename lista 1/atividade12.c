//Fa�a um algoritmo para ler o sal�rio de um funcion�rio e aument�-Io em 15%. Ap�s o aumento, desconte 8% de impostos.
//Imprima o sal�rio inicial, o sal�rio com o aumento e o sal�rio final

#include<stdio.h>
#include<stdlib.h>

main  () {
    float salario, aumento, novosalario;
    printf("Digite seu salario:\n");
    scanf("%f", &salario);
    aumento= salario*0.15;
    salario= salario+aumento;
    novosalario= salario*0.8;
    printf("salario com aumento: %.1f, seu salario com o imposto:  %.1f", salario, novosalario);



}
