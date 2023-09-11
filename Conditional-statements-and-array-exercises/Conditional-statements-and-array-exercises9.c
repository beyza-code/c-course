#include <stdio.h>
#include <stdlib.h>

// Klavyeden küçük harflerle girilen bir cümle içerisinde en fazla kullanılan
// karakterin bulunmasını sağlayan c programını yazın.

int main() {

  char sentence[150];
  int i = 0;
  int most;
  int letter;
  int littleletter[26] = {0};
  printf("Please enter a sentence\n");
  fgets(sentence, sizeof(sentence), stdin);

  while (sentence[i]) {
    if (sentence[i] >= 'a' && sentence[i] <= 'z') {
      littleletter[sentence[i] - 'a']++;
    }
    i++;
  }
  most = littleletter[0];
  for (i = 1; i < 26; i++) {
    if (littleletter[i] != 0) {
      if (littleletter[i] > most) {
        most = littleletter[i];
        letter = i + 'a';
      }
    }
  }
  printf("The letter entered most is %c", letter);
  return 0;
}