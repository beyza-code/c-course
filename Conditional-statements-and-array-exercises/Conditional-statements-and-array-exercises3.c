#include <stdio.h>
#include <stdlib.h>
#define book_tax 4.0
#define stapleFood_tax 5.6
#define luxury_tax 19.6
#define BOOK 0
#define STAPLEFOOD 1
#define LUXURYPRODUCT 2

//Üç adet ürünümüz var: Kitap, Temel Gıda ve Lüks
// Devlet her üç gruba farklı oranlarda vergi uyguluyor.kitap için %4.0,temel
// gıda için %5.6 ,lüks ürün gammı için %19,6 Her ürünün bir kodu var: Kitabın
// kodu 0, temel gıdanın kodu 1, lüks ürünün kodu 2 Kullanıcıdan istediğiniz
// ürünün kodunu ve fiyatını isteyen daha sonra switch case yapısını kullanarak
// son fiyatı ekrana bastıran c kodunu yazınız. aynı programı if-else kullanarak
// yazınız

int main() {

  int code;
  float price;
  printf("Please enter the price and the code of the product\n");
  scanf("%f %d", &price, &code);

  printf("The seller price of the product :");

//  switch (code) {
// case BOOK:
//  printf("The price is %f", price + price * book_tax / 100);
//  break;
//case STAPLEFOOD:
//  printf("The price is %f", price + price * stapleFood_tax / //100);
//  break;
//case LUXURYPRODUCT:
//  printf("The price is %f", price + price * luxury_tax / 100);
//}

if (code == BOOK) {
  printf("the price is :%f\n", price + price * book_tax / 100);
} else if (code == STAPLEFOOD) {
  printf("The price is : %f\n", price + price * stapleFood_tax / 100);
} else if (code == LUXURYPRODUCT) {
  printf("The price is : %f\n", price + price * luxury_tax / 100);
}
return 0;
}
