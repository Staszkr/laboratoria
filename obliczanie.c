#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int obliczanie1(int* czas, double* x, double* y) {
    if (czas == NULL || x == NULL || y == NULL) {
        return 0; // B??d: wska?nik jest NULL
    }

    // Dereferencja wska?nika czas i obliczenia
    *x = cos((double)(*czas) / 4.0);
    *y = sin((double)(*czas) / 4.0);

    return 1;
}