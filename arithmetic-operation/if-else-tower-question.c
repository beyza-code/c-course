#include <stdio.h>
#include <stdlib.h>

// kullanıcıdan büyük harf tipinde bir karakter girmesini isteyin
// Eğer girdiğiniz karakter büyük harf ise o karakteri küçük harf tipinde
// bastırın
// Eğer girdiğiniz karakter küçük harf ise ekrana hata mesajı bastırın

int main() {

  char character;
  printf("please enter a character\n");
  scanf("%c", &character);

  if ((character >= 'A') && (character <= 'Z')) {
    printf("our lowercase letters %c\n", tolower(character));
  } else {
    printf("You entered a wrong character");
  }

  return 0;
}