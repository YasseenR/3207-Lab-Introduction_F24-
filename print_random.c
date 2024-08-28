#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

//Given Project code
char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}

int main () {

    srand( (unsigned)time(NULL) );

    for(int a=0; a < 7; a++) {
        putchar(randchar() );
    }

    putchar('\n');

    return(0);

}