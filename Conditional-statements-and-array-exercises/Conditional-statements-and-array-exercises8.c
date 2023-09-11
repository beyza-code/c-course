#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// klavyeden girilen kelimelerin harflerini bir harf arttıracak şeilde ekrana
// bastırabilen C kodunu yazınız

int main() {

  char word[100];
  int i = 0;
  int j = 0;
  printf("Please enter a word\n");
  fgets(word, sizeof(word), stdin);

  while (i < strlen(word)) {
    j = 0;
    while (j <= i) {
      printf("%c", word[j]);
    }
    printf("\n");
    i++;
  }

  return 0;
}