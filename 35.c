/*Escribir un programa para solicitar al usuario que ingrese n�meros enteros
positivos (la cantidad que ingresar� no se conoce y la decide el usuario). La
lectura de n�meros finalizar� cuando el usuario ingrese el n�mero -1. Por cada
n�mero ingresado, mostrar la cantidad de d�gitos pares y la cantidad de d�gitos
impares que tiene. Al finalizar, mostrar cu�ntos n�meros m�ltiplos de 3 ingres�
el usuario. */

#include<stdio.h>

int main(){
	
	int num,digitos,b,x=0,y,dig,z=0,impar=0,m=0,a;
	
    printf("Ingrese numeros enteros positivos, si desea detener el programa digite '-1':  \n");scanf("%i",&num);
    while (num>=1){
   		if(num % 3 == 0){
    	x+=1;
		}
	while(num>=1){
		
		b = num%10;
		num/=10;
	
	if( num %2 == 0){
		z++;
	}else{
		impar+=1;
	}
	
	}			
	if (b % 2 == 0){
		m++;
	}else{
		impar+=1;
	}
	 printf("Ingrese numeros enteros positivos, si desea detener el programa digite '-1':  \n");scanf("%i",&num);

	}
	z-=m;
	
	printf("\nLa cantidad de numeros pares es de %i y la cantidad de impares es de %i",z,impar);
	printf("\nSe ingresaron %i numeros multiplos de tres",x);
	
	
	return 0;
}
