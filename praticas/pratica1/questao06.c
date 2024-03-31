// 6. Faça um programa em C que calcule as raízes de uma equação do 2° grau
// através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).

#include <math.h>
#include <stdio.h>

int main() {
  // Declarando as variáveis
  double a, b, c, delta, r1, r2;

  // Lendo os coeficientes da equação
  printf("Digite o coeficiente A: ");
  scanf("%lf", &a);
  printf("Digite o coeficiente B: ");
  scanf("%lf", &b);
  printf("Digite o coeficiente C: ");
  scanf("%lf", &c);

  // Calculando o delta
  delta = b * b - 4 * a * c;

  // Verificando se a equação possui raízes reais
  if (delta < 0) {
    printf("A equação não possui raízes reais.\n");
    return 1;
  }

  // Calculando as raízes
  r1 = (-b + sqrt(delta)) / (2 * a);
  r2 = (-b - sqrt(delta)) / (2 * a);

  // Imprimindo as raízes
  printf("Raiz 1: %.2lf\n", r1);
  printf("Raiz 2: %.2lf\n", r2);

  return 0;
}
