#include <stdio.h>

int main() {
  printf("\x1b[32m-----------------------------\n");
  printf("          NOTA LEGAL         \n");
  printf("-----------------------------\x1b[0m\n");
  printf("ITEM        QTD   VALOR        \n");
  printf("%-11s %03i \x1b[35m%13.2f\x1b[0m\n", "Banana", 2, 15.00);
  printf("%-11s %03i \x1b[35m%13.2f\x1b[0m\n", "Mandioca", 1, 15.00);
  printf("%-11s %03i \x1b[35m%13.2f\x1b[0m\n", "Maca", 3, 18.00);

  // printf("Banana    2   20.00\n");
  // printf("Mandioca  1   15.00\n");
  // printf("Maça      3   18.00\n");

  printf("-----------------------------\n");
  printf("TOTAL:                  \x1b[35m53.00\x1b[0m\n");
  printf("-----------------------------\n");

  return 0;
}