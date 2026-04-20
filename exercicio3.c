#include <stdio.h>

int main() {
  int totalSegundos, horas, minutos, segundos, resto;

  printf("Digite o tempo total em segundos: ");
  if (scanf("%d", &totalSegundos) != 1) {
    printf("Entrada inválida!\n");
    return 1;
  }

  horas = totalSegundos / 3600;

  resto = totalSegundos % 3600;

  minutos = resto / 60;

  segundos = resto % 60;

  printf("\nResultado: %dh %dmin %ds\n", horas, minutos, segundos);

  return 0;
}
