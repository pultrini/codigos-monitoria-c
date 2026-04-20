#include <stdio.h>

int main() {
  int idade_total_dias, anos, meses, dias;
  printf(
      "diga sua idade em anos, meses e dias, de forma sequencial e numerica: ");
  scanf("%d %d %d", &anos, &meses, &dias);

  int anos_dias = anos * 365;
  int meses_dias = meses * 30;

  idade_total_dias = anos_dias + meses_dias + dias;

  printf("\n sua idade em dias é %d!\n", idade_total_dias);
}
