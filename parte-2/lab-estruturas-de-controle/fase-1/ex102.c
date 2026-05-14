#include <stdio.h>

int main() {
    // Declaração de variáveis
    int numero;
    
    // Interação com o usuário
    printf("==========================\n");
    printf("Digite um número (ex: 15): ");
    scanf("%d", &numero);

    // Verificações (estrutura de controle)
    if (numero % 2 == 0) // Par
    {
        printf("==========================\n");
        printf("%d é par.\n", numero);

        if (numero > 0)
        {
            printf("%d é positivo.\n", numero);
        } else if (numero < 0)
        {
            printf("%d é negativo.\n", numero);
        } else
        {
            printf("%d é zero.\n", numero);
        }

    } else { // Ímpar
        
        printf("==========================\n");
        printf("%d é ímpar.\n", numero);

        if (numero > 0)
        {
            printf("%d é positivo.\n", numero);
        } else if (numero < 0)
        {
            printf("%d é negativo.\n", numero);
        } else
        {
            printf("%d é zero.\n", numero);
        }

    }
    

    return 0;
}