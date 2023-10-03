#include <stdio.h>
#include <stdlib.h>

// Kullanıcı tarafından girilen bir N pozitif tam sayısının karekökünün
// bulunmasını sağlayan (sqrt() kullanmadan) C programını fonksiyon kullanarak
// yazınız(A= girilen sayı) K=A/2 Karekök=Toplam 1 den 50 ye kadar K^2+A/2K

double findSquareRoot(double N) {
  double squareRoot;
  int i;
  if (N > 0.0) {
    squareRoot = N / 2;
    for (i = 0; i < 50; i++) {
      squareRoot = ((squareRoot * squareRoot) + N) / (2 * squareRoot);
    }
    return squareRoot;
  } else if (N == 0) {
    return 0;
  } else {
    printf("Please enter a valid number\n");
    return -1; 
  }
}

int main() {

  double number;
  printf("Please enter the number of which the square root will be found\n");
  scanf("%lf", &number);
  double result = findSquareRoot(number);
  if (result >= 0) {
    printf("Square root of the number is %.5lf\n", result);
  }

  return 0;
}