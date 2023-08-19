#include <stdio.h>
#include <stdlib.h>

int main()
{

  // İki sayının çarpım değerinin pozitif mi negatif mi olduğunu gösteren bir C
  // programı yazın. Her iki sayıdan biri 0 ise  çarpım değeri 0 dır. Her iki
  // sayı negatif veya pozitifse çarpım değeri pozitiftir. Değilse çarpım değeri
  // neganiftir.

  int number1;
  int number2;

  printf("Please enter two numbers :\n");
  scanf("%d", &number1);
  scanf("%d", &number2);

  if ((number1 == 0) || (number2 == 0))
  {
    printf("multiply value is 0.\n");
  }
  else if (((number1 < 0) && (number2 < 0)) || ((number1 > 0) && (number2 > 0)))
  {
    printf("multiplication value is positive.\n");
  }
  else
  {
    printf("multiplication is negative.");
  }
  return 0;
}