#include <stdio.h>
/*  
 *  standard input output header file
 *  includes printf and scanf
 *  (.h) header = library
 *  :Man <syntax>
 */

// Prototype = promise to the compiler that this function exists
void count(int n);

int main(void) {
    int until;

    printf("Until when to count? ");

    // & points to address of variable
    scanf("%i", &until);
    count(until);
}

void count(int n) {
    for (int i = 0; i <= n; i++){
        if (i != 0) printf("%i\n", i);
    /* %i = int         | 4 bytes
     * %li = long int   | 8 bytes
     * %f = float       | 4 bytes
     * %d = double      | 8 bytes
     * %c = char        | 1 byte
     * %s = string      | ? bytes 
     *
     * This all might be wrong idk, C is hard okay?
     */
    }
}

