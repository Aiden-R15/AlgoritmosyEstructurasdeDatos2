#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#include "intercalated_sort.h"

/**
 * @brief Ordena las posiciones pares del arreglo (0-based)
 * usando el algoritmo de ordenación por inserción.
 */
 
 void insert (int a[], int i) {
    while (i>0 && a[i]<a[i-2]) {
        int tmp = a[i];
        a[i] = a[i-2];
        a[i-2] = tmp;
        i = i-2;
    }
}
 
void intercalated_sort(int a[], int length) {
    int i = 0;
    while (i<length) {
        insert(a,i);
        i = i+2;
    }
}


