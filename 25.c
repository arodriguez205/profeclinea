//a�o bisiesto

#include <stdio.h>

int main(){
	
	int a;
	
	printf("Escriba un a�o para determinar si es bisiesto: ");scanf("%i",&a);
	
	if(a % 4 == 0){
		printf("El a�o ingresado es bisiesto");
	}else{
		printf("El a�o no es bisiesto");
	}
	
	
	
	return 0;
}
