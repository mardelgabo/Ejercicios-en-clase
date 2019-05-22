/* 11_ Solicitar que se ingrese una frase toda en minuscula y llenar un arreglo de caracteres con ella.
El ingreso de la frase finaliza cuando se oprime enter.
llenar otro arreglo con la misma frase pero en mayuscula.
tolower()___transforma una letra de mayuscula a minuscula
toupper() transforma minusculas en mayusculas */
 
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

main () {
	int i=0,c;
	char F[100],M[100];
	
	printf("Ingrese una frase en minuscula, para finalizar ingrese enter \n");
	
	do {
		F[i]= getche();
		
		++i;
	}
	while (F[i-1]!='\r');
	c=i;
	
	printf("\n");
	for (i=0;i<c;++i) {
		M[i] = toupper(F[i]);
		putch (M[i]);
		
	}
	
	
	
	
}
