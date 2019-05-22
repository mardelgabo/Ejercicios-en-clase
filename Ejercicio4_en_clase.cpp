#include <stdio.h>
#include <conio.h>

main() {
	
	int valor,valor_mayor = 0,valor_menor=0,i;
	
	do {
		printf("Ingrese la edad del alumno, para terminar ingrese una edad negativa \n");
		scanf("%d",&valor);
		
	
		
		if (valor>=valor_mayor) {
			valor_mayor=valor;
			++i;
		}
		if ((valor<valor_mayor)&&(valor>=0)) {
			valor_menor=valor;
			++i;
		}
	}
	while(valor>=0);
	
	
	printf("La cantidad de alumnos en el curso es %d \n",i);
	printf("La edad del alumno mas joven es %d \n",valor_menor);
	printf("La edad del alumno mas viejo es %d \n",valor_mayor);
	getche();
	
	
}
