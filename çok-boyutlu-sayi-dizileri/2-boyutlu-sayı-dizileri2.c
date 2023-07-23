#include <stdio.h>
#include <stdlib.h>

// 2 Boyutlu sayı dizileri pekiştirme

int main() {

  int dizi1[3][4] = {{1, 2, 5, 7}, {5, 4, 6, 8}, {7, 1, 6, 5}};
  int dizi2[3][4] = {{1, 8, 5, 7}, {1, 2, 4, 6}, {3, 7, 3, 1}};
  int total[3][4];
  int i, j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      total[i][j] = dizi1[i][j] + dizi2[i][j];
    }
  }
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++){
      printf("%4d",total[i][j]);
    }
  }
}