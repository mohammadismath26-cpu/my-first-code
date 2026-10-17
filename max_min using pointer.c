#include <stdio.h>
int array_min_max(const int *arr, size_t n, int *out_min, int *out_max) {
    if (arr == NULL || out_min == NULL || out_max == NULL || n == 0) {
        return 0;
    }
    int min = *arr;
    int max = *arr;
    const int *p = arr + 1;
    const int *end = arr + n;
    while (p < end) {
        if (*p < min) min = *p;
        if (*p > max) max = *p;
        p++;
    }
    *out_min = min; 
    *out_max = max;
    return 1;
}
int main() {
    int arr[] = {12, -3, 8, 21, 0};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    int min, max;
    if (array_min_max(arr, n, &min, &max)) {
        printf("Minimum = %d; Maximum = %d\n", min, max);
    } else {
        printf("Error: Invalid input\n");
    }
    return 0;
}