#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "data.h"

void
print_data(data_t d) {
    printf("NOMBRE: %s\n"
           "EDAD  : %d años\n"
           "ALTURA: %d cm\n\n",
           d.name, d.age, d.height);
}

int main(void) {
    data_t messi = {"Leo Messi", 36, 169};
    print_data(messi);
    char *pn=NULL;
    unsigned int *pa=NULL;
    unsigned int *ps=NULL;
    data_t *pd=NULL;
    pn=messi.name;
    pa=&messi.age;
    ps=&messi.height;
    pd=&messi;
     pd= malloc(sizeof(data_t));
    printf("name-size  : %lu bytes\n"
           "age-size   : %lu bytes\n"
           "height-size: %lu bytes\n"
           "data_t-size: %lu bytes\n", sizeof(messi.name), sizeof(messi.age),sizeof(messi.height),sizeof(messi));
    printf("name-p : %p\n"
                "age-p : %p\n"
                "height-p : %p\n"
                "data-p : %p\n",(void *) pn,(void *)pa,(void *)ps,(void*)pd);
              free(pd);
    return EXIT_SUCCESS;
}
