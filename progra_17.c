/*Programa 17: Problema PS2.7 (PAGINA 85)
Construye un diagrama de flujo y el correspondiente programa en C que permita
calcular el valor de f(x) seg�n la siguiente expresi�n:
	Y^3 			Si (Y mod 4) = 0
(Y^2 � 14)/Y^3 		Si (Y mod 4) = 1
Y^3+ 5 				Si (Y mod 4) = 2
Raiz de "Y" 		Si (Y mod 4) = 3
Dato: Y (variable de tipo entero).*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
	int y;
	float x;
	printf("\n\n\tIngrese el valor de y: ");
	scanf("%d",&y);
	if (y%4==0) {
		x= pow(y,3);
		printf("\n\n\tEl valor de x es igual a: %4.2f\n\n\t",x);
	} else if (y%4==1) {
		x= (pow(y,2)-14)/(pow (y,3));
		printf("\n\n\tEl valor de x es igual a: %4.2f\n\n\t",x);	
	} else if (y%4==2) {
		x= pow(y,3)+5;
		printf("\n\n\tEl valor de x es igual a: %4.2f\n\n\t",x);
	}else if (y%4==3){
		x= sqrt(y);
		printf("\n\n\tEl valor de x es igual a: %4.2f\n\n\t",x);
	}
	system("pause");
}
