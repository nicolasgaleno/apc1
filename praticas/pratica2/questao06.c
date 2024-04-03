// 6. Faça um programa em C que leia o valor de compra, o ano de fabricação e o
// ano de depreciação e calcule o valor depreciado de um veículo (depreciação =
// (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).

#include <stdio.h>

int main() {
  float valorCompra;
  float anoFabricacao;
  float anoDepreciacao;
  float valorDepreciado;

  // Leitura do valor de compra, ano de fabricação e ano de depreciação
  printf("Digite o valor de compra do veículo: R$");
  int deu_certo = scanf("%f", &valorCompra);

  printf("Digite o ano de fabricação do veículo: ");
  deu_certo = scanf("%f", &anoFabricacao);

  printf("Digite o ano de depreciação do veículo: ");
  deu_certo = scanf("%f", &anoDepreciacao);

  // Cálculo do valor depreciado
  valorDepreciado = valorCompra * (anoDepreciacao - anoFabricacao) * 0.01;

  // Exibição do valor depreciado
  printf("O valor depreciado do veículo é: R$ %.2f\n", valorDepreciado);

  return 0;
}
