#include <stdio.h>
#include <limits.h>

int array_max(int* array, int size){

    int max = INT_MIN;
    for(int i = 0; i < size; ++i){
        if(max < array[i]){
            max = array[i];
        }
    }

    return max;
}

int array_min(int* array, int size){
    int min = INT_MAX;

    for(int i = 0; i < size; ++i){
        if (min > array[i]){
            min = array[i];
        }
    }

    return min;
}

double array_avg(int* array, int size){
    int sum = 0;

    for(int i = 0; i < size; ++i){
        sum += array[i];
    }

    return (double)sum / (double)size;
}

int main() {
    
    int myArray[] = {10, 11, 50, 36, -1};
    int myArraySize = sizeof(myArray) / sizeof(int);
    
    // Array max
    printf("Maximum of my array: %d\n", array_max(myArray, myArraySize));

    // Array min
    printf("Minimum of my array: %d\n", array_min(myArray, myArraySize));

    // Array avg
    printf("Avg of my array: %.2f\n", array_avg(myArray, myArraySize));

    return 0;
}