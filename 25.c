//año bisiesto

#include <stdio.h>

int main(){
	
	int a;
	
	printf("Escriba un año para determinar si es bisiesto: ");scanf("%i",&a);
	
	if(a % 4 == 0){
		printf("El año ingresado es bisiesto");
	}else{
		printf("El año no es bisiesto");
	}
	
	
	
	return 0;
}
