#include <stdio.h>
#include <stdbool.h>

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    if (isSorted(arr, n)) {
        printf("Sorted.\n");
    } else {
        printf("Not Sorted.\n");
    }

    return 0;
}
