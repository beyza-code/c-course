#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
// Kullanıcıdan girilen yarıcap değeri kullanılarak bir dairenin alanını ve
// çevresini hesaplayan fonksiyon prototipi aşağıda verilmiştir. Uygun C
// prograımını ve fonksiyonunu yazınız.
// void hesapla(float yarıcap)

void countIt(radius) {
  float area, environment;
  area = PI * radius * radius;
  environment = 2 * PI * radius;
  printf("the area of the apartment is %.4f\n", area);
  printf("the surroundings of the apartment is %.4f\n", environment);
}

int main() {

  float radius;
  printf("Please enter thee radius\n");
  scanf("%f", &radius);
  countIt(radius);

  return 0;
}