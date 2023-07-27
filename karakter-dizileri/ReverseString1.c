#include <stdio.h>
#include <string.h>

int reverseString(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;
    char temp;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char beyza[100];
    printf("Please enter a text: ");
    scanf("%s", beyza);

    printf("The statement you entered: %s\n", beyza);
    reverseString(beyza);
    printf("The inverted version of the statement you entered: %s\n", beyza);

    return 0;
}