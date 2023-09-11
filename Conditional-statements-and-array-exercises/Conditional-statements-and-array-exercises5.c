#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Klavyeden girilen bir cümlenin kaç karakterden oluştuğunu strlen() fonksiyonu
// kullanmadan ekrana bastıran C kodunu yazınız

int main() {
  char sentence[100];
  int i = 0;

  printf("Lütfen bir cümle giriniz:\n");
  fgets(sentence, sizeof(sentence), stdin);

  while (sentence[i] != '\0' && sentence[i] != '\n') {
    i++;
  }

  printf("Cümledeki karakter sayısı: %d\n", i);

  return 0;
}
