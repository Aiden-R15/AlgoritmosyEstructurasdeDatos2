#include <stdio.h>
#include <stdbool.h>
#include "cima.h"

/**
 * @brief Indica si el arreglo tiene cima.
 *
 * Un arreglo tiene cima si existe una posición k tal que el arreglo es
 * estrictamente creciente hasta la posición k y estrictamente decreciente
 * desde la posición k.
 *
 * @param a Arreglo.
 * @param length Largo del arreglo.
 */
bool tiene_cima(int a[], int length) {
    
    int t_cima = 0;
    for (int i=1; i<(length-1); i++) {
        if (a[i-1]<a[i] && a[i]>a[i+1]) {
            t_cima++;
        }
        else if ()
    }

    return (t_cima==1);
}

/**
 * @brief Dado un arreglo que tiene cima, devuelve la posición de la cima.
 *
 * Un arreglo tiene cima si existe una posición k tal que el arreglo es
 * estrictamente creciente hasta la posición k y estrictamente decreciente
 * desde la posición k.
 * La cima es el elemento que se encuentra en la posición k.
 * PRECONDICION: tiene_cima(a, length)
 *
 * @param a Arreglo.
 * @param length Largo del arreglo.
 f (tiene_cima(a,length)) {
        
    }*/
int cima(int a[], int length) {
    
    int cima=0;
    for (int i=1; i<(length-1); i++) {
        if (a[i-1]<a[i] && a[i]>a[i+1]) {
            cima=i;
        }
    }

    return cima;
}
