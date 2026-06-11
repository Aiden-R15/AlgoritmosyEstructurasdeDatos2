#include "reverse.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * @brief Devuelve en UNA NUEVA lista el resultado de invertir
 * el orden de los elementos de `l`
 *
 */
list reverse(list l) {
list nl = empty ();
list copy_l = l;
 while(copy_l != NULL){
  nl = addl(copy_l->data,nl);
  copy_l=copy_l->next;
 }
return nl;
}
