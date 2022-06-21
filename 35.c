/*Escribir un programa para solicitar al usuario que ingrese números enteros
positivos (la cantidad que ingresará no se conoce y la decide el usuario). La
lectura de números finalizará cuando el usuario ingrese el número -1. Por cada
número ingresado, mostrar la cantidad de dígitos pares y la cantidad de dígitos
impares que tiene. Al finalizar, mostrar cuántos números múltiplos de 3 ingresó
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
