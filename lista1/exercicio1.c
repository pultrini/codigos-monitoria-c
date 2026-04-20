#include <math.h>
#include <stdio.h>

int main() {
  float x1, y1, x2, y2, distancia;
  printf("coordenadas do p1 (x1, y1): ");
  scanf("%f %f", &x1, &y1);

  printf("coordenadas do p2 (x2, y2): ");
  scanf("%f %f", &x2, &y2);

  distancia = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

  printf("\n o valor da distancia foi de %.4f\n", distancia);

  return 0;
}
