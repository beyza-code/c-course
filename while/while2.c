#include <stdio.h>
// 10'dan başlayıp bir azalta azalta 1' e kadar olan sayıları ekrana bastırınız

int main() {
  int i = 10;
  while (i > 0) {
    printf("%d\n", i);
    i--;
  }
}