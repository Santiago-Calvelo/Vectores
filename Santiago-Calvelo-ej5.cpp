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

    printf("Desde el dia %d del mes %d, faltan %d dias para que acabe el año", d, m, 365-(d+c));
}