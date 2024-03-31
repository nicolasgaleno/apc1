// 4. Faça um programa em C que leia a largura e o comprimento de um terreno em
// metros e calcule a sua área em hectares (1 hectare = 10.000 m²).

#include <stdio.h>

int main() {
  float largura, comprimento, areaEmMetros, areaEmHectares;

  // Leitura da largura e do comprimento do terreno
  printf("Digite a largura do terreno em metros: ");
  scanf("%f", &largura);
  printf("Digite o comprimento do terreno em metros: ");
  scanf("%f", &comprimento);

  // Cálculo da área em metros quadrados
  areaEmMetros = largura * comprimento;

  // Cálculo da área em hectares
  areaEmHectares = areaEmMetros / 10000.0;

  // Exibição da área em hectares
  printf("A área do terreno em hectares é: %.2f\n", areaEmHectares);

  return 0;
}
