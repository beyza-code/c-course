#include <stdio.h>
#include <stdlib.h>

// A ve B değişkenlerine iki tam sayıyı girdi olarak alan ve yerini değiştiren
// bir C programı yazınız.

int main() {

  int a;
  int b;
  int c;
  printf("Please enter number A\n");
  scanf("%d", &a);
  printf("Please enter number B\n");
  scanf("%d", &b);
  c = a;
  a = b;
  b = c;
  printf("Value of number A is %d\n", a);
  printf("Value of number B is %d", b);
  return 0;
}