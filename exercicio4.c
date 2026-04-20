#include <stdio.h>

int main() {
  float custoFabrica, custoConsumidor;

  const float PERC_DISTRIBUIDOR = 0.28;
  const float PERC_IMPOSTOS = 0.45;

  printf("Digite o custo de fábrica do veículo: R$ ");
  if (scanf("%f", &custoFabrica) != 1) {
    printf("Valor inválido!\n");
    return 1;
  }

  custoConsumidor = custoFabrica * (1 + PERC_DISTRIBUIDOR + PERC_IMPOSTOS);

  printf("O custo final ao consumidor é: R$ %.2f\n", custoConsumidor);

  return 0;
}
