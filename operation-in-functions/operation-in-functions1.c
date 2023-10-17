#include <stdio.h>
#include <stdlib.h>

//2 adet fonksiyon yazın
//birinci fonksiyon girilen sayının ikinin katı oldugunu gosterir.
//2. fonksiyon girilen sayının 3 katı olduğunu gosterir
//Bu iki fonksiyonu kullanarak bir C programı yazın , bu program kullanıcının girdiği değerin çift olup olmadığını , 3 katı olup olmadığını ,6nın katı olup olmadığını belirlesin ve ekrana yazdırsın.
//Aynı C programını fonksiyonu değişenin adresiyle çağırıp yazın 

int can(int n){
  if(n%2==0)
    return 1;
  else
    return 0;
}
int man (int n ){
  if(n%3==0)
    return 1;
  else
    return 0;
}


int main(){

  int n ;
  printf("please enter a number\n");
  scanf("%d",&n);
  if(can(n)==1){
    printf("The number is even\n");
  }
  if(man(n)==1){
    printf("The number is able to be divisible by 3\n");
  }
  if(can(n)==1 && man(n)==1){
    printf("The number is able to be divisible by 6");
  }

  return 0;
}