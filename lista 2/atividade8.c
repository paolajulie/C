//Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o pre�o normal de etiqueta e a escolha da condi��o de pagamento.
//Utilize os c�digos da tabela a seguir para ler qual a condi��o de pagamento escolhida e efetuar o c�lculo adequado.


#include <stdio.h>
#include<stdlib.h>


int main() {
    float preco;
    char opcao;

    printf("Digite o pre�o do produto: ");
    scanf("%f", &preco);

    printf("Escolha a condi��o de pagamento:\n a) A vista em dinheiro ou cheque\n b) A vista no cartao de credito\n c) Em duas vezes sem juros\n d) Em duas vezes com juros de 10%%\n" );
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
            printf("Op��o inv�lida.\n");
            return 0;
    }

    printf("Valor a ser pago: R$ %.2f\n", preco);
 return 0;
}


