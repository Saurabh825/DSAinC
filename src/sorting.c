void insertionSort(int* arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[i] > key)
        {
            arr[j + 1 ] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void selectionSort(int* arr, int size)
{
    for (int i = 0; i < size -1; i ++)
    {
        int min_idx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

