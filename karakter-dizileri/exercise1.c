#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//iki adet karakter dizisi oluşturun:birincisi"bonne" ikincisi "soiree"
//Strcpy ve strncpy kullanarak iki karakter dizisini birleştirin, elde ettiğiniz karakter dizisini ekrana basın.

int main() {
  char period1[] = "Bonne";
  char period2[] = "Soiree";
  char sonuc[100] = "";

  strcpy(sonuc, period1);
  strncpy(sonuc + 3, period2, 5);
  printf("%s", sonuc);

  return 0;
}