#include <stdio.h>
#include <stdlib.h>

int main(){

  int
beyza[2][3][4]={{{3,4,2,3},{0,-3,9,11},{23,12,23,2}},{{3,4,2,3},{0,-3,9,11},{23,12,23,2},{5,6,7,3}}};

  printf("%d\n",beyza[1][2][3]);
  
  return 0;
}