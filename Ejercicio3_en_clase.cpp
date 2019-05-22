#include <stdio.h>
#include <conio.h>


 
 main () {
 	int i,valor,j=0,k=0,suma=0,n,a[n],cant;
 	float prom, porcentaje;
 	
 	printf("Ingrese la cantidad de alumnos \n");
 	scanf("%d",&n);
 	
 	for (i=0;i<n;++i) {
 		printf("Ingrese la edad del alumno %d : \n",i+1);
 		scanf("%d",&valor);
 		a[i]= valor;
 		if ((valor>=20)&&(valor<=25)) {
 			++j;
 		}
 		if (valor>30) {
 			++k;
 		}
 	}
 	
 	for (i=0;i<n;++i) {
 		suma += a[i];
 	}
 	
 	prom = suma/n;
 	porcentaje = ((j*100)/n);
 	cant = k;
 	
 	printf("El promedio de edad de todos los alumnos es %f \n",prom);
 	printf("El porcentaje de alumnos cuyas edades estan entre 20 y 25 anos, ambos inclusive es %f \n",porcentaje);
 	printf("La cantidad de alumnos mayores a 30 años es %d \n",cant);
 	getche ();
 	
 	
 	
 	
 	
 }
 
 
