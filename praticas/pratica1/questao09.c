// 9. Faça um programa em C que converta uma idade expressa em anos, meses e
// dias para um valor em dias. Considere um ano com 365 dias e um mês com 30
// dias.

#include <stdio.h>

int main() {
  // Declarando as variáveis
  int anos, meses, dias, total_dias;

  // Lendo a idade em anos, meses e dias
  printf("Digite a idade em anos: ");
  scanf("%d", &anos);
  printf("Digite a idade em meses: ");
  scanf("%d", &meses);
  printf("Digite a idade em dias: ");
  scanf("%d", &dias);

  // Calculando o total de dias em anos
  total_dias = anos * 365;

  // Calculando o total de dias em meses
  total_dias += meses * 30;

  // Adicionando os dias restantes
  total_dias += dias;

  // Imprimindo a idade em dias
  printf("A idade em dias é: %d\n", total_dias);

  return 0;
}
