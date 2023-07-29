#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define NUMBER 5

int main(){

  #if (NUMBER == 5)
  printf("The number we have %d",NUMBER);
  #else
  printf("Te number we have is different than 5");
  #endif

  
  return 0;
}