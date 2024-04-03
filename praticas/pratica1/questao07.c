// 7. Faça um programa em C que calcule a altura alcançada por um avião após ter
// percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o
// ângulo de inclinação do avião menor ou igual a 45°.

#include <math.h>
#include <stdio.h>

int main() {
  // Declarando as variáveis
  float distancia;
  float angulo;
  float altura;

  // Lendo a distância percorrida pelo avião
  printf("Digite a distância percorrida pelo avião em KM: ");
  int deu_certo = scanf("%f", &distancia);

  // Lendo o ângulo de inclinação do avião
  printf("Digite o ângulo de inclinação do avião: ");
  deu_certo = scanf("%f", &angulo);

  // Verificando se o ângulo é menor ou igual a 45°
  if (angulo > 45) {
    printf("O ângulo de inclinação deve ser menor ou igual a 45°.\n");
    return 1;}

  // Calculando a altura
  altura = distancia * sin(angulo * (M_PI / 180));

  // Imprimindo a altura
  printf("A altura alcançada pelo avião é: %.2f metros\n", altura);

  return 0;
}
