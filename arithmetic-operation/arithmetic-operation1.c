#include <stdio.h>
#include <stdlib.h>

// Soru-1
// Kullanıcıdan girmesini istediği a,b,c ve x değerlerini kullanarak aşağıdaki
// aritmetik işlemin sonucunu hesaplayın ve ekraba basan C programını yazınız.
// ax^2 + bx + cx = ?

int main() {

  int a, b, c, x;
  int result;

  printf("Please enter a , b , c , x\n");
  scanf("%d%d%d%d", &a, &b, &c, &x);

  result = a * x * x + b * x + c;
  printf("ax^2 + bx + c is %d", result);

  return 0;
}
