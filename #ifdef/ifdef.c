#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define HELLO

/*#ifdef PI
//succesful code
#else
//else code
#endif

#ifdef PI
printf("C is going good");
#else
printf("C is going great");
#endif*/

int main() {
  int number;
#ifdef HELLO
  number = 2;
  printf("%d",number);
#else
  printf("Please enter a number\n");
  scanf("%d", &number);
#endif
  ("The number you entered %d", number);
  return 0;
}