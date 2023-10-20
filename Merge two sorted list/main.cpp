#include <iostream>

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[]) {
    int i = 0, j = 0, k = 0;

    for (k = 0; k < size1 + size2; k++) {
        if (i < size1 && (j >= size2 || arr1[i] <= arr2[j])) {
            mergedArray[k] = arr1[i];
            i++;
        } else {
            mergedArray[k] = arr2[j];
            j++;
        }
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedArray[size1 + size2];

    mergeSortedArrays(arr1, size1, arr2, size2, mergedArray);

    std::cout << "Merged Array: ";
    for (int i = 0; i < size1 + size2; i++) {
        std::cout << mergedArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
