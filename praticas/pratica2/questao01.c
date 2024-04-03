// 1. Faça um programa em C que leia três números reais e imprima a média
// aritmética desses números.

#include <stdio.h>

int main() {
  float numero1, numero2, numero3, media;

  // Leitura dos três números reais
  printf("Digite o primeiro número: ");
  int deu_certo = scanf("%f", &numero1);

  printf("Digite o segundo número: ");
  deu_certo = scanf("%f", &numero2);

  printf("Digite o terceiro número: ");
  deu_certo = scanf("%f", &numero3);

  // Cálculo da média aritmética
  media = (numero1 + numero2 + numero3) / 3;

  // Exibição da média aritmética
  printf("A média aritmética dos três números é: %.f\n", media);

  return 0;
}
