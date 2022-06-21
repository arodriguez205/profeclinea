//positivos y negativos

#include<stdio.h>

int main(){
	
int a,prom,pos=0,nega=0,i,x;

for(i=0;i<6;i++){
	printf("\nIngrese 6 numeros enteros: ");scanf("%d",&a);
	if(a>0){
		pos+=a;
	x+=1;
	}
	if(a<0){
		nega+=a;
	}
} 
if(x>0){
prom = pos/x;
printf("\nEl promedio de los numeros positivos es de: %i",prom);
printf("\nLa suma de los numeros negativos es de: %i",nega);
}
else{
	printf("\nPorfavor reinicie el programa e ingrese almenos un numero positivo.");
}


	
	return 0;
}
