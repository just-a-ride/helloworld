
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <float.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

int
main(int argc, char **argv)
{
    printf("Hello World!\n");
    double result_array[256];
    double *arr = &result_array[0];
    size_t idx = 0;

    double a = 0.1;
    size_t i;

    for (i = 1; i < 10; ++i) {
        double m = (double)i;
        arr[idx++] = exp(m * a);
    }

    for (i = 0; i < idx; ++i)
        printf("%lf\n", result_array[i]);

    printf("\n\tFLT_EPSILON: %lf\n", 1e-5);

    return 0;
}
