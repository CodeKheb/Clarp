#include <stdio.h>

/* Command line arguments
 * argc == argument count
 * *argv[] == * points to an array of characters (string)
 */
int main(int argc, char *argv[]){
    // if argument count is not 2
    if (argc != 2) {
        printf("Missing Command Line Argument");
        // echo $? 
        return 1;
    }
    printf("Hello, %s\n", argv[1]);
    // echo $? 
    return 0;
}
