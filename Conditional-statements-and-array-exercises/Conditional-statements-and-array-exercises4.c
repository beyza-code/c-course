#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen bir cümledeki kelime sayısını bulan C programını yazınız.

int main() {

  char sentence[100];
  int i = 0;
  int timer = 0;
  printf("Please enter a sentence\n");
  fgets(sentence);

  while (sentence[i]) {
    if (sentence[i] == 32) {
      timer++;
    }
    i++;
  }
  printf("The number of words in the entered sentence is %d", timer + 1);
  return 0;
}