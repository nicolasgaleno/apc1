// 10. Faça um programa em C que calcule a decomposição de um número inteiro
// qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7
// unidades, 3 dezenas, 6 centenas e 5 milhares).

#include <stdio.h>

int main() {
  // Declarando as variáveis
  int numero, unidade, dezena, centena, milhar;

  // Lendo o número inteiro
  printf("Digite o número inteiro: ");
  scanf("%d", &numero);

  // Calculando a unidade
  unidade = numero % 10;

  // Calculando a dezena
  dezena = (numero % 100) / 10;

  // Calculando a centena
  centena = (numero % 1000) / 100;

  // Calculando o milhar
  milhar = numero / 1000;

  // Imprimindo a decomposição do número
  printf("%d é decomposto em:\n", numero);
  printf("Unidade: %d\n", unidade);
  printf("Dezena: %d\n", dezena);
  printf("Centena: %d\n", centena);
  printf("Milhar: %d\n", milhar);

  return 0;
}
