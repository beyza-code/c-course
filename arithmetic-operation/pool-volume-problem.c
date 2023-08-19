#include <stdio.h>
#include <stdlib.h>

// Bir havuzun enini,boyunu,yüksekliğinin metre cinsinden girdi olarak alan ve
// havuzun dolması için ne kadar suyun gerekli olduğunu hesaplayan bir C
// programı yazın

int main() {
  float width;
  float length;
  float height;
  float capacity;
  printf("Pool's width, length,heigth :\n");
  scanf("%f%f%f", &width, &length, &height);
  capacity = width * length * height;
  printf("The pool can take %f much water", capacity);

  return 0;
}