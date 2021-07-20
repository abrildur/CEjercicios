/*Programa 16: Elaborar un programa el cual calcule el recibo del agua de un cliente 
a partir de los siguientes datos:
Nombre del cliente
Consumo en m^3
Zona en la que se ubica
Los primeros 20 m^3, se cobraran a $50.00 (tarifa minima), si el consumo excede
del minimo, la tarifa del m^3 se aplicara de acuerdo a la zona como se indica a continuacion:
	   Zona 				Tarifa/m^3
	1.-Monterrey 				$3.00
	2.-San Nicolas	 			$3.25
	3.-Santa  Catarina  		$2.75
	4.-Escobedo 				$2.85*/

#include <stdio.h>
#include <conio.h>
main(){
	int zona, metros;
	char a [30];
	float total;
	printf("\n\n\tNombre del cliente: ");
	gets (a); /*scanf("%s",&a);*/
	printf("\n\n\tZona en la que se ubica: ");
	printf("\n\n\t1.-Monterrey\n\t");
	printf("\n\n\t2.-San Nicolas\n\t");
	printf("\n\n\t3.-Santa Catarina\n\t");
	printf("\n\n\t4.-Escobedo\n\t");
	printf("\n\n\tOpcion: ");
	scanf("%d",&zona);
	printf("\n\n\tConsumo de agua en metros cubicos: ");
	scanf("%d",&metros);
	if (metros==20){
		total=50;
		printf("\n\n\tEl total a pagar es: %4.2f\n\n\t",total);
	}else if (metros>20){
	switch (zona) {
		case 1:
			total=(metros*3.00);
			printf("\n\n\tCliente: %s\n\n\t",a);
			printf("\n\n\tEl total a pagar es: %4.2f\n\n\t",total);
			break;
		case 2:
			total=(metros*3.25);
			printf("\n\n\tCliente: %s\n\n\t",a);
			printf("\n\n\tEl total a pagar es: %4.2f\n\n\t",total);
			break;
		case 3:
			total=(metros*2.75);
			printf("\n\n\tCliente: %s\n\n\t",a);
			printf("\n\n\tEl total a pagar es: %4.2f\n\n\t",total);
			break;
		case 4:
			total=(metros*2.85);
			printf("\n\n\tCliente: %s\n\n\t",a);
			printf("\n\n\tEl total a pagar es: %4.2f\n\n\t",total);
			break;
		default:
			printf("\n\n\tLa opcion que usted ingreso no existe\n\n\t");
			break;
			}
		}
	system("pause");
}
