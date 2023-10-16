#include <stdio.h>
#include <stdlib.h>

// Kullanıcıdan bir cümle girmesini isteyin. Girilen cümle içindeki harflerin
// kaç kere yazıldığını ekrana bastırın

int main(void) {
  char c;
  int count[26] = {0};
  int can, character, i;
  character = 0;
  printf("please enter a text and press to the screen\n");
  while ((c = getchar()) != 'n') {
    can = c - 'a';
    if (can >= 0 && can < 26)
      count[can]++;
    else
      character++;
  }
  printf("The text you entered has %d character\n", character);
  for (i = 0; i < 26; i++) {
    printf("%d time %c\n", count[i], 'a' + i);
  }

  return 0;
}