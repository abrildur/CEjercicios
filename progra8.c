/*Ejercicio: el diagrama de flujo que calcule las raices de una ecuacion cuadratica
Ax^2+Bx+C=0; capturar los valores de las constantes A, B Y C. Tomar en consideracion los siguiente:
a)Si A=0 es una ecuacion lineal.
b)Si C=0 tiene raices reales.
c)Si el discriminante es CERO tiene una sola raiz
d)Si el discriminante es positivo tiene raices reales.
e)Si el discriminante es negativo tiene raices complejas*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
main (){
	int a, b, c;
	float x,x1, discr;
	printf("\n\n\tIngrese el valor del coeficiente cuadratico: ");
	scanf("%d",&a);
	printf("\n\n\tIngrese el valor del coeficiente lineal: ");
	scanf("%d",&b);
	printf("\n\n\tIngrese el valor de la constante: ");
	scanf("%d",&c);
	discr= pow(b,2)-(4*(a)*(c));
	x= ((b*-1)+(sqrt(discr)))/(2*a);
	x1=((b*-1)-(sqrt(discr)))/(2*a);
	if (a==0) {
		printf("\n\n\tEs una ecuacion lineal\n\t");
		printf("\n\n\tEl valor de las raices es igual a: %4.2f y %4.2f\n\n\t",x,x1);
	}else if (c==0){
		printf("\n\n\tTiene raices reales\n\t");
		printf("\n\n\tEl valor de las raices es igual a: %4.2f y %4.2f\n\n\t",x,x1);
	}else if (discr==0){
		printf("\n\n\tEl discriminante es igual a cero esto es significa que tiene una sola raiz\n\t");
		printf("\n\n\tEl valor de la raiz es igual a: %4.2f\n\n\t",x);
	}else if (discr>0){
		printf("\n\n\tEl discriminante es positivo esto significa que tiene raices reales\n\n\t");
		printf("\n\n\tEl valor de las raices es igual a: %4.2f y %4.2f\n\n\t",x,x1);
	}else if (discr<0){
		printf("\n\n\tEl discriminante es negativo esto significa que tiene raices complejas\n\n\t");
		printf("\n\n\tEl valor de las raices es igual a: %4.2f y %4.2f\n\n\t",x,x1);
	}else{
	printf("\n\n\tEl valor de las raices es igual a: %4.2f y %4.2f\n\n\t",x,x1);
	}system("pause");
}
