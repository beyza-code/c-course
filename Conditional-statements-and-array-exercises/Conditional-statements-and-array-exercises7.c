#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen bir cümlenin alt alta yazılmasını sağlayan C programını
// yazınız.

int main() {
  char sentence[100];
  int i;
  printf("Lütfen bir cümle girin:\n");
  fgets(sentence, sizeof(sentence), stdin);

  for (i = 0; sentence[i] != '\0'; i++) {
    if (sentence[i] != '\n') {
      printf("%c\n", sentence[i]);
    }
  }

  return 0;
}