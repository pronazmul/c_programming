#include <stdio.h>

int main() {

    // Declare array size
    int arr[5];

    // Input values into the array
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    //Input Value to be searched with
    int searchValue;
    printf("Enter Search Value: ");
    scanf("%d", &searchValue);




    for (int i = 1; i < 5; i++) {
            if(arr[i]==searchValue){
                printf("Search Value Found: %d\n", arr[i]);
                return 0;
            }
    }

    printf("Search Value Not Found: \n");
    return 0;
}



















