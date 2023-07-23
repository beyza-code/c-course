#include <stdio.h>
/*                           If- Else Exercises-1
  - Kullanıcıdan 3 adet sayı girmesini isteyin ve bunu if else if 
     else yapısı ile bulan programı yazınız
*/
int main(){

  int a,b,c; 
  printf("Lutfen 3 adet sayı giriniz\n");
  scanf("%d",&a);
  scanf("%d", &b);
  scanf("%d",&c);

  if(a > b && a > c){
   printf("%d sayisi en buyuktur",a);
  }
  else if(b> a && b >c){
   printf("%d sayisi en buyuktur",b);
  }
  else if(c > a && c> b){
   printf("%d sayisi en buyuktur",c);
  }
  else{
   printf("Tum sayilar birbirine esittir");
  } 

  
  return 0;
}