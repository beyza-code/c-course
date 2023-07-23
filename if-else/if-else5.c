#include <stdio.h>
#include <stdlib.h>

// Kullanıcıdan iki adet sayı alınız büyüklük küçüklük durumuna göre ekrana bastırma işleminmi iç içe if yapısını kullanarak yapınız

int main() {

  int number1;
  int number2;
  
  printf("Please enter 2 numbers\n");
  
  scanf("%d",&number1);
  
  scanf("%d",&number2);

  if(number1 >= number2)
  {
      if(number1 == number2)
      {
        printf("Result: %d = %d",number1 , number2);
      }
      else
      {
        printf("Result: %d > %d", number1 ,number2);
      }
  }
  else
  {
    printf("Result %d < %d", number1 , number2);
  }

  return 0;
}