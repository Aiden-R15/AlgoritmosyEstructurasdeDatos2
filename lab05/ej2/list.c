#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

//
// Constructors
//


/**
 * @brief Creates a new empty list.
 */
list empty(){
 list l= NULL;
  return l;
}
 

/**
 * @brief Adds element `e` to the left of list `l`.
 */
list addl(elem e, list l){
 list nl = malloc (sizeof(struct _list));
 nl->data = e;
 nl->next = l;
 return nl;
}
//
// Operations
//

/**
 * @brief Returns whether the list `l` is empty.
 */
bool is_empty(list l){
 return l == NULL;
}

/**
 * @brief Returns first element of list `l`.
 *
 * PRECONDITION: !is_empty(l)
 */
elem head(list l){
 return l->data;
}

/**
 * @brief Removes in-place the first element of list `l`.
 *
 * PRECONDITION: !is_empty(l)
 */
list tail(list l){
 list fst = l;
 list nh = l->next;
 free(fst);
 fst = NULL;
 return nh;
}

/**
 * @brief Adds in-place element `e` to the right of list `l`.
 */
list addr(list l, elem e){
 list nl = malloc(sizeof(struct _list));
 nl->data = e;
 nl->next = NULL;
 if (is_empty(l) == false){
   list aux = l;
   while(l->next != NULL){
     l = l->next;
   }
   l->next=nl;
   l=aux;
  
 }else{
 l=nl;
 }
 return l;
}

/**
 * @brief Return the amount of elements of list `l`.
 */
int length(list l){
 int length = 0;
 while (l != NULL){
  l=l->next;
  length++;
 }
 return length;
}

/**
 * @brief Adds to the end of `l` all elements of `l0`.
 */
list concat(list l, list l0){
 if(l == NULL){
   l=l0;
 }
 if(l0 == NULL){
   l=l;
 }
 if(l != NULL && l0 != NULL){
 list aux = l;
  while (aux->next != NULL){
   aux = aux->next;
  }
  aux->next = l0;
 }
 return l;
}

/**
 * @brief Return the `n`-th element of `l`.
 *
 * PRECONDITION: n < length(l)
 */
elem index(list l, int n){
 list aux = l;
 int index = 0;
 while (index != n){
  aux = aux->next;
  index++;
 }
 return aux->data;
}

/**
 * @brief Takes the first `n` elements of `l` in-place, removing the rest.
 */
list take(list l, int n){
list aux = l;
list next;
 if (n == 0){
   destroy_list(l);
   l = NULL;
 } else if (n < length(l)){
   for (int i = 0; i < n-1; i++) {
    l= l->next;
   }
  list to_free = l->next;
   l->next = NULL;
   while (to_free != NULL){
    next = to_free->next;
    free(to_free);
    to_free = next;
   }
   free(next);
   l=aux;
 } 
 

 return l;
}

/**
 * @brief Removes the first `n` elements of `l` in-place.
 */
list drop(list l, int n){
list aux;
 if (n == length(l)){
   destroy_list(l);
   l = NULL;
 } else if (n < length(l)){
   for (int i = 0; i < n-1; i++) {
    l= l->next;
   }
   aux = l->next;
   destroy_list(l);
   l=aux;
   }
return l;
}

/**
 * @brief  Makes a copy of list `l`. Allocates new memory.
 */
list copy_list(list l){
list aux;
 for(int i=0; i < length(l); i++){
  aux = l;
  l=l->next;
 }
return aux;
}

/**
 * @brief Frees memory for `l`.
 */
void destroy_list(list l) {
list aux;
  for(int i = 0; i < length(l); i++){
   aux = l->next;
   free(l);
   l = aux;
  }
 free(aux);
}

