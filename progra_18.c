/*Programa 18:(Problema PS2.8 pagina 86) Construye un diagrama de flujo y el correspondiente programa en C que permita
convertir de pulgadas a mil�metros, de yardas a metros y de millas a kil�metros.
Datos: MED y VAL
Donde: MED es una variable de tipo entero que se utiliza para el tipo de
conversi�n que se quiere realizar.
VAL es una variable de tipo entero que representa el valor a convertir.
Consideraciones:
� 1 pulgada equivale a 25.40 mil�metros.
� 1 yarda equivale a 0.9144 metros.
� 1 milla equivale a 1.6093 kil�metros*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
	int med, val, op;
	printf("\n\n\tSeleccione la opcion que desee: ");
	printf("\n\n\t1.-Convertir pulgadas a milimetros\n\t");
	printf("\n\n\t2.-Convertir yardas a metros\n\t");
	printf("\n\n\t3.-Convertir millas a kilometros\n\t");
	printf("\n\n\tOpcion: ");
	scanf("%d",&op);
	switch(op){
		case 1:
			printf("\n\n\tIngrese el valor a convertir en pulgadas: ");
			scanf("%d",&med);
			val=med*25.40;
			printf("\n\n\tEl numero que ingreso equivale a: %d milimetros\n\n\t",val);
			break;
		case 2:
			printf("\n\n\tIngrese el valor a convertir en yardas: ");
			scanf("%d",&med);
			val=med*0.9144;
			printf("\n\n\tEl numero que ingreso equivale a: %d metros\n\n\t",val);
			break;
		case 3:
			printf("\n\n\tIngrese el valor a convertir en millas: ");
			scanf("%d",&med);
			val=med*1.6093;
			printf("\n\n\tEl numero que ingreso equivale a: %d kilometros\n\n\t",val);
			break;
		default:
			printf("\n\n\tOpcion que ingreso no existe\n\n\t");
			break;			
	}
	system("pause");
}
