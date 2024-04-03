// 8. Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e
// (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² +
// (y2-y1)²)).

#include <math.h>
#include <stdio.h>

int main() {
  float x1;
  float y1;
  float x2;
  float y2;
  float distancia;

  // Leitura das coordenadas dos pontos
  printf("Digite a coordenada x do primeiro ponto: ");
  int deu_certo = scanf("%f", &x1);

  printf("Digite a coordenada y do primeiro ponto: ");
  deu_certo = scanf("%f", &y1);

  printf("Digite a coordenada x do segundo ponto: ");
  deu_certo = scanf("%f", &x2);

  printf("Digite a coordenada y do segundo ponto: ");
  deu_certo = scanf("%f", &y2);

  // Cálculo da distância entre os pontos
  distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

  // Exibição da distância entre os pontos
  printf("A distância entre os dois pontos é: %.2f\n", distancia);

  return 0;
}
