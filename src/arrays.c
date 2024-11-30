#include <stdio.h>
#include <stdlib.h>

// Function to get an array from the user
int* getArray(int* size)
{
    printf("Enter the size of an array: ");
    scanf("%d", size);
    // Allocate memory for the array
    int* array = (int*)malloc(*size * sizeof(int));
    if (array == NULL)
    {
        printf("memory allocation failed\n");
        exit(1);
    }

    // Get array elements from the user
    printf("Enter %d elements: \n", *size);
    for (int i = 0; i < *size; i++)
    {
         printf("Elements %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    return array;
}

void printArray(int* arr, int size)
{
    printf("The array is:\n");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
    printf("\n");
}

int minElement(int* arr, int size)
{
    int min = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[min])
            min = i;
        
    }
    return min;
}
