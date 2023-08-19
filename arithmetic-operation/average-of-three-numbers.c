#include <stdio.h>
#include <stdlib.h>

// Kullanıcıdan 3 sayı alan ve bunun ortalamasını veren bir C programı yazınız

int main() {
  float x;
  float y;
  float z;
  float average;
  printf("Enter 3 numbers\n");
  scanf("%f%f%f", &x, &y, &z);
  average = (x + y + z) / 3;
  printf("Average is %f", average);

  return 0;
}