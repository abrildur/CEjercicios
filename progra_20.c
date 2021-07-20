/*Programa 20 FOR: Realice el algoritmo, diagrama de flujo y su correspondiente programa en C
que al recibir 6 precios de prendas, calcule el subtotal, solicite el pago, muestre el monto
a regresar*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>
main(){
	int i;
	float tot,pre, camb, suma=0;
	for (i=1; i<=6; i++){
	printf("\n\n\tIngrese precio de la prenda: ");
	scanf("%f",&pre);
	suma=suma+pre;
		}
	printf("\n\n\tEl subtotal de la compra es: %4.2f\n\t",suma);
	suma=(suma*1.16);
	printf("\n\n\tEl total de la compra es: %4.2f\n\t",suma);
	printf("\n\n\tCantidad de dinero ingresada por el cliente: ");
	scanf("%f",&camb);
	camb=camb-suma;
	printf("\n\n\tEl monto a regresar al cliente es: %4.2f\n\n\t",camb);
	system("pause");
}
