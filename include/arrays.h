#ifndef ARRAYS_H
#define ARRAYS_H

#include <stdio.h>
#include <stdlib.h>

// Function to get an array from the user
// Allocates memory for the array and returns it
int* getArray(int* size);

// Function to print an array
// Prints the elements of the array
void printArray(int* arr, int size);

// Function to find the index of the minimum element in an array
// Returns the index of the smallest element
int findMinElementIndex(int* arr, int size);

#endif // ARRAYS_H
