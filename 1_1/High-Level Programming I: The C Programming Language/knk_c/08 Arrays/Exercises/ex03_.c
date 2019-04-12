/* Initializes the first and the last values of an array */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool weekend[] = {true, false, false, false, false, false, true};

    for (int i = 0; i < (sizeof (weekend) / sizeof (weekend[0])); ++i) {
        printf("%d : %d\n", i, weekend[i]);
    }

    return 0;
}
 
