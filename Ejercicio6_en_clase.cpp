/* Solicitar la cantidad de alumnos de un curso y llenar un arreglo con la nota de matematica de cada alumno.
	Determinar y mostrar:
		A_ el promedio de todas las notas
		B_ cantidad de alumnos aprobados (se aprueba con 6)
		C_ cantidad de alumnos reprobados
		D_ promedio de las notas aprobadas
		E_ porcentaje de alumnos que saco una nota inferior o igual a 4 respecto del total de alumnos
		F_ cantidad de alumnos con nota par
		G_ determinar la nota minima y maxima obtenida
		H_ mostrar que alumnos obtuvieron la maxima nota
		
*/


#include <stdio.h>
#include <conio.h>

main() {
	
	int n,i, suma =0,aprobados =0,reprobados=0, aplazados=0, pares=0, mayor_nota=0, menor_nota=10, suma_nota=0;
	float prom, prom_aprobados,porcentaje;
	
	printf ("Ingrese la cantidad de alumnos del curso \n");
	scanf("%d",&n);
	
	int notas[n];

	for (i=0;i<n;++i) {
		printf("Ingrese la nota del alumno %d \n",i+1);
		scanf("%d",&notas[i]);
		
		suma += notas [i];
		
		if (notas[i] >= 6) { 
				++aprobados;
				suma_nota += notas[i];
			
		}
		else {
			++reprobados;
		}
		if (notas[i]<=4) {
			++aplazados;
		}
		if (notas[i]%2 ==0) {
			++pares;
		}
		if (notas[i]>= mayor_nota) {
			mayor_nota = notas[i];
		}
		if (notas[i]<menor_nota){
			menor_nota= notas[i];
	
		}
		
	}
	prom=(suma/n);
	prom_aprobados =(suma_nota/aprobados);
	porcentaje= ((aplazados *100)/n);
	
	printf("EL promedio de todas las notas es %f \n",prom);
	printf("La cantidad de alumnos aprobados es %d \n",aprobados);
	printf("La cantidad de alumnos reprobados es %d \n",reprobados);
	printf("El promedio de las notas aprobadas es %f \n",prom_aprobados);
	printf("El porcentaje de alumnos que saco una nota igual o inferior a 4 es %f \n",porcentaje);
	printf("La cantidad de alumnos con nota par es %d \n",pares);
	printf("La nota minima es %d \n",menor_nota);
	printf("La nota maxima es %d \n",mayor_nota);
	
	for (i=0;i<n;++i) {
		if (notas[i]== mayor_nota) {
			
			printf("El alumno %d obtuvo la mayor nota \n",i+1);
		}
	}
	
	printf("Presione una tecla para salir \n");
	getche();
	
}
