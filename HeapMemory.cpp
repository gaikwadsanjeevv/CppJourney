#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));  // allocate 4 bytes in heap

    *ptr = 50;  // store value in that memory
    printf("Value = %d\n", *ptr);  // Output: 50

    free(ptr);  // free heap memory

    return 0;
}
