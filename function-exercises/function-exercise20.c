#include <stdio.h>
#include <stdlib.h>

// Kullanıcı tarafından bölünen ve bölen değerleri girilerek bölme işlemi
// yapılmak istenmektedir. Buna göre aşağıda verilen prototipi kullanarak bölüm
// ve kalanın elde edilmesini sağlayan C programını yazınız.
// void bölmeislemi(int bölünen,int bölen)

void divisionProgress(int divided,int divide){

  int left,division;
  left=divided%divide;
  division=divided/divide;
  printf("Left is = %d")

}

int main() { 

  int divide,divided;
  printf("Please enter the number will be divided\n");
  scanf("%d",&divided);
  printf("Please enter the divide\n");
  scanf("%d",&divide);
  divisionProgress(divided,divide);
  return 0; 
}