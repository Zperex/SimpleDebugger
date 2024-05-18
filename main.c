#include <stdio.h>
#include <stdlib.h>
#include "debug.h"

int main() {


    int a, b;


    add_TT('a');
    add_TT('b');


    display_TT('a');
    display_TT('b');

    b = 0;
    update_TT('b', b);

    a = 1;
    update_TT('a', a);

    while (b < 10) {
        a = a + b;
        update_TT('a', a);

        b = b + 1;
        update_TT('b', b);

        display_TT('b');
    }


    remove_TT('a');
    display_TT('a');

    remove_TT('b');
    display_TT('b');

    return 0;
}
