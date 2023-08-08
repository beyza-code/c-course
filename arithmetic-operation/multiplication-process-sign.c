#include <stdio.h>
#include <stdlib.h>

// Kullanıcı tarafından girilen iki tam sayının işaretini,sayıları çarpmadan
// bulan bir program yazınız örnek görüntü aşağıdadır.

//-3 , 432
//>>sign(-3*432)=-1

// 10 , 5
//>>sign(10*5)=+1

int main() { 

  int number1;
  int number2;

  printf("Please enter 2 numbers\n");
  scanf("%d%d",&number1,&number2);

  if((number1>0 && number2>0) || (number1<0 && number2<0))
  {
    printf(">> sign (%d*%d)=+1",number1,number2);
  }
  else if((number1>0 && number2<0))
  {
    printf(">> sign(%d*%d)=-1",number1,number2);
  }
  else{
    printf(">> sign(%d*%d)=0",number1,number2);
  }
  
  return 0;
}