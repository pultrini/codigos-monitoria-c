#include <stdio.h>

int main() {
  float n1, n2, n3, media;

  printf("Digite as 3 notas (separadas por espaco): ");
  if (scanf("%f %f %f", &n1, &n2, &n3) != 3) {
    printf("Erro na leitura das notas.\n");
    return 1;
  }

  media = (n1 + n2 + n3) / 3;

  printf("\nMedia final: %.2f\n", media);

  if (media >= 5.0) {
    printf("Status: Aprovado!\n");
  } else {
    printf("Status: Reprovado.\n");
  }

  return 0;
}
