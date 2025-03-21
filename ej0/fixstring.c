#include <stdbool.h>
#include <assert.h>

#include "fixstring.h"

unsigned int fstring_length(fixstring s) {
    unsigned int length = 0;

    while (s[length] != ('\0')){
        length++;
    } 

    return length;
}

bool fstring_eq(fixstring s1, fixstring s2) {
    int i = 0;
    bool eq = true;
    while (eq == true && s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2 [i] ) {
            eq = false;
        }
        i++;
        
    }
    return eq;

}

bool fstring_less_eq(fixstring s1, fixstring s2) {
        int i = 0;
        bool ord = false;
        while (ord = false) {
            if (s1[i] == '\0' && s2[i] != '\0') {
                ord = true;
            }
            i++;

    return (s1[i]< s2[i]);
}
}

/*

                    bool ord = true;
        for (int i = 0; i < fstring_length(s1); i++)
        {
            if ((int)s1[i]>(int)s2[i]) {
                ord = false;
            }
        }
        

*/