#include <stdio.h>

int main(){
    int row , column;

    printf("Input number of Rows for matrix : ");
    scanf("%d" ,&row);
    printf("Input number of Columns for matrix : ");
    scanf("%d" ,&column);

    int array[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("element - [%d][%d] : " ,i ,j);
            scanf("%d" ,&array[i][j]);
        }
    }
    printf("\n");

    

    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (j == i)
            {
                if (array[i][j] == 1)
                {
                    count++;
                }
            }
            else if (array[i][j] == 0)
            {
                count++;
            }
        }
    }

    printf("The matrix is :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    
    if (count == row*column)
    {
        printf("the matrix is an identity matrix");
    }
    else
    {
        printf("the matrix is NOT an identity matrix");
    }
    
    
    


    return 0;
}