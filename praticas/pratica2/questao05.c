// 5. Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o
// índice de massa corporal (imc = peso / altura²).

#include <math.h>
#include <stdio.h>

int main() {
  float peso;
  float altura;
  float imc;

  // Leitura do peso e da altura da pessoa
  printf("Digite o peso da pessoa em kg: ");
  int deu_certo = scanf("%f", &peso);

  printf("Digite a altura da pessoa em cm: ");
  deu_certo = scanf("%f", &altura);

  // Cálculo do IMC
  imc = peso / (altura * altura);
  // Exibição do IMC
  printf("O IMC da pessoa é: %.2f\n", imc);

  return 0;
}
