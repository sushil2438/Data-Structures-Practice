// Linear search
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 20;
    int found = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            printf("Element Found at index: %d", i);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Element Not Found");
    }

    return 0;
}