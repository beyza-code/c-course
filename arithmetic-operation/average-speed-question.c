#include <stdio.h>
#include <stdlib.h>
#define ROAD 450

// Bir arabanın Ankaradan İstanbul(450km)'a varış zamanını saat cinsinden girdi
// olarak alan ve arabanın ortalama hızını hesaplayan bir C programı yazınız

int main() {

  float average_speed;
  float hour;
  printf("Please enter the time you spent between Ankara and Istanbul\n");
  scanf("%f", &hour);
  average_speed = ROAD / hour;
  printf("average speed of the car is %f", average_speed);

  return 0;
}