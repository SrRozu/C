#include <stdio.h>

/*
Determinar si una matriz es simétrica o no
*/

int main()
{
    int f, c, numeros[100][100], filas, columnas;
    int comprobar = 0;
    
    printf("Dime el numero de filas que quieres: ");
    scanf("%d", &filas);
    printf("Dime el numero de columnas que quieres: ");
    scanf("%d", &columnas);
    
    for(f < filas; f++;){
        for(c < columnas; c++;){
            printf("Dime un numero para añadir: ");
            scanf("%d", &numeros[f][c]);
        }
    }
    if (filas == columnas){
        for(f < filas; f++;){
            for(c < columnas; c++;){
                if(numeros[f][c] == numeros[c][f]){
                    comprobar = 1;
                }
            }
        }
    }
    if (comprobar == 1)
    {
        printf("La matriz es simetrica");
    }
    if(comprobar == 0)
        printf("La matriz no es simétrica");
}
