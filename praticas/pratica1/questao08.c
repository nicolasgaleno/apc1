// 8. Faça um programa em C que converta um tempo expresso em segundos para um
// valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas
// 16 minutos e 40 segundos).

#include <stdio.h>

int main() {
  // Declarando as variáveis
  int segundos;
  int horas;
  int minutos;

  // Lendo o tempo em segundos
  printf("Digite o tempo em segundos: ");
  int deu_certo = scanf("%i", &segundos);

  // Calculando as horas
  horas = segundos / 3600;
  // Calculando os minutos
  minutos = segundos % 3600 / 60;
  // Calculando os segundos restantes
  segundos = segundos % 3600 % 60;

  // Imprimindo o tempo convertido
  printf("%i horas, %i minutos e %i segundos\n", horas, minutos, segundos);

  return 0;
}
