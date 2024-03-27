#include <stdio.h>
#include <math.h>

int main () {

  int numero1;
  int numero2;

  printf("Entre com o primeiro número: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo número: ");
  deu_certo = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("A soma é %i\n", soma);

  int subtracao = numero1 - numero2;
  printf("A subtração é %i\n", subtracao);

  int multiplicacao = numero1 * numero2;
  printf("A multiplicação é %i\n", multiplicacao);

  float divisao = numero1 / (numero2 * 1.0f); // converção implicita
  printf("A divisão é %f\n", divisao);

  int resto = numero1 % numero2;
  printf("O resto da divisão dos numeros é %i\n", resto);

  // número 1 = número 1 + 1;
  // incremento
  printf("O incremento do primeiro numero é %i\n", numero1++);
  printf("O incremento do primeiro numero é %i\n", ++numero1);

  // número 1 = número 1 - 1;
  // decremento
  printf("O decremento do primeiro numero é %i\n", numero1--);
  printf("O decremento do primeiro numero é %i\n", --numero1);

  double raiz = sqrt(numero1);
  printf("A raiz quadrada do primeiro numero é %f\n", raiz);

  double potencia = pow(numero1, 4); // número 1 elevado a 4 ou 1
  printf( "A quarta potencia do primeiro numero é %f\n", potencia);

  double logaritmo = log(numero1);
  printf("O logaritmo do primeiro numero na base 2 é %f\n", logaritmo);

  const double PI = 3.1415;
  double seno = sin(numero1 * (PI / 180); // angulo em radiano * PI / 180
  printf("O seno do primeiro numero é %f\n", seno);

  return 0;
}
