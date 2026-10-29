#include <stdio.h>
#include <stddef.h>

// D1.1 — Array Statistics
int array_stats(const int *arr, size_t n, int *out_min, int *out_max, long *out_sum) {
    if (!arr || !out_min || !out_max || !out_sum || n == 0) return -1;    
    const int *p = arr;
    const int *end = arr + n;
    int min = *p;
    int max = *p;
    long sum = 0;
      for (p=0; p < end; p++) {
        if (*p < min) min = *p;
        if (*p > max) max = *p;
        sum += *p;
    }
    *out_min = min;
    *out_max = max;
    *out_sum = sum;
    return 0;
}
