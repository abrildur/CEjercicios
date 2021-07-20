/*Programa 5: Se conocen los lados de un triangulo
y se desea imprimir que tipo de triangulo es (Equilatero, isosceles
o escaleno).
Equilatero: Tres lados iguales 
Isosceles: Dos lados iguales. 
Escaleno: Tres lados diferentes.*/
#include <stdio.h>
#include <conio.h>
main(){
	int a, b, c;
	printf("\n\n\tIntroduzca el valor del primer lado: ");
	scanf("%d",&a);
	printf("\n\n\tIntroduzca el valor del segundo lado: ");
	scanf("%d",&b);
	printf("\n\n\tIntroduzca el valor del tercer lado: ");
	scanf("%d",&c);
	if (a==b && b==c && c==a) {
		printf("\n\n\tEl triangulo que se forma es Equilatero\n\n\t");
	} else if (a!=b && b!=c && c!=a) {
		printf("\n\n\tEl triangulo que se forma es Escaleno\n\n\t");
	}
	else if (a==b||b==c||c==a) {
		printf("\n\n\tEl triangulo que se forma es Isosceles\n\n\t");
	}
	system("pause");
}

