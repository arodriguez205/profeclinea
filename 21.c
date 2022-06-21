// mostrar mayor de 3 numeros

#include<stdio.h>

int main(){
	
	int a,b,c;
	
	printf("Ingrese 3 numeros: ");scanf("%i %i %i",&a,&b,&c);
	
    if (a>b && a>c){
    	printf("El mayor de los tres numeros es: %i\n",a);
	}
	if(b>a && b>c){
		printf("El mayor de los tres numeros es: %i\n",b);
	}
	if(c>a && c>b){
		printf("El mayor de los tres numeros es: %i\n",c);
	}
    return 0;
}
