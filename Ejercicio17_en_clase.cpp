/*Ingresar una frase hasta que se oprima enter, determinar la cantidad de vocales de la segunda palabra de la frase y llenar un arreglo
con esas vocales. Mostrar los dos arreglos*/


#include <stdio.h>    //libreria
#include <conio.h>	//libreria
#include <ctype.h>	//libreria

main() {
	char A[100],B[100];         //Declaramos dos arreglas de tipo caracter (char) con un tamaño de 100
	int x=0,i,c,d,cont=0;	//Declaramos variables entereas (int) que vamos a usar a lo largo del algoritmo
	
	printf("Ingrese una frase, para finaliar presione enter \n"); //Solicitamos el ingreso de la frase
	
	do {					//Abrimos un "do while" para llenar el arreglo A hasta tanto precionen enter
		A[x]= getche();			//Asignamos al arreglo A en la posicion x el caracter ingresados, tomamos letra por letra.
		++x;	//Incrementamos la variable de control x para que en cada vuelta podamos asignar una latra a un lugar distinto del arrelgo
	}
	while(A[x-1]!= '\r'); //Aca le decimos que siga guardando letras hasta que presionen enter.La condicion del while pasaria a ser
			      //falsa y se terminaria el ciclo. La posicion del arreglo A[x-1] es la que deberiamos leer si presionan enter.
	for (i=0;i<x;++i) {		//Abrimos un for para buscar la ubicacion de la segunda palabra (la cual se encuentra entre los 2 primeros espacios.
		if (isspace(A[i])!=0) {  //La funcion isspace nos indica si el caracter que estamos evaluando (A[i]) es un espacio.
					// si es verdadero guardamos la posicion del espacio (i) en la cariable c 
					//luego con la sentencia break salimos del for.
			c=i;
			break;
		}
		}
		
	for (i=c+1;i<x;++i) {  //Abrimos otro for para buscar el segundo espacio. En este caso el for empieza desde la posicion del primer espacio
		if (isspace(A[i])!=0){	//para ello usamos i=c+1 en la inicializacion del for, luego usamos la funcion isspace nuevamente
			d=i;	//guardamos la posicion del segundo espacio en la variable d
			break;	//luego con la sentencia break salimos del for.
		}
		
	}
	for (i=c+1;i<d;++i) {  //aca recorremos el arreglo desde el primer caracter despues del primer espacio (c+) hasta el segundo espacio (d)
		if (A[i]== 'a' || A[i]=='A' || A[i]=='e' || A[i]== 'E' || A[i]== 'i' || A[i]== 'I' || A[i]== 'o' || A[i]== 'O' || A[i]== 'u' || A[i]== 'U'){
			B[cont]= A[i];    //el if contiene todas las vocales, si es verdadero guardamos la vocal en el arreglo B posicion [cont]
			++cont;		//esta posicion es 0 al iniciar y por cada verdadero se incrementa en 1 por lo tanto nos sirve para llenar
		}			//en orden el arreglo B
	}
	printf("\n");  //este print nos genera un nuevo renglon
	for (i=0;i<x;++i) {	//Con un for mostramos el arreglo A, o sea, mostramos caracter por caracter
		putch (A[i]); //La funcion putch nos permite mostrar los caracteres de cada posicion del arreglo (A[i])
	}
	printf("\n");	//este print nos genera un nuevo renglon
	for (i=0;i<cont;++i){ //Con un for mostramos el arreglo B, o sea, mostramos caracter por caracter
		putch(B[i]);
	}
	printf("\n");
	printf("La cantidad de vocales en la segunda palabra es %d \n",cont); //La variable cont nos sumó las vocales, la usamos para invocar
	}									//la respuesta
	
	
