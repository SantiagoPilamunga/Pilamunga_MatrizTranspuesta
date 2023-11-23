#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n, m;
    printf("Ingrese el numero de filas: ");
    scanf("%d", &n);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &m);
    srand(time(NULL));
    int matrix[n][m];
    printf("\nMatriz original: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j]=rand()%101;
            
            printf("%d\t", matrix[i][j]);
            
        }
        printf("\n");
    }
    int matrix2[m][n];
    printf("\nMatriz transpuesta: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix2[i][j]=matrix[j][i];
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
