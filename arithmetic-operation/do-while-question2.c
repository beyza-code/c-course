#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Kullanıcıdan pozitif bir sayı girmesini isteyin
  // Girdiği sayının karakökünü hesaplayın
  // Girdiği sayı negatifse yeni bir sayı girmesini isteyin
  // Girdiği sayı 0 ise program çalışmayı durdursun

  float number;

  do
  {
    printf("Enter a positive number :\n");
    scanf("%f", &number);

    if (number < 0)
    {
      printf("Please enter a positive number :\n");
    }
    if (number < 0)
      continue;
    printf("square root of number :%f\n", sqrt(number));

  } while (number);

  return 0;
}