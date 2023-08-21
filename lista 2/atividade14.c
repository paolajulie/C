//Num determinado Estado, para transferências de veículos, o DETRAN cobra uma taxa de 1% para carros
//fabricados antes de 1990 e uma taxa de 1.5% para os fabricados de 1990 em diante, a taxa incide sobre o
//valor de tabela do carro. Elabore um algoritmo que leia o ano e o valor de tabela do carro, calcule e informe o imposto a ser pago

#include <stdio.h>
#include<stdlib.h>

int main() {
    int anoFabricacao;
    float valorTabela, imposto;

    printf("Digite o ano de fabricação do carro: ");
    scanf("%d", &anoFabricacao);

    printf("Digite o valor de tabela do carro: ");
    scanf("%f", &valorTabela);

    if (anoFabricacao < 1990) {
        imposto = valorTabela * 0.01;
    } else {
        imposto = valorTabela * 0.015;
    }

    printf("Imposto a ser pago: R$ %.2f\n", imposto);

    return 0;
}
