// 5. Faça um programa em C que converta um valor qualquer em Gigabytes para um
// svalor em bytes (1GB = 1024³Bytes).

// valor em bytes (1GB = 1024³Bytes).
#include <stdio.h>
int main() {

  long int gigabytes;
  long int bytes;

  // Leitura do valor em Gigabytes
  printf("Digite o valor em Gigabytes: ");
  scanf("%li", &gigabytes);

  // Conversão de Gigabytes para Bytes
  bytes = gigabytes * 1024 * 1024 * 1024;

  // Exibição do valor convertido
  printf("%li Gigabytes equivalem a %li bytes.\n", gigabytes, bytes);

  return 0;
}
