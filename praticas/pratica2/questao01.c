// 1. Faça um programa em C que leia três números reais e imprima a média
// aritmética desses números.

#include <stdio.h>

int main() {
  float num1, num2, num3, media;

  // Leitura dos três números reais
  printf("Digite o primeiro número: ");
  scanf("%f", &num1);
  printf("Digite o segundo número: ");
  scanf("%f", &num2);
  printf("Digite o terceiro número: ");
  scanf("%f", &num3);

  // Cálculo da média aritmética
  media = (num1 + num2 + num3) / 3;

  // Exibição da média aritmética
  printf("A média aritmética dos três números é: %.2f\n", media);

  return 0;
}
