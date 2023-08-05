#include <stdio.h>
#include <stdlib.h>

// While döngüsü kullanarak girdiğiniz sayıdan 0' a kadar birer birer azalan bir
// program yazın.

int main() {

  int number;

  printf("Please enter a value\n");
  scanf("%d", &number);

  while (number != 0) {

    printf("%d\n", number);
    number = number - 1;
  }
  return 0;
}