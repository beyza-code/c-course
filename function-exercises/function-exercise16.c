#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sortIt(int A[], int adet) {
    int i, j, temporary;
    for (i = 0; i < adet - 1; i++) {
        for (j = 0; j < adet - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                temporary = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temporary;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Lütfen oluşturulacak sayı miktarını girin: ");
    scanf("%d", &n);
    int serie[100];
    srand(time(0));
    for (i = 0; i < n; i++) {
        serie[i] = rand() % 100;
        printf("%d\n", serie[i]);
    }
    printf("Seri sıralı hali:\n");
    sortIt(serie, n);
    for (i = 0; i < n; i++) {
        printf("%d\n", serie[i]);
    }
    return 0;
}