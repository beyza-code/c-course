#include <stdio.h>
#include <stdlib.h>

void drawShape(int edge, char character) {
  int i, j;
  for (j = edge; j > 0; j--) {
    for (i = 1; i <= edge; i++) {
      printf(" ");
    }
    for (i = 1; i <= 2 * j; i++) {
      printf("%c", character);
    }
    printf("\n");
  }
}

//Şekil çizme

int main() {
  int edge;
  int character;
  printf("Please enter the character will be entered\n");
  scanf("%d", &character);
  printf("Edge length:\n");
  scanf("%d", &edge);

  printf("\n\n\n");
  drawShape(edge, character);

  return 0;
}