#include <stdio.h>
#include <stdlib.h>

void swap(int a[], int i, int j) {
  int temp = a[i];
  a[i] = a[j];
  a[j] = temp;
}

void bubble(int a[], int lenght) {
  for (int i = 0; i < lenght; i++) {
    for (int j = 0; j < lenght-1; j++) {
      if (a[j] > a[j+1]) swap(a,j,j+1);
    }
  }
}

int main(void) {
	int n[10];
	double med = 0.0;
	int i;
	
	for (i = 0; i < 10; i++) {
		printf("Ingrese el valor %d del array: ", i);
		scanf("%d", &n[i]);
	}
	bubble(n, 10);
	med = (n[4] + n[5])/2;

	printf("La media es: %.2f\n", med);
	printf("Los numeros mayores a la media son: ");
	for(i = 0; i < 10; i++) {
		if (n[i] > med) printf("%d ", n[i]);
	}
	printf("\n"); 
}
