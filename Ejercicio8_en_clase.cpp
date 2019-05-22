/* 
Solicitar se ingresen dos valores enteros, y luego, llenar un arreglo con N valores enteros. Calcular y mostrar:
El promedio de los datos del arreglo que sean mayores que el segundo valor entero solicitado antes del arreglo.
Calcular el porcentaje de los datos del arreglo que sean menores que el primer valor entero ingresado, respecto de N.
*/

#include <stdio.h>
#include <conio.h>

main() {
	int A,B,n,i,valor,cont=0,cont2=0,suma=0;
	float prom,porcentaje;
	
	printf("Ingrese el primer valor \n");
	scanf("%d",&A);
	printf("Ingrese el segundo valor \n");
	scanf("%d",&B);
	printf("Ingrese la cantidad de elementos del arreglo \n");
	scanf("%d",&n);
	
	int arreglo[n];
	
	for (i=0;i<n;++i){
		printf("Ingrese el elemento %d: \n",i+1);
		scanf("%d",&valor);
		arreglo[i]= valor;
		if (arreglo[i]>B) {
			++cont;
			suma+= arreglo[i];
		}
		if (arreglo[i]<A) {
			++cont2;
		}
	}
	prom = (suma/cont);
	porcentaje = ((cont2*100)/n);
	printf("El promedio de los valores mayores al segundo elemento ingresado es: %f \n",prom);
	printf("El porcentaje de elementos menores que el primer valor ingresado, respecto de n es: %f \n",porcentaje);
	getche();
	}
