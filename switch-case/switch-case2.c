#include <stdio.h>

// Sitch- Case kullanarak 4 işlem

main() {

  float a, b;
  char op;
  printf("Please enter an operator\n");
  scanf("%c", &op);

  printf("Please enter 2 letters\n");
  scanf("%f%f", &a, &b);

  switch (op) {
  case '+':
    printf("%.2f + %.2f = %.2f", a, b, a + b);
    break;
  case '-':
    printf("%.2f - %.2f = %.2f", a, b, a - b);
    break;
  case '/':
    printf("%.2f / %.2f = %.2f", a, b, a / b);
    break;
  case '*':
    printf("%.2f * %.2f = %.2f", a, b, a * b);
    break;
  default:
    printf("You logged in incorrectly");
  }
  return 0;
}