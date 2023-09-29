#include <stdio.h>
#include <stdlib.h>
#include <time.h> // time fonksiyonunu kullanmak için eklenmiş

// Bilgisayar tarafından rasgele üretilen N adet sayı bir dizide
// tutulmaktadır. Dizi içerisinde istenilen bir değerin dizideki sıra numarası
// girilerek ilgili sırada bulunan dizi değerinin silinmesini sağlayan C
// programını yazınız.

void deleteRecord(int A[], int row, int numberOfElements) {
  int i;
  if (row >= numberOfElements + 1) {
    printf("please enter a valid row number\n");
  } else {
    for (i = row - 1; i < numberOfElements - 1; i++) {
      A[i] = A[i + 1];
    }
    printf("Status after deletion:\n");
    for (i = 0; i < numberOfElements - 1; i++) {
      printf("%d ", A[i]);
    }
    printf("\n");
  }
}

int main() {
  int n;
  int i;
  int rowNumber;
  printf("How many numbers will be created?\n");
  scanf("%d", &n);
  int serie[n];
  srand(time(0));
  for (i = 0; i < n; i++) {
    serie[i] = rand() % 100;
    printf("%d\n", serie[i]);
  }
  printf("Please enter the row of the number to be deleted\n");
  scanf("%d", &rowNumber);
  deleteRecord(serie, rowNumber, n);

  return 0;
}