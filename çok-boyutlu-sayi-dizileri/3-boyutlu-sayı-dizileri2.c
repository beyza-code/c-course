#include <stdio.h>
#include <stdlib.h>

// 3 Boyutlu sayı dizileri pekiştirme
// Kullanıcıdan 2 adet 3'e 2'lik matris değerini alınız bunları bir 3 boyutlu
// sayı dizisine atayınız.Hangi indexte hangi değer var consola bastırınız

int main() {
  int beyza[2][3][2];
  int i, j, k;
  printf("Please enter 12 single number\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 2; k++) {
        scanf("%d", &beyza[i][j][k]);
      }
    }
  }
  printf("The values you entered\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 2; k++) {
        printf("beyza[%d][%d][%d]=%d\n", i, j, k, beyza[i][j][k]);
      }
    }
  }

  return 0;
}