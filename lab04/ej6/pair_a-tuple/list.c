#include <stdbool.h>
#include <stdio.h>
#include "list.h"

typedef int elem;
typedef struct _list * list;

typedef struct _list {
    elem e;
    list next;
};

list empty() {
    list l;
    l = NULL;
    
    return l;
}

list addl(elem e, list l) {
    l->next = l;
    l->elem = e;
    
    return l;
}
