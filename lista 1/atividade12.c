//Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após o aumento, desconte 8% de impostos.
//Imprima o salário inicial, o salário com o aumento e o salário final

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
