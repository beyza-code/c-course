#include <stdio.h>
#include <stdlib.h>
#define FULL 150

// Bir sınıfta bulunan öğrencilerin hangisinin boyunun 150cmye en yakın olduğunu
// hesaplayan bir program yazınız.Bu program öğrenci numaralarını ve santimetre
// cinsinden boy uzunluklarını girdi olarak almalıdır öğrenci sayısı negatif bir
// sayı girilinceye kadar veri girişi devam etmelidir

int main() {

  int no, height, difference, min_height, min_no;

  printf("Student no :\n");
  scanf("%d", &no);

  printf("Student height :\n");
  scanf("%d", &height);

  min_no = no;
  difference = abs(height - FULL);

  while (no > 0) {
    printf("\nStudent no :");
    scanf("%d", &no);

    printf("\nStudent height :");
    scanf("%d", &height);

    if (abs(height - FULL) < difference) {
      difference = abs(height - FULL);
      min_no = no;
      min_height = height;
    }
  }
  printf("\n%d numbered student with %d cm height is closest to %d cm", min_no,
         min_height, FULL);

  return 0;
}