#include <stdio.h>

int main() {
    int servico;
    int saque;
    //Saldo ilustrativo, não é preciso para o exercicio.
    int saldo = 50000;
    
    printf("digite o serviço que voce quer usar\n");
    printf("1 -- Consultar saldo\n");
    printf("2 -- Saque \n");
    printf("3 -- Ajuda \n");

    
    scanf("%d", &servico);
    // Definimos qual variavel vamos estudar, quais casos ela pode ter
    // Podemos deixar um default com as instruções ou com um aviso.
    switch (servico)
    {
    //Caso 1
    case 1:
       printf("Seu saldo é de %d\n", saldo);
        break;
    
    case 2:
        printf("Qual o valor do saque?\n");
        scanf("%d", &saque);
        if (saque > saldo) {
            printf("Seu saque é maior que o saldo que voce tem disponivel.\n");
        }
        printf("Saque realizado!\n");
    
    case 3:
        printf("Boas vindas!\n");
    //Valor caso nenhum outro caso seja escolhido.
    default:
        printf("Temos apenas as opções 1, 2 e 3!\n");
    }

    return 0;
}