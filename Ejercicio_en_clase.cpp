#include <stdio.h>
#include <conio.h>

/* Un ni�o de primer grado solicita un programa que solicite se tipeen dos valores enteros y calcule y muestre lo siguiente: 
La suma, la resta del segundo menos el primero, la multiplicaci�n , la divisi�n del primero divido en el segundo, el m�dulo de ambos numeros
con el numero 2 y que diga si el primero y el segundo valor tipeado son par o impar. */


main() {
int n1,n2,suma,resta,multi,rest1,rest2;
float div;

printf("Ingrese el primer n�mero entero \n");
scanf("%d",&n1);
printf("Ingrese el segundo n�mero entero \n");
scanf("%d",&n2);

suma=n1+n2;
resta=n2-n1;
multi=n1*n2; 
rest1=n1%2;
rest2=n2%2;

printf("La suma de ambos n�meros es %d \n",suma);
printf("La resta del segundo n�mero menos el primero es %d \n",resta);
printf("La multiplicaci�n entre ambos n�meros es %d \n", multi);


if (n2!=0) {
	div=(float)n1/n2;
	printf("La divisi�n entre el primer n�mero y el segundo es %f \n", div);
}
else {
	printf("************************* \n");
	printf("No se puede dividir por 0!!! \n");
	printf("************************* \n");
}
if (rest1==0){
	printf("El primer n�mero es par \n");
}
else {
	printf("El primer n�mero es impar \n");
}
if (rest2==0){
	printf("El segundo n�mero es par \n");
}
else {
	printf("El segundo n�mero es impar \n");
}
printf("Presione una tecla para salir \n");
getche();
}
