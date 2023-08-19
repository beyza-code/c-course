#include <stdio.h>
#include <stdlib.h>

// Bir halıcı çocuklar için 3 ayrı tip halı satmaktadır, bu halıların tip,kodu
// ve metrekare fiyatları aşağıda verilmiştir.
// Halı tipi: twetty , bugs , spiderman
// Kodu:T , B , S
// Metre kare birim fiyatı:18 , 17 , 19
// Sipariş alınan halı tipi ve döşenecek alanın metrekaresi girildiğinde
// ödenmesi gereken ücreti ekrana bastıran C programını yazınız

int main() {

  char code;
  float area;
  float price;
  printf("Carpet type T B S\n");
  scanf("%c", &code);
  printf("Please enter the area\n");
  scanf("%f", &area);
  if (code == 'T') {
    price = area * 18;
  } else if (code == 'B') {
    price = area * 17;
  } else if (code == 'S') {
    price = area * 19;
  } else {
    printf("Code is wrong, please enter something else");
  }
  printf("The price should be paid %f", price);
  return 0;
}