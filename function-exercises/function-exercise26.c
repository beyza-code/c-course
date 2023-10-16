#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Kenar uzunlukları birbirinden farklı eşkenar bir üçgenin alanının bulunmasını
// sağlayan C programını fonksiyon kullanarak yazınız
// u=(a+b+c)/2
// Alan^2=u*(u-a)*(u-b)*(u-c)

float areaOftriangle(int A, int B, int C) {
  float u, area;
  u = (A + B + C) / 2;
  area = sqrt(u * (u - A) * (u - B) * (u - C));
  return area;
}

int main() {

  int a, b, c;
  printf("Please enter side lengths\n");
  scanf("%d%d%d", &a, &b, &c);
  printf("area of equilateral triangle =%.2f",(areaOftriangle(a,b,c)));
  return 0;
}