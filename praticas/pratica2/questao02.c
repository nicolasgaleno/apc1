// 2. Faça um programa em C que leia dois números inteiros e imprima o quociente
// e o resto da divisão entre eles.

#include <stdio.h>

int main() {
  int dividendo, divisor, quociente, resto;

  // Leitura dos dois números inteiros
  printf("Digite o dividendo: ");
  scanf("%d", &dividendo);
  printf("Digite o divisor: ");
  scanf("%d", &divisor);

  // Cálculo do quociente e do resto da divisão
  quociente = dividendo / divisor;
  resto = dividendo % divisor;

  // Exibição do quociente e do resto
  printf("O quociente da divisão é: %d\n", quociente);
  printf("O resto da divisão é: %d\n", resto);

  return 0;
}
