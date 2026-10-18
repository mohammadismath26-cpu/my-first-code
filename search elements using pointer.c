#include <stdio.h>
const int *find_element(const int *arr, size_t n, int key) {
    if (arr == NULL || n == 0) {
        return NULL;
    }
    const int *p = arr;
    const int *end = arr + n;
    while (p < end) {
        if (*p == key) {
            return p;
        }
        p++;
    }
    return NULL;
}
int main() {
    int arr[] = {5, 10, 15, 20};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    int key = 15;
    const int *result = find_element(arr, n, key);
    if (result != NULL) {
        printf("Found value = %d; returned pointer refers to arr[%ld]\n", *result, result - arr);
    } else {
        printf("key %d -> returned pointer is NULL\n", key);
    }
    key = 99;
    result = find_element(arr, n, key);
    if (result != NULL) {
        printf("Found value = %d\n", *result);
    } else {
        printf("key = %d -> returned pointer is NULL\n", key);
    }
    return 0;
}