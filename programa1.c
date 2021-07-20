#include <stdio.h>
#include <conio.h>
#include<math.h>
main() {
	int discr, a, b, c;
	float x, x1;
	printf("\n\n\tIngrese el valor del coeficiente cuadratico (a): ");
	scanf("%d",&a);
	printf("\n\n\tIngrese el valor del coeficiente lineal (b): ");
	scanf("%d",&b);
	printf("\n\n\tIngrese el valor de la constante (c): ");
	scanf("%d",&c);
	discr= pow(b,2)-(4*a*c);
	x= ((b*-1)+ (sqrt(discr)))/(2*a);
	x1= ((b*-1)-(sqrt(discr)))/(2*a);
	printf("\n\n\tEl valor de las raices es: %4.2f y %4.2f\n\n\t",x,x1);
	system("pause");
}
