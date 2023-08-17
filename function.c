#include <stdio.h>
#include <stdlib.h>
int main()
 {
    int number = 0;
    int *pointer = NULL;
    pointer = &number;
    printf("La variable est à l\'adresse %p" , pointer);
    return 0;
 }