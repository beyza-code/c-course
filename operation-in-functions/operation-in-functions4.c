#include <stdio.h>
#include <stdlib.h>

// Bir fonksiyon yazın
// Bu  fonksiyon ; toplama ,çıkarsam ,çarpma ,bölme temel dört işlemleri yapsın
// (+,-,*,/) işlemler için switch case yapısını kullanın yukardaki fonksiyonu
// değişkenin değeriyle çağıran bir C programı yazın. aynı programı değişkenin
// adresiyle çağırma yöntemini kullanarak değiştirin

void calcul(float one, float two, char operation, float *transactionResult) {
  switch (operation) {
  case '+': {
    *transactionResult = one + two;
    break;
  }
  case '-': {
    *transactionResult = one - two;
    break;
  }
  case '/': {
    *transactionResult = one / two;
    break;
  }
  case '*': {
    *transactionResult = one * two;
    break;
  }
  }
}
int main() {
  float firstNumber, secondNumber;
  char operation;
  float result;
  printf("Which operation do you wanna do?\n");
  scanf("%c", &operation);
  printf("Please enter two numbers\n");
  scanf("%f%f", &firstNumber, &secondNumber);
  calcul(firstNumber, secondNumber, operation, &result);
  printf("First number %.2f second number %.2f operation %c result %.2f",
         firstNumber, secondNumber, operation, result);
  return 0;
}