/*Escribir un programa que pregunte al usuario si desea analizar calificaciones
de alumnos y, sólo si responde “S” comenzará el procesamiento de los datos,
hasta que el usuario ingrese algo diferente de “S”. Por cada alumno, permitir
ingresar su calificación. Si es mayor a 4 el alumno está aprobado. Finalmente,
mostrar “Porcentaje de alumnos aprobados: x %” (donde x es el porcentaje de
aprobados sobre el total de calificaciones procesadas). También se debe
imprimir “Promedio de los aprobados: y” (donde y es la calificación promedio,
sólo de los alumnos aprobados).*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	
	int a=0, x,y=0,z=0,m=0,prom;
	float calf;
	char var[10];
	char S[5]= "S";
	
		printf("Si desea analizar sus calificaciones responda con 'S' cualquier otra tecla cerrara el programa: ");scanf("%s",&var);
	
	if(strcmp(var,S) == 0){
		do{
		printf("\nIngrese su calificacion:");scanf("%f",&calf);
	if(calf>4){
	printf("\nUsted esta aprobado\n");
			y+=calf;//sumatoria de calificaciones 
			z+=1; //numero de aprobados
			}
	if(calf<4){
		printf("\nUsted no esta aprobado\n");
	
}
m+=1;//numero de veces que se repite la secuencia
fflush(stdin);	 printf("\nIntroduzca 'S' para ingresar otra calificacion, cualquier otra tecla cierra el programa: \n");scanf("%s",&var);
	}while(strcmp(var, S) == 0);

  x = z*100/m;
  
  if(z<=a){
  	printf("El porcentaje de materias aprobadas es de: %d porciento\n",x);
  printf("El promedio de las calificaciones aprobadas es de: 0\n");
  return 0;
  }
  prom = y/z;
  printf("El porcentaje de materias aprobadas es de: %d porciento\n",x);
  printf("El promedio de las calificaciones aprobadas es de: %d",prom);
  
}else{
printf("\nHasta luego\n");
return 0;
}
	
	return 0;
}




