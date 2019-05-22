/*
Llenar un arreglo con N datos enteros. Calcular y mostrar:
El valor y el orden de los elementos cuyo valor sea menor que el ultimo dato cargado en el arreglo.
*/

#include <stdio.h>
#include <conio.h>

main() {
	int i,n,valor;
	
	printf("Ingresar la cantidad de elementos del arreglo: \n");
	scanf("%d",&n);
	
	int A[n];
	
	for (i=0;i<n;++i) {
		printf("Ingrese el valor del elemento %d: \n",i+1);
		scanf("%d",&valor);
		A[i]=valor;
	}
	printf("Los valores menores que el ultimo elemento ingresado son: \n");
	for (i=0;i<n;++i) {
	
		if (A[i]<A[n-1]) {
			printf("valor: %d, orden: %d \n",A[i],i+1);
		}
	}
	getche();
}
