#include <stdio.h>
#include <stdlib.h>

//floyd üçgeni oluşturmayı fonksiyon yardımıyla bulan programı yazınız

void floyd(int n)
{
  int i=1;
  int j;
  int a=1;
  while(i<=n)
    {
      j=1;
      while(j<=1)
        {
          printf("%3d",a);
          a++;
          j++;
        }
      printf("\n");
      i++;
    }
  
}
int main(){

  int line;
  printf("Please enter the amount of line for floyd triangle\n");
  scanf("%d",&line);
  floyd(line);
  return 0;
}