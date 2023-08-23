#include <stdio.h>
#include <stdlib.h>
#define rabbitspeed 0.038
#define birdspeed 0.012

// Bir çiftlikte tavşanların sayısı 1042 iken, kuşların sayısı 2272'dir.Bir
// yılda tavşanlar %3,8 oranında çoğalırken, kuşlar %1,2 oranında
// çoğalmaktadır.Tavşanların kuşların sayısını  kaç yıl sonra geçeceğini bulan
// bir C programı yazınız.

int main() {
  float rabbit = 1042;
  float bird = 2272;
  int i;

  for (i = 1; rabbit < bird; i++) {
    rabbit += rabbit * rabbitspeed;
    bird += bird * birdspeed;

    printf("%d.year : rabbit=%.2f bird=%.2f\n", i, rabbit, bird);
  }
  printf("Rabbits pass birds in %d year", --i);

  return 0;
}