#include <stdio.h>
int sum_array(const int *arr, size_t n) {
    int sum = 0;
    const int *p = arr;
    const int *end = arr + n;
    while (p < end) {
        sum += *p;
        p++;
    }
    return sum;
}
int main() {
    int arr[] = {4, 7, 2, 9};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    int result = sum_array(arr, n);
    printf("Sum = %d\n", result);
    return 0;
}