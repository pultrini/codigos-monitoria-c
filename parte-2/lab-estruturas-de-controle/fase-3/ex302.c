#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int dado, tentativa, contador = 0;
    int MAXIMA_TENTATIVAS = 5;

    srand((unsigned) time(NULL));
    // Aqui os dados são dados de 1 a 6, como é o resto dessa divisao 
    // (%), temos que somar 1.
    dado = (rand() % 6 ) + 1;
    //verificacao se o dado é primo (entre 1 e 6 temos estes numeros)
    if (dado == 2 || dado == 3 || dado == 5){
        printf("Excelente jogada! Número Primo detectado.\n");
    }
    // Aqui temos a lógica de fazer enquanto
    do
    {
        printf("Teentativa %d de %d -- adivinhando o numero do dado (1-6)\n", contador+1, MAXIMA_TENTATIVAS);
        scanf("%d", &tentativa);
        //Acertamos?
        if (tentativa == dado) {
            printf("Parabens! voce acertou em %d tentativas \n", contador);
            break;
        }
        //Valor fora do escopo
        else if (tentativa < 1 || tentativa > 6) {
            printf("Número fora do intervalo de 1-6. Tente novamente\n");
            contador++;
        //Valor menor que o dado
        } else if (tentativa < dado) {
            printf("O dado tem numero maior que esse\n");
            contador++;
        //Maior que o dado
        } else {
            printf("O dado tem numero menor que esse.\n");
            contador++;
        }
        // Aqui tem a condicional, ou seja, vamos ter o MAX_TENTATIVAS
    } while (contador < MAXIMA_TENTATIVAS);
    // Aqui sempre roda se a condição do while for satisfeita.
    if (contador >= MAXIMA_TENTATIVAS && tentativa != dado) {
        printf("Fim das tentativas. O numero sorteado era: %d\n", dado);
    }
    
}