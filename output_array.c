#include <stdio.h>
#include "output_array.h"

//Function to ouput the values of the array 
void outputArray(double array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%.2f ", array[i]);
    }
    
    printf("\n");
}
