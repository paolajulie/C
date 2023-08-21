//Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço normal de etiqueta e a escolha da condição de pagamento.
//Utilize os códigos da tabela a seguir para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado.


#include <stdio.h>
#include<stdlib.h>


int main() {
    float preco;
    char opcao;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    printf("Escolha a condição de pagamento:\n a) A vista em dinheiro ou cheque\n b) A vista no cartao de credito\n c) Em duas vezes sem juros\n d) Em duas vezes com juros de 10%%\n" );
    printf("Opcao: ");
    scanf(" %c", &opcao);

    switch(opcao) {
        case 'a':
            preco -= preco * 0.1;
            break;
        case 'b':
            preco -= preco * 0.15;
            break;
        case 'c':

            break;
        case 'd':
            preco += preco * 0.1;
            break;
        default:
            printf("Opção inválida.\n");
            return 0;
    }

    printf("Valor a ser pago: R$ %.2f\n", preco);
 return 0;
}


