#include <stdio.h>

int main() {
    
    int arr1[50], arr2[50], merged[100];
    int m, n;
    printf("Enter the size of the first array = ");
    scanf("%d", &m);


    printf("\nEnter %d elements for the first array = ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array = ");
    scanf("%d", &n);

    printf("Enter %d elements for the second array= ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    printf("\n");

    int mergedSize = m + n;

    for (int i = 0; i < m; i++) {
        merged[i] = arr1[i];
    }
    for (int i = m; i < m+n; i++) {
        merged[i] = arr2[i-m];
    }

    for (int i = 0; i < mergedSize - 1; i++) {
        for (int j = 0; j < mergedSize; j++) {
            if (merged[j] > merged[j + 1]) {
                int temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }

    printf("The final sorted merged array is = ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
