#include <iostream>
#include <cstdlib>
#include "dynamicallocation.h"

int main() {
    int *array = NULL;
    int size = 0;
    int choice;

    do {
        printf("Select an option:\n");
        printf("1. Enter array elements\n");
        printf("2. Display the content of the array\n");
        printf("3. Determine the maximum value\n");
        printf("4. Determine the minimum value\n");
        printf("5. Determine the average value\n");
        printf("0. Exit\n");
        printf("Select an option here:\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                array = enterArray(&size);
                break;
            }
            case 2: {
                displayArray(array, size);
                break;
            }
            case 3: {
                findMaxValue(array, size);
                break;
            }
            case 4: {
                findMinValue(array, size);
                break;
            }
            case 5: {
                calculateAverageValue(array, size);
                break;
            }
            case 0: {
                printf("Exiting program.\n");
                break;
            }
            default: {
                printf("Wrong number, please choose correct option.\n");
                break;
            }
        }
    } while (choice != 0);

    free(array);

    return 0;
}