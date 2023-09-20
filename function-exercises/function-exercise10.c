#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen bir N tam sayısına kadar olan tek sayıları ekrana
// listeleyen C programını fonksiyon kullanarak yazınız

void oddNumber(int n){
  int i=0;
  while(i<=n)
    {
      if(i%2==1){
        printf("%d\n",i);
      }
      i++;
    }
}
int main() { 

  int number;
  printf("Please enter a number\n");
  scanf("%d",&number);
  oddNumber(number);
  
  return 0; 
}