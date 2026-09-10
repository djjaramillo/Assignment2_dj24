//David Jaramillo
//Assignment #2


//Header Files 
#include <stdio.h>
#include "statistics.h"
#include "output_array.h"

//Main Function
int main()
{
//Declare the array and set value
    double array1[] = {1, 2, 3};
    double array2[] = {4, 5, 6, 7};
    double array3[] = {8, 9, 10, 11, 12};

    int size1 = 3;
    int size2 = 4;
    int size3 = 5;

//Print out array 1 through 3
//Call  on each  function through the printf
    printf("Array 1:\n");
    outputArray(array1, size1);
    printf("the average is: %.2f\n", average(array1, size1));
    printf("the std is: %.2f\n", stdDeviation(array1, size1));
    printf("the sum is: %.2f\n", sum(array1, size1));
    printf("the maximum is: %.2f\n", maximum(array1, size1));
    printf("the minimum is: %.2f\n", minimum(array1, size1));
    printf("the difference is: %.2f\n\n", difference(array1, size1));

    printf("Array 2:\n");
    outputArray(array2, size2);
    printf("the average is: %.2f\n", average(array2, size2));
    printf("the std is: %.2f\n", stdDeviation(array2, size2));
    printf("the sum is: %.2f\n", sum(array2, size2));
    printf("the maximum is: %.2f\n", maximum(array2, size2));
    printf("the minimum is: %.2f\n", minimum(array2, size2));
    printf("the difference is: %.2f\n\n", difference(array2, size2));

    printf("Array 3:\n");
    outputArray(array3, size3);
    printf("the average is: %.2f\n", average(array3, size3));
    printf("the std is: %.2f\n", stdDeviation(array3, size3));
    printf("the sum is: %.2f\n", sum(array3, size3));
    printf("the maximum is: %.2f\n", maximum(array3, size3));
    printf("the minimum is: %.2f\n", minimum(array3, size3));
    printf("the difference is: %.2f\n", difference(array3, size3));

    return 0;
}
