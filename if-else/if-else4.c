#include <stdio.h>
#include <stdlib.h>

// kisinin secimlerde yasal olarak oy kullanıp kullanamayacagını belirleyen bir program yazınız

int main (){
  
  float yas;
  
  printf("Lutfen yasınızı giriniz\n");
  
  scanf("%f",&yas); 

  if (yas >= 18){
    printf("Yasal olarak Oy kullanabilirsiniz");} 
    
  else{
    printf(" Oy kullanamazsiniz");
  }
}