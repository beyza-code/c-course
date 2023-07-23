#include <stdio.h>

// 0'dan 10'a Kadar olan tek ve çift sayıları while döngüsü kullanarak
// bastırınız

int main() {

  int i = 0;
  while (i < 10) {
    printf("%d\n", i);
    i = i + 2;
  }
  int b = 0;
  while (b < 10) {
    printf("%d\n", b + 1);
    b = b + 2;
  }
  return 0;
}