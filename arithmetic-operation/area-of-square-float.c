#include <stdio.h>
#include <stdlib.h>

int main() {

  float edgeLength;
  float area;

  printf("Please enter the edge length of the square\n");
  scanf("%f", &edgeLength);

  area = edgeLength * edgeLength;
  printf("Area = %.2f", area);

  return 0;
}