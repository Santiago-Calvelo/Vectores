#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n[5];

    for (int i = 0; i < 5; i++) {
        printf("Ingrese el valor %d del array: ", i);
        scanf("%d", &n[i]);
    }

    for (int i = 4; i >= 0; i--) {
        printf("%d ", n[i]);
    }
    printf("\n");
}