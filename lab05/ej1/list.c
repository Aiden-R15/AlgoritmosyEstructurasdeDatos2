#include <stdbool.h>
#include <stdio.h>

typedef int elem;
typedef struct _list * list;

typedef struct _list {
    elem el;
    list next;
};

list empty() {
    list l;
    l = NULL;
    
    return l;
}

list addl(elem e, list l) {
    l->next = l;
    l->el = e;
    
    return l;
}

bool is_empty(list l) {
    bool empty = l==NULL;
    
    return empty;
}
