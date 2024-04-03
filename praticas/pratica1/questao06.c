// 6. Faça um programa em C que calcule as raízes de uma equação do 2° grau
// através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).

#include <math.h>
#include <stdio.h>

int main() {
  // Declarando as variáveis
  float a, b, c;
  float delta;
  float x1, x2;

  // Lendo os coeficientes da equação
  printf("Digite o coeficiente A: ");
  int deu_certo = scanf("%f", &a);

  printf("Digite o coeficiente B: ");
  deu_certo = scanf("%f", &b);

  printf("Digite o coeficiente C: ");
  deu_certo = scanf("%f", &c);

  // Calculando o delta
  delta = b * b - 4 * a * c;

  // Verificando se a equação possui raízes reais
  if (delta < 0) {
    printf("A equação não possui raízes reais.\n");
    return 1;
  }
  // Calculando as raízes
  x1 = (-b + sqrt(delta)) / (2 * a);
  x2 = (-b - sqrt(delta)) / (2 * a);

  // Imprimindo as raízes
  printf("Raiz 1: %.2lf\n", x1);
  printf("Raiz 2: %.2lf\n", x2);

  //"As raízes da equação %.fx² + %.fx + %.f são %f e %f\n", a, b, c, x1, x2
  printf("As raízes da equação %.fx² + %.fx + %.f são %f e %f\n", a, b, c, x1, x2);

  return 0;
}
