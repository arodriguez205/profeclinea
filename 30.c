//factorial de un numero

#include <stdio.h>

int main()
{
    int i, x, c = 1;
    
    printf("Ingresa un número para calcular su factorial: \n");
    scanf("%d", &x);
    
    for (i = 1; i <= x; i++){
        c = c * i;
    }

    printf("Factorial de %d es: %d\n", x, c);

    return 0;
}
