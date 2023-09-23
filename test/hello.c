#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare array size
    int arr[n];

    // Input values into the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int max = arr[0];
    int min = arr[0];


    for (int i = 1; i < n; i++) {

        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < max) {
            min = arr[i];
        }
    }

    printf("The maximum value in the array is: %d\n", max);
    printf("The Minimum value in the array is: %d\n", min);
    return 0;
}




















