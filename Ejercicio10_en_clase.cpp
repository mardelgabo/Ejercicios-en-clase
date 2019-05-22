/* 10_Solicitar que se ingrese una frase y llenar un arreglo de caracteres hasta que se ingrese un punto.
Con la frase ingresada llenar otro arreglo que contenga solamente las consonantes de la frase.
*/

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

main() {
	int i=0,c,j=0,d;
	char F[100],C[100];
	
	printf("Ingrese una frase, para finalizar ingrese un punto \n");
	
	do {
		F[i]= getche();
		
		++i;
	}
	while (F[i-1]!='.');
	c=i;
	
	printf("\n");
	for (i=0;i<c;++i) {
		putch (F[i]);
	}
	
	for (i=0;i<c;++i){
		if (isalpha(F[i])!=0) {
		
		if ((F[i]!='a')&&(F[i]!='e')&&(F[i]!='i')&&(F[i]!='o')&&(F[i]!='u')&&(F[i]!='A')&&(F[i]!='E')&&(F[i]!='I')&&(F[i]!='O')&&(F[i]!='U')){
				C[j]=F[i];
				++j;
			}
			d=j;
		}
	}
	printf("\n");
	for (j=0;j<d;++j) {
		putch (C[j]);
	}
	getche();
}
