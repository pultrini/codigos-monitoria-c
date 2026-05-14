#include <stdio.h>

int main() {
    // Declaração das variáveis
    int idade;

    // Interação com usuário
    printf("==========================\n");
    printf("Digite sua idade (ex: 30): ");
    scanf("%d", &idade);

    // Verificações (estrutura de controle)
    printf("==========================\n");

    if (idade < 0)
    {
        printf("Erro! Idade inválida.");
    } else if (idade < 18)
    {
        printf("Menor de idade. Acesso restrito.");
    } else if (idade < 64)
    {
        printf("Idade adulta. Acesso liberado.");
    } else
    {
        printf("Aposentado(a). Descontos especiais aplicáveis.");
    }

    printf("\n==========================\n");

    return 0;
}