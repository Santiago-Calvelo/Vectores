#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int meses[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int d, m;
    printf("Ingrese el mes y el dia: ");
    scanf("%d", &m);
    scanf("%d", &d);

    int c;

    for (int i = m-2; i >= 0; i--) {
        c += meses[i];
    }

    printf("El dia %d del mes %d es el dia %d del año", d, m, d+c);
}