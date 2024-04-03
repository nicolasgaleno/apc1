// 9. Faça um programa em C que leia um número inteiro e imprima o caractere
// correspondente na tabela ASCII.

#include <stdio.h>

int main() {
  int numero;
  char caractere;

  // Leitura do número inteiro
  printf("Digite um número inteiro: ");
  int deu_certo = scanf("%i", &numero);

  // Verificação se o número está entre 0 e 127
  if (numero < 0 || numero > 127) {
    printf("O número digitado está fora da faixa permitida (0 a 127).\n");
    return 1;
  }

  // Impressão do caractere correspondente na tabela ASCII
  printf("O caractere correspondente na tabela ASCII é: %c\n", numero);

  return 0;
}
