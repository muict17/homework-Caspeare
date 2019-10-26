#include <stdio.h>

int main()
{

    /////////////////////////////////////////////////////
    ////////     INPUT VALUE FOR ARRAY      /////////////
    ////////    AND SORT FOR EZY USE        /////////////
    /////////////////////////////////////////////////////
    int n;
    printf("Please input the size of Array = ");
    scanf("%d", &n);

    printf("Please input value for each element of array = ");
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[j + 1] < array[j])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    ///////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////
    ///////     CREATE ANOTHER ARRAY FOR            ///////
    ///////     DUPLICATING VALUE & ARRAY FOR       ///////
    ///////     COUNT THE AMOUNT OF DUPLICATION     ///////
    ///////////////////////////////////////////////////////
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (array[i] != array[i - 1])
        {
            count++;
        }
    }

    int j = 0;
    int array_new[count];
    for (int i = 0; i < n; i++)
    {
        if (array[i] != array[i + 1])
        {
            array_new[j] = array[i];
            j++;
        }
    }

    int array_new_COUNTing[count];
    for (int i = 0; i < count; i++)
    {
        array_new_COUNTing[i] = 0;
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array_new[i] == array[j])
            {
                array_new_COUNTing[i]++;
            }
        }
    }
    /////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////
    ///////     SORTING BOTH OF ARRAY ABOVE     ///////////
    ///////     FOR EASIER USAGE.               ///////////
    ///////////////////////////////////////////////////////
    int temp_indicator;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - 1; j++)
        {
            if (array_new[j + 1] > array_new[j])
            {
                temp = array_new[j];
                temp_indicator = array_new_COUNTing[j];

                array_new[j] = array_new[j + 1];
                array_new_COUNTing[j] = array_new_COUNTing[j + 1];

                array_new_COUNTing[j + 1] = temp_indicator;
                array_new[j + 1] = temp;
            }
        }
    }
    //////////////////////////////////////////////////////////

    /////////////////////////////////////////////////////////
    ///////////     SHOW THE MAXIMUM REPEATING VALgcc UE ////////
    ///////////     IN THE ARRAY.                    ////////
    /////////////////////////////////////////////////////////
    for (int i = 0; i < count; i++)
    {
        if (array_new_COUNTing[i] > 1)
        {
            printf("The Maximum value and has duplicated value is %d ", array_new[i]);
            break;
        }
    }

    return 0;
}