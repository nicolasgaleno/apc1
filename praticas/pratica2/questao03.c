// 3. Faça um programa em C que leia uma temperatura em graus Celsius e calcule
// o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).

#include <stdio.h>

int main() {
  float celsius, fahrenheit;

  // Leitura da temperatura em graus Celsius
  printf("Digite a temperatura em graus Celsius: ");
  scanf("%f", &celsius);

  // Cálculo da temperatura em graus Fahrenheit
  fahrenheit = (9.0 / 5.0) * celsius + 32.0;

  // Exibição da temperatura em graus Fahrenheit
  printf("A temperatura em graus Fahrenheit é: %.2f\n", fahrenheit);

  return 0;
}
