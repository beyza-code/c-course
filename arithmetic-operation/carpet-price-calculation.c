#include <stdio.h>
#include <stdlib.h>
#define UNIT 40
#define effortPrice 200

// Bir öğrenci evinde  öğrenciler salonu halı ile kaplatmak istemektedir,
// döşenecek halının metrekaresi 40 TL'dir.Ayrıca halıcı salonu döşemek için 200
// TL işçilik almaktadır. Buna göre metrekareyi girdi olarak alan halıcıya
// ödenmesi gereken toplam tutarı hesaplayan C programını yazınız.
int main() {

  float squareMeter;
  float price;

  printf("Please enter the square meters of the living room\n");
  scanf("%f", &squareMeter);
  price = squareMeter * UNIT + effortPrice;
  printf("Total price is %.3f", price);

  return 0;
}