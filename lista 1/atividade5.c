//Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o preço do
//litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no tanque.

#include<stdio.h>
#include<stdlib.h>

int main () {
    float preco, dinheiro, litros;
    printf("Digite o preco da gasolina hoje:\n");
    scanf("%f", &preco);
    printf("Digite o valor do pagamento:\n");
    scanf("%f", &dinheiro);
    litros = dinheiro/preco;

    printf("voce pode abastecer  %.1f litros", litros);



}
