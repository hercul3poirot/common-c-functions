//This function performs a bubble sort, a sorting algorithm which works by repeatedly swapping the adjacent elements if they are in the wrong order.
#include <stdio.h> //Required for the example, not required for the sort.

void bubbleSort(int arr[], int length){
    int temp;
    for (int i = 0; i < length - 1; i++) { //Accessing each element
        for (int j = 0; j < length - i - 1; j++) { // Last i elements are already in place, which is why we use 'length - i - 1'
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//Example usage of the function above: 
int main(){
    int arr[] = {223, 77, 187, -148, -175, -53, 446, -499, 106, 416, 208, 220, -57, -322, -290}, length = sizeof(arr)/sizeof(arr[0]);
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

