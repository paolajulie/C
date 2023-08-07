//Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do ano.
//Esqueça a questão dos anos bissextos e considere sempre que um mês possui 30 dias.


#include<stdio.h>
#include<stdlib.h>

int main () {

    int mes, dia, resultado;
    printf("insira o mes em que voce esta: ");
    scanf("%d", &mes);
    printf("insira o dia em que voce esta: ");
    scanf("%d", &dia);


    resultado= mes*30 - 30 + dia;
    printf("ja se passou %d", resultado);



}
