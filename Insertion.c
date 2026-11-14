#include <stdio.h>

int main() {
    int arr[10] = {12, 34, 45, 67, 65};
    int n = 5; //number of elements 
    int pos = 2; // element to be inserted at pos 2 
    int item = 30; // new element i.e 30 to be insterted at pos 2

    //original array(array traversal)
    printf("Array before insertion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    //shifting of element in the array
    for(int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    //to insert new elements  
    arr[pos] = item;
    n++; //increase array size

    //print final array
    printf("\nArray after insertion: ");
    for(int i = 0; i < n; i++) {  //traverses and prints all six elements 
        printf("%d ", arr[i]);
    }

    return 0;
}