#include <stdio.h>
#include <stdlib.h>

// While döngüsü kullanarak 0 ile kullanıcıdan aldığı n sayısı arasında yer alan
// 17'nin tüm sayı katlarını ekrana bastıran bir program yazınız.

int main() {

  int limit;
  int i;
  int line;
  printf("Please enter a limit\n");
  scanf("%d", &limit);

  i = 0;
  line = 0;
  while (i <= limit) {
    if (i % 17 == 0) {
      printf("%5d", i);
      line++;
      if (line % 10 == 0) {
        printf("\n");
      }
    }
    i++;
  }
  return 0;
}