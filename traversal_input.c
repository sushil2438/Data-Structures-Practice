// Travesrsal using user input : 

#include<stdio.h>

int main(){

    int arr[10], n;

    printf("Enter the number of Elements : ");
    scanf("%d", &n);

    printf("Enter %d Elements :\n", n);

    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }

    printf("Array Elements are :\n");

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}