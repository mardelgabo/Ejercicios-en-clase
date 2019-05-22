/* 12_ Solicitar que se ingrese una frase que contenga letras mayusculas y minusculas, digitos y signos de puntuacion, hasta oprimir Enter
y guardarlo en un arreglo de caracteres.
Determinar y mostrar: 
_cantidad de caracteres ingresados (de todo tipo)
_cantidad de letras mayusculas
_cantidad de letras minusculas
_cantidad de consonantes
_cantidad de vocales
_cantidad de digitos
_cantidad de signos de puntuacion
_cantidad de espacios
_cantidad de palabras
*/

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

main () {
	int i=0,c,may=0,min=0,dig=0,punt=0,esp=0,vocal=0,cons=0;
	char A[100];
	
	printf("Ingrese una frase que incluya minusculas, mayusculas, digitos y signos de puntuacion, para finalizar presione Enter \n");
	
	do {
		A[i]= getche();
		++i;
		if (isupper(A[i-1])!=0) {
			++may;
		}
		if (islower(A[i-1])!=0) {
			++min;
		}
		if (isdigit(A[i-1])!=0) {
			++dig;
		}
		if (ispunct(A[i-1])!=0) {
			++punt;
		}
		if (isspace(A[i-1])!=0) {
			++esp;
		}
		if(isalpha(A[i-1])!=0) {
			if((A[i-1]=='a')||(A[i-1]=='e')||(A[i-1]=='i')||(A[i-1]=='o')||(A[i-1]=='u')||(A[i-1]=='A')||(A[i-1]=='E')||(A[i-1]=='I')||(A[i-1]=='O')||(A[i-1]=='U')) {
				++vocal;
			}			else {
				++cons;
			}
		}
	}
	while (A[i-1]!='\r');
	c=i;
	printf("\n");
	
	printf("Carcteres ingresados = %d \n",i-1);
	printf("Mayusculas ingresadas = %d \n",may);
	printf("Minusculas ingresadas = %d \n",min);
	printf("Consonantes ingresadas = %d \n",cons);
	printf("Vocales ingresadas = %d \n",vocal);
	printf("Digitos ingresados = %d \n",dig);
	printf("Signos de puntuacion ingresados = %d \n",punt);
	printf("Espacios ingresados = %d \n",esp-1);
	printf("Palabras ingresadas = %d \n",esp);
	
	getche();
}
