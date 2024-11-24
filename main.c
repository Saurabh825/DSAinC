#include <stdio.h>
#include <stdlib.h>
#include "searching/searching.h"
#include "arrays.h"

int main(int argc, char *argv[])
{
    int size;
    int* arr = getArray(&size);
    binarySearch(arr, size, 56);

    return EXIT_SUCCESS;
}

