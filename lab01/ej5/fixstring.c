#include <stdbool.h>
#include <assert.h>

#include "fixstring.h"


unsigned int fstring_length(fixstring s) {
    int aux = 0;
    for (int i=0; s[i]!='\0'; i++) {
        aux = aux+1;
    }
    return aux;
}

bool fstring_eq(fixstring s1, fixstring s2) {
    bool aux2 = true;
    for (int i=0; (s1[i]!='\0' || s2[i]!='\0') && aux2; i++){
        aux2 = aux2 && (s1[i]==s2[i]);
    }
    return aux2;
}

bool fstring_less_eq(fixstring s1, fixstring s2) {
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0') {
        i=i+1;
        }
    return (s1[i]<=s2[i]);
}

void fstring_set(fixstring s1, const fixstring s2) {
    int i=0;
    while (i<FIXSTRING_MAX && s2[i]!='\0') {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

void fstring_swap(fixstring s1, fixstring s2) {
    fixstring aux;
    fstring_set(aux,s1);
    fstring_set(s1,s2);
    fstring_set(s2,aux);
}


