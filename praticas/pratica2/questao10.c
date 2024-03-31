// 10. Faça um programa em C que leia um número inteiro e imprima a tabuada de
// multiplicação.

#include <stdio.h>

int main() {
  int numero;

  // Leitura do número inteiro
  printf("Digite um número inteiro: ");
  scanf("%d", &numero);

  // Impressão da tabuada de multiplicação
  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", numero, i, numero * i);
  }

  return 0;
}
