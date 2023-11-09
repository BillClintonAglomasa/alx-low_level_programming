ifndef FUNCTION_POINTERS_H
def FUNCTION_POINTERS_H

#include <stddef.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(in *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTER_H */
