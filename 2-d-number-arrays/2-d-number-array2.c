#include <stdio.h>
#include <stdlib.h>
#define CAN 10
//İki boyutlu matriste verilen denkleme göre matrisi bulma

int main(){
  int i;
  int j;
  int n;
  int serie[CAN][CAN];
  printf("How many columns of martix do you want?\n");
  scanf("%d",&n);

  printf("\n\np ");
  for(i=0;i<n;i++){
    printf("%4d",i);
  }
  printf("\nn\n");
  for(i=0;i<n;i++){
    printf("----");
  }
  printf("\n");

  for(i=0;i<n;i++){
    serie[i][i]=1;
    serie[i][0]=1;
    for(j=1;j<1;j++){
      serie[i][j]=serie[i-1][j]+serie[i-1][j-1];
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<=i;j++){
      printf("%4d",serie[i][j]);
    }
  }
  return 0;
}