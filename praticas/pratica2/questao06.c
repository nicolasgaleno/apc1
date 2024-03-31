// 6. Faça um programa em C que leia o valor de compra, o ano de fabricação e o
// ano de depreciação e calcule o valor depreciado de um veículo (depreciação =
// (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).

#include <stdio.h>

int main() {
  float valorCompra, anoFabricacao, anoDepreciacao, valorDepreciado;

  // Leitura do valor de compra, ano de fabricação e ano de depreciação
  printf("Digite o valor de compra do veículo: R$ ");
  scanf("%f", &valorCompra);
  printf("Digite o ano de fabricação do veículo: ");
  scanf("%f", &anoFabricacao);
  printf("Digite o ano de depreciação do veículo: ");
  scanf("%f", &anoDepreciacao);

  // Cálculo do valor depreciado
  valorDepreciado = valorCompra * (anoDepreciacao - anoFabricacao) * 0.01;

  // Exibição do valor depreciado
  printf("O valor depreciado do veículo é: R$ %.2f\n", valorDepreciado);

  return 0;
}
