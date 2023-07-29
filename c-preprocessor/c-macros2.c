#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define circleArea(r) (PI*r*r)
int main(){

  float radius,area;
  printf("please enter the radius value\n");
  scanf("%f",&radius);
  area=circleArea(radius);
  printf("Our area is %.2f units",area);
  
  
  
  return 0;
}