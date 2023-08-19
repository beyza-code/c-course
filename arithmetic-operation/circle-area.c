#include <stdio.h>
#include <stdlib.h>
#define PI 3.141

int main() {

  float radius;
  float circleArea;

  printf("Please enter the radius\n");
  scanf("%f", &radius);

  circleArea = PI * radius * radius;
  printf("The area of circle is %f", circleArea);

  return 0;
}