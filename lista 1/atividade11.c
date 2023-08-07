//Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um algoritmo para
//converter este tempo em anos, meses e dias. Assuma que cada mês possui sempre 30 dias.


#include<stdio.h>
#include<stdlib.h>

int main () {

    int dia, meses, ano;


    printf("Digite a quantidade de dias:\n");
    scanf("%d", &dia);
    meses= dia/30;
    ano=meses/12;
    meses= meses-(ano*12);
    dia=dia-((ano*365)+(meses*30));

    printf("tempo de trabalho sem acidente e %d anos, meses %d, dia %d", ano, meses, dia);



}
