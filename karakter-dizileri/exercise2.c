#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Aşağıdakileri içeren bir C programı yazın
//-İki boyutlu bir dizi oluşturun, dizinin elemanları:1,2,3,4,5 olsun
//-Dizinin 4. elemanının 3. karakterini ekrana bastırın

int main() {

  char beyza[100][100] = {"one,two,three,four,five"};

  printf("The fourth element of my series is %c\n", beyza[3]);
  printf("The third character of the fourth element of my series is %c",beyza[3][2]);

  return 0;
}