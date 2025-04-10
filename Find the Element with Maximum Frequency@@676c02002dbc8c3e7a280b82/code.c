#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxCount = 0;
    int mostFrequent;

    // Outer loop to pick each element
    for(int i = 0; i < n; i++) {
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        // Update most frequent element
        if(count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }

    printf("%d\n", mostFrequent);
    printf("%d\n", maxCount);

    return 0;
}
