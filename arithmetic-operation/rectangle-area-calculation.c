#include <stdio.h>
#include <stdlib.h>

// Kullanıcıdan aldığı tam sayı kenar uzunlukları (a,b) ve yükseklik(h)
// bilgisini kullanarak bir dikdörtgen prizmanınn sırasıyla taban alanını ,
// yanal alanlarının toplamını, toplam alanını ve hacmini ekrana bastıran
// programın C kodunu yazınız

int main() {
  int length1, length2, height;
  printf("Please enter lenghth1, length2 and height \n");
  scanf("%d%d%d", &length1, &length2, &height);

  printf("Footprint: %d\n", length1 * length2);
  
  printf("Total lateral area: %d\n", 2 * length1 * height + 2 * length2 * height);
  
  printf("Total area: %d\n", 2 * length1 * length2 + 2 * length1 * height + 2 * length2 * height);

  printf("Volume: %d",length1*length2*height);
  return 0;
}