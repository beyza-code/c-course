#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen poz,t,f bir tam sayının tek mi çift mi olup olmadığını
// fonksiyon kullanarak bulan C kodunu yazınız.
int oddevenNumber(int n) { return n % 2; }
int main() {

  int number;
  int result;
  printf("Please enter a number\n");
  scanf("%d", &number);
  result = oddevenNumber(number);
  if (result == 1) {
    printf("Our number is odd\n");
  } else {
    printf("Our number is even\n");
  }

  return 0;
}