#include <math.h>
// Calculate the sum and return the total 
double sum(double array[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++)
    {
     	total += array[i];
    }

    return total;
}

// Calculate average
double average(double array[], int size)
{
    return sum(array, size) / size;
}

// Calculate standard deviation
double stdDeviation(double array[], int size)
{
    double avg = average(array, size);
    double total = 0;

    for (int i = 0; i < size; i++)
    {
     	total += (array[i] - avg) * (array[i] - avg);
    }

    return sqrt(total / size);
}

// Find maximum value
double maximum(double array[], int size)
{
    double max = array[0];

    for (int i = 1; i < size; i++)
    {
     	if (array[i] > max)
        {
            max = array[i];
        }
    }

    return max;
}

// Find minimum value
double minimum(double array[], int size)
{
    double min = array[0];

    for (int i = 1; i < size; i++)
    {
     	if (array[i] < min)
        {
            min = array[i];
        }
    }

    return min;
}

// Find the absolute value of the difference between maximum and minimum
double difference(double array[], int size)
{
    double max = maximum(array, size);
    double min = minimum(array, size);

    return max - min;
}
