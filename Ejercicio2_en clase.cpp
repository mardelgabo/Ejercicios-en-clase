/* Solicitar que se ingresen 5 valores enteros. Calcular y mostrar la suma y el promedio de todos.
	los 5 valores deberan ingresar en la misma variable. Usar una estructura de repetición para el ingreso de los datos */
	

#include <stdio.h>
#include <conio.h>

main () {
	int dato,n=5,suma =0,cont;
	float promedio;
	
	
	for (cont=0; cont < n ; ++cont) {
		printf("Ingrese un numero entero \n");
		scanf("%d", &dato);
		suma +=dato;
	}
	
	promedio = (float)suma/n;
	printf("La suma de los valores ingresados es %d \n",suma);
	printf("El promedio es %f \n", promedio);
	
	printf("Presione una tecla para salir \n");
	getche();
	
	
}
