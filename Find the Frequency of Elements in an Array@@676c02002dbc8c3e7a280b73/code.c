#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], freq[n];


    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array with -1
    }

    // Counting frequency
    for (int i = 0; i < n; i++) {
        if (freq[i] == -1) { // Only process uncounted elements
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // Mark duplicates as counted
                }
            }
            freq[i] = count; // Store count
        }
    }

    // Display frequencies

    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) { // Print only unique elements
            printf("%d %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
