//This function performs a bubble sort, a sorting algorithm which works by repeatedly swapping the adjacent elements if they are in the wrong order.
#include <stdio.h> //Required for the example, not required for the sort.

void bubbleSort(int arr[], int length){
    int start_position = 0, end_position = length, temp;
    for (int i = 1; i < length; i++) {
        while (start_position != end_position){
            if (arr[start_position] > arr[start_position + 1]) {
                temp = arr[start_position + 1];
                arr[start_position + 1] = arr[start_position];
                arr[start_position] = temp; 
            }
            start_position++;    
        } 
        end_position--;
        start_position = 0;
    }
}

//Example usage of the function above: 
int main(){
    int arr[] = {3,4,2}, length = sizeof(arr)/sizeof(arr[0]); 
    /*Works mostly with arrays of any size, but for some reason the length variable trips out the results (tried on different compilers)
    Best off explicitly defining length*/
    printf("Original numbers: ");
    for (int i = 0; i < length; i++){
        printf("%i ", arr[i]);
    }
    bubbleSort(arr, length);
    printf("\nSorted numbers: ");
    for (int i = 0; i < length; i++){
        printf("%i ", arr[i]);
    }
    return 0;
}
