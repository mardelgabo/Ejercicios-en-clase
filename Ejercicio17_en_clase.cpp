/*Ingresar una frase hasta que se oprima enter, determinar la cantidad de vocales de la segunda palabra de la frase y llenar un arreglo
con esas vocales. Mostrar los dos arreglos*/


#include <stdio.h>
#include <conio.h>
#include <ctype.h>

main() {
	char A[100],B[100];
	int x=0,i,c,d,cont=0;
	
	printf("Ingrese una frase, para finaliar presione enter \n");
	
	do {
		A[x]= getche();
		++x;
	}
	while(A[x-1]!= '\r');
	
	for (i=0;i<x;++i) {
		if (isspace(A[i])!=0) {
			
		
			c=i;
			break;
		}
		}
		
	for (i=c+1;i<x;++i) {
		if (isspace(A[i])!=0){
			d=i;
			break;
		}
		
	}
	for (i=c+1;i<d;++i) {
		if (A[i]== 'a' || A[i]=='A' || A[i]=='e' || A[i]== 'E' || A[i]== 'i' || A[i]== 'I' || A[i]== 'o' || A[i]== 'O' || A[i]== 'u' || A[i]== 'U'){
			B[cont]= A[i];
			++cont;
		}
	}
	printf("\n");
	for (i=0;i<x;++i) {
		putch (A[i]);
	}
	printf("\n");
	for (i=0;i<cont;++i){
		putch(B[i]);
	}
	printf("\n");
	printf("La cantidad de vocales en la segunda palabra es %d \n",cont);
	}
	
