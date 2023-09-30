#include <stdio.h>
#include <stdlib.h>

void add(int A[], int rankNu, int value, int numberOFelements) {
    int i;
    if (rankNu >= 1 && rankNu <= numberOFelements + 1) {
        for (i = numberOFelements - 1; i >= rankNu - 1; i--) {
            A[i + 1] = A[i];
        }
        A[rankNu - 1] = value;
        printf("Added version\n");
        for (i = 0; i < numberOFelements + 1; i++) {
            printf("%d\n", A[i]);
        }
    } else {
        printf("Please enter a valid sequence number\n");
    }
}

int main() {
    int i, line;
    int n, value;
    printf("How many numbers will be added?\n");
    scanf("%d", &n);
    int serie[n];
    srand(time(0));
    for (i = 0; i < n; i++) {
        serie[i] = rand() % 100;
        printf("%d\n", serie[i]);
    }
    printf("To which line the number will be added?\n");
    scanf("%d", &line);
    printf("What's the number will be added?\n");
    scanf("%d", &value);
    add(serie, line, value, n);

    return 0;
}