#include <stdio.h>
#include <stdlib.h>
#define MIL 1.609

// Bir arabanın gittiği yolu mil cinsinden girdi olarak alan ve bnu km'ye
// çeviren bir program yazın(1mil=1.609km)

int main() {
  float mil_path;
  float km_path;
  printf("The path the car took\n");
  scanf("%f", &mil_path);
  km_path = mil_path * MIL;
  printf("Car has traveled %.2f km distance.", km_path);

  return 0;
}