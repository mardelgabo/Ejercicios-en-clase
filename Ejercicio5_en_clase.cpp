/* Una heladeria de San Juan posee 5 sucursales, identificadas con los numeros del 1 al 5, y desea saber cuantas
 sucursales vendieron el mes anterior un valor superior al promedio de venta de las 5 sucursales. Ademas listar
 el nombre de las sucursales que cumplieron. */
 
 #include <stdio.h>
 #include <conio.h>
 
 
 main() {
 	int i,j=0;
 	float valor, a[5],suma =0, prom;
 	
 
 	for (i=0;i<5;++i) {
 		
 		printf("Ingrese el importe de ventas de la sucursal numero %d \n",i+1);
 		scanf("%f",&a[i]);
 		suma += a[i];
 	}
 	
 	prom= suma /5;
 	
 	for (i=0;i<5;++i){
 		
 		if (a[i]>prom) {
 			++j;
 			printf("La sucursal %d cumplio con el objetivo \n",i+1);
 		}
 	}
 	
 	printf("La cantidad de sucursales que vendieron mas que el promedio es %d \n",j);
 	getche();
 	
 	
 }
