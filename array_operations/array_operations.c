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

int main() {
    
    int myArray[] = {10, 11, 50, 36, -1};
    int myArraySize = sizeof(myArray) / sizeof(int);
    
    // Array max
    printf("Maximum of my array: %d\n", array_max(myArray, myArraySize));

    return 0;
}