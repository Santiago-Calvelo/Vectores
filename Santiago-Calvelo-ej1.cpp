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
	int n[4];
	double med = 0.0;
	int i;
	
	for (i = 0; i < 4; i++) {
		printf("Ingrese el valor %d del array: ", i);
		scanf("%d", &n[i]);
	}
	bubble(n, 4);
	med = (n[1] + n[2])/2;

	printf("La media es: %.2f\n", med);
	printf("Los numeros utilizados son: ");
	for(i = 0; i < 4; i++) {
		printf("%d ", n[i]);
	}
	printf("\n"); 
}
