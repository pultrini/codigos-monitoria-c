#include <stdio.h>
#include <string.h>

int main() {

    // Declaração de variáveis
    char senha[5];

    do
    {
        printf("Insira a senha: ");
        scanf("%4s", senha);
    } while (strcmp(senha, "1234") != 0);
    
    printf("Senha correta!\n");

    return 0;
}