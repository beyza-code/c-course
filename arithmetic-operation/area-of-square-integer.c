#include <stdio.h>
#include <stdlib.h>

int main(){

  int edgeLength;
  int area;

  printf("Please enter the edge length of the square\n");
  scanf("%d",&edgeLength);

  area= edgeLength*edgeLength;
  printf("Area = %d",area);

  return 0;
}