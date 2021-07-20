/*Programa 19 FOR: Realice el algoritmo, diagrama de flujo  y su correspondiente programa
en C que al recibir "x" numero, realice la tabla que le corresponde.*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>
main (){
	int i, x, n1;
	printf("\n\n\tIngrese cualquier numero: ");
	scanf("%d",&x);
	for (i=1; i<=10; i++){
		n1= i*x;
		printf("\n\t%dx%d= %d\n\t",x,i,n1);
	}
	system("pause");
} 
