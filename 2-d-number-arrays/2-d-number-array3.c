#include <stdio.h>
#include <stdlib.h>
#define CAN 10
// 10 a 10 boyutunda bir çarpım tablosu oluşturun ve ekrana bastırın

int main(){
  int i,j;
  printf("%4c",'I');

  for(i=1;i<=CAN;i++){
    printf("%4d",i);
  }
  printf("\n");
  printf("-----------");
  for(i=1;i<=CAN;i++){
    printf("----");
  }
  for(i=1;i<CAN;i++){
    printf("%d",i);
    for(j=1;j<CAN;j++){
      printf("%d",i*j);
    }
    printf("\n");
  }
  
  return 0;
}