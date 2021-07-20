/*Programa 15: Un distribuidor vende varios articulos para papeleria, por lo que desea generar la 
nota de un cliente el cual solo podra adquirir un solo tipo de articulo y la cantidad que desee. 
Los datos de los cuales se disponen son:
Nombre del cliente
Tipo de articulo
Cantidad vendida
Si el cliente compra de 10 a 25 articulos se le hace un 15% de descuento
y si compra mas de 25 el descuento sera de 25%.
	   Articulo 				Precio
	1.-Libreta 					$8.50
	2.-Pluma	 				$2.50
	3.-Lapiz   				    $2.00
	4.-Borrador 				$1.50
	5.-Sacapuntas				$1.00*/

#include <stdio.h>
#include <conio.h>
main(){
	int cantidad, art;
	char a [30];
	float total;
	printf("\n\n\tNombre del cliente: ");
	gets (a); /*scanf("%s",&a);*/
	printf("\n\n\tTipo de articulo: ");
	printf("\n\n\t1.-Libreta\n\t");
	printf("\n\n\t2.-Pluma\n\t");
	printf("\n\n\t3.-Lapiz\n\t");
	printf("\n\n\t4.-Borrador\n\t");
	printf("\n\n\t5.-Sacapuntas\n\t");
	printf("\n\n\tOpcion: ");
	scanf("%d",&art);
	printf("\n\n\tCantidad vendida: ");
	scanf("%d",&cantidad);
	switch (art) {
		case 1:
			total=(cantidad*8.50);
			printf("\n\n\tCliente: %s\n\n\t",a);
			break;
		case 2:
			total=(cantidad*2.50);
			printf("\n\n\tCliente: %s\n\n\t",a);
			break;
		case 3:
			total=(cantidad*2.00);
			printf("\n\n\tCliente: %s\n\n\t",a);
			break;
		case 4:
			total=(cantidad*1.50);
			printf("\n\n\tCliente: %s\n\n\t",a);
			break;
		case 5:
			total=(cantidad*1.00);
			printf("\n\n\tCliente: %s\n\n\t",a);
			break;
		default:
			printf("\n\n\tLa opcion que usted ingreso no existe\n\n\t");
			break;
			}
		if (cantidad>=10 && cantidad<=25){
			total=total-(total*0.15);
			printf("\n\n\tTotal a pagar: %4.2f\n\n\t",total);
		}else if (cantidad>25) {
			total=total-(total*0.25);
			printf("\n\n\tTotal a pagar: %4.2f\n\n\t",total);
		}else{
			printf("\n\n\tTotal a pagar: %4.2f\n\n\t",total);
		}
	system("pause");
}
