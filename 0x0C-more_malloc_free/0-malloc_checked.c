#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - array for prints a string
 *@b: number of memory
 *Return: void
 */

void *malloc_checked(unsigned int b) {
    void *ptr = malloc(b);
    if (ptr == NULL) {
        fprintf(stderr, "Error: Failed to allocate memory\n");
        exit(98);
    }
    return ptr;
}
