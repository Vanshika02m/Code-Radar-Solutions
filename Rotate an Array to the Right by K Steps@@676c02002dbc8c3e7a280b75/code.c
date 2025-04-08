// Your code here...// Your code here...#include <stdio.h>
#include<stdio.h>
int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n], temp[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    k = k % n;
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    for (int i = k; i < n; i++) {
        temp[i] = arr[i - k];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
