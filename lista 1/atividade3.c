//A padaria Hotp�o vende uma certa quantidade de p�es franceses e uma quantidade de broas a cada dia.
//Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou
//com a venda dos p�es e broas (juntos), e quanto deve guardar numa conta de poupan�a (10% do total arrecadado).
// Voc� foi contratado para fazer os c�lculos para o dono. Com base nestes fatos, fa�a um algoritmo
//para ler as quantidades de p�es e de broas, e depois calcular os dados solicitados.


#include<stdio.h>
#include<stdlib.h>

int main () {
    float broas, paozinho, lucro1, lucro2, lucro3;
    printf("Digite a quantidade de broas vendidas:\n");
    scanf("%f", &broas);
    printf("Digite a quantidade de paozinho vendido:\n");
    scanf("%f", &paozinho);
    lucro1 = broas*1.50;
    lucro2 = paozinho*0.12;
    lucro3 = lucro1+lucro2;
    printf("seu lucro do dia foi =%.2f  ",lucro3 );
    printf("Voce deve guardar na poupanca =%.2f", lucro3*0.1);




}
