#include <stdio.h>
#include <stddef.h>

// D1.2 — Array Reversal - left/right pointers only
void reverse_array_ptr(int *arr, size_t n) {
    if (!arr || n <= 1) return;
    int *left = arr;
    int *right = arr + n - 1;
    while (left < right) {
        int tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}
