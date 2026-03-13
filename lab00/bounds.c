#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define ARRAY_SIZE 4

struct bound_data {
    bool is_upperbound;
    bool is_lowerbound;
    bool exists;
    unsigned int where;
};

struct bound_data check_bound(int value, int arr[], unsigned int length) {
    struct bound_data res;
    res.is_upperbound = true;
    res.is_lowerbound = true;
    res.exists = false;
    res.where = -1;
    for (unsigned int i=0; i<length ; i++) {
     res.is_upperbound = res.is_upperbound && arr[i]<=value;
     res.is_lowerbound = res.is_lowerbound && arr[i]>=value;
     if (value == arr[i]){
      res.where = i;
      res.exists = true;
     }
    }
    return res;
}

void pedir_arreglo (int n_max, int a[]) {
    int i;
    i=0;
    while (i!=n_max) {
        printf ("Ingrese un valor para la posicion %d del arreglo:\n", i);
        scanf ("%d", &a[i]);
        i = i+1;
    }    
}


int main(void) {
    //int a[ARRAY_SIZE] = {0, -1, 9, 4};
    int value;
    unsigned int size;
    printf ("Ingrese el tamaño del arreglo: ");
    scanf ("%u", &size);
    int a[size];
    pedir_arreglo (size, a);
    printf ("Ingrese un valor entero: ");
    scanf ("%d", &value);
    struct bound_data result = check_bound(value, a, size);

    // TODO: REEMPLAZAR LO SIGUIENTE LUEGO POR LA SALIDA QUE PIDE EL ENUNCIADO
    printf("%d\n", result.is_upperbound); // Imprime 1
    printf("%d\n", result.is_lowerbound); // Imprime 0
    printf("%u\n", result.exists);        // Imprime 1
    printf("%u\n", result.where);         // Imprime 2

    return EXIT_SUCCESS;
}

