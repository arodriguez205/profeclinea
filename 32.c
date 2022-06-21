//hasta que

#include<stdio.h>

int main(){
	
	int a,suma,mayor;
	printf("\tIngrese un numero hasta que no necesite mas, entonces escriba 0\n");
do{
		printf("\nIngrese un numero: ");scanf("%i",&a);
	if(a>mayor){
		mayor=a;
	}
}while(a!=0);
printf("El mayor de todos los numeros es: %i",mayor);
}
