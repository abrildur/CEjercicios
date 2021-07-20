/*Programa 7: Leer dos numeros enteros e imprimir si el primero es multiplo
del segundo, o si el segundo es multiplo del primero o si no son multiplos.*/

#include<stdio.h>
#include<conio.h>
main () {
	int a, b;
	printf("\n\n\tIngrese el primer numero: ");
	scanf("%d",&a);
	printf("\n\n\tIngrese el segundo numero: ");
	scanf("%d",&b);
	if (a%b==0){
		printf("\n\n\tEl primer numero: %d es multiplo del segundo numero: %d\n\n\t",a,b);
	}else if (b%a==0){
		printf("\n\n\tEl segundo numero: %d es multiplo del primer numero: %d\n\n\t",b,a);
	}else{
		printf("\n\n\tNo son multiplos los numeros que ha ingresado\n\n\t");
	}
	system("pause");
}
