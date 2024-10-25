#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rows , columns;
    printf("Enter number of rows :");
    scanf("%d",&rows);
    printf("Enter number of coloumns :" );
    scanf("%d",&columns);

    int **matrix = (int **)malloc(rows * sizeof(int* ));

    for (int i = 0; i < rows; i++)
    {
        *(matrix + i)= (int *)malloc(columns * sizeof(int));
        printf("%p\n",matrix[i]);
    }
    if (matrix == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter elements of  matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            printf("%p\n",&matrix[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    free(matrix);
    for(int i=0;i<rows;i++)
    {
        free(matrix[i]);
    }
    return 0;
}

