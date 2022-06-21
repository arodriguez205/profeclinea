#include<stdio.h>

int main(){
	
	int a,b,c;
	
	
	printf("Ingrese un numero entero: ");scanf("%i",&a);
	
	while(a!=0){
		
		b = a%10;
		a/=10;
		c+=b;
		
	}
	printf("La suma de los digitos es de: %i\n",c);
	
	
	return 0;
}
