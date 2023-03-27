#include <stdio.h>

int main(void) {
    int meses[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int n;

    printf("Que mes quiere saber los dias?\n");
    scanf("%d", &n);
    
    printf("El mes tiene %d dias\n", meses[n-1]);
}