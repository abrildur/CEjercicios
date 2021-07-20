/*Al ingresar un numero entero en este programa, imprime si el numero es par,
impar, o nulo. Ademas si es positivo o negativo.*/
#include<stdio.h>
#include<conio.h>
main(){
	int n;
	printf("\n\n\tIngrese un numero entero: ");
	scanf("%d",&n);
	if (n==0){
		printf("\n\n\tEl numero que ingreso es nulo\n\n\t");
	}else if (n%2==0){
		printf("\n\n\tEl numero que ingreso es par\n\t");
	}else{
		printf("\n\n\tEl numero que ingreso es impar\n\t");
	}
	if (n<0){
		printf("\n\n\tEl numero que ingreso es negativo\n\n\t");
	}else if (n>0){
		printf("\n\n\tEl numero que ingreso es positivo\n\n\t");
	}
	system("pause");
}
