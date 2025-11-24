#include <stdio.h>

int findMin(int arr[], int n) {
    if (n == 1) 
        return arr[0];

    int subMin = findMin(arr, n - 1);

    return (arr[n - 1] < subMin) ? arr[n - 1] : subMin;
}

int main() {
    int arr[100], n;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int result = findMin(arr, n);
    printf("%d\n", result);

    return 0;
}
