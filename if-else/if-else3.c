#include <stdio.h>
#include <stdlib.h>

int main (){
// -Ask the user to enter a number, write a program that presses on the screen whether the number is odd or even using if else
  
  int number;
  
  printf("Please enter a number\n");
  scanf("%d",&number);

  if(number%2 == 0){
    printf("%d is a even number", number);
  }
  else{
    printf("%d is a odd number", number);
  }
}