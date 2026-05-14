#include <stdio.h>

int main() {

    // Declaração de variáveis
    int soma = 0;
    int numero = 1;

    while (numero != 0)
    {
        printf("Digite um número (ex: 10): ");
        scanf("%d", &numero);

        soma = soma + numero;
    }
    
    printf("Soma total: %d\n", soma);

    return 0;
}