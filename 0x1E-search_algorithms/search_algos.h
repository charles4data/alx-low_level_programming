#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* include c libraries */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* Function Prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif 
