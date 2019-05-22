/* Llenar un arreglo con N datos enteros. Con los datos ingresados en este primer arreglo se deberá generar 5 arreglos más.
De los que se deberá informar la cantidad de elementos de cada uno y mostrarlos. 
El primer arreglo deberá tener los valores positivos ingresados en el arreglo original.
El segundo arreglo deberá tener los ceros
El tercero con los valores negativos
El cuarto con los valores pares
El quinto con los valores impares
Mostrar los 6 arreglos.
*/


#include <stdio.h>
#include <conio.h>

main () {
	int i,n,c1=0,c2=0,c3=0,c4=0,c5=0, valor;
	int B[c1],C[c2],D[c3],E[c4],F[c5];
	
	printf("Ingrese la cantidad de elementos del arreglo \n");
	scanf("%d",&n);
	
	int A[n];
	
	for (i=0;i<n;++i) {
		printf("ingrese el elemento %d \n",i+1);
		scanf("%d",&valor);
		A[i]= valor;
		if (valor > 0) {
			B[c1]=valor;
			++c1;
			
			
		}
		if (valor == 0) {
			C[c2]= valor;
			++c2;
		}
		if (valor<0) {
			D[c3]= valor;
			++c3;
		}
		if (valor%2==0) {
			E[c4]= valor;
			++c4;
		}
		else{
			F[c5]= valor;
			++c5;
		}
	}
	printf("El arreglo original contiene %d elementos y son los siguientes: \n",n);
	for (i=0;i<n;++i) {
		printf("el elemento %d es:%d \n",i+1,A[i]);
	}
	printf ("Los elementos positivos son %d: \n",c1);
	if (c1>0) {
	
	for (i=0;i<c1;++i) {
		printf("El elemento %d es:%d \n",i+1,B[i]);
	}
	}
	else {
		printf("No existen elementos positivos \n");
	}
	printf ("Los elementos iguales a cero son %d: \n",c2);
	if (c2>0) {
	
	for (i=0;i<c2;++i) {
		printf("El elemento %d es:%d \n",i+1,C[i]);
	}
	}
	else {
		printf("No existen ceros \n");
	}
	printf ("Los elementos negativos son %d: \n",c3);
	if (c3>0) {
	
	for (i=0;i<c3;++i) {
		printf("El elemento %d es:%d \n",i+1,D[i]);
	}
	}
	else {
		printf("No existen elementos negativos \n");
	}
	printf ("Los elementos pares son %d: \n",c4);
	if (c4>0) {
	
	for (i=0;i<c4;++i) {
		printf("El elemento %d es:%d \n",i+1,E[i]);
	}
	}
	else {
		printf("No existen elementos pares \n");
	}
	printf ("Los elementos impares son %d: \n",c5);
	if (c5>0) {
	
	for (i=0;i<c5;++i) {
		printf("El elemento %d es:%d \n",i+1,F[i]);
	}
	}
	else {
		printf("No existen elementos impares \n");
	}
	getche();
}
