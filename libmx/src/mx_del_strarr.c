#include "libmx.h"

void mx_del_strarr(char ***arr) {
    char **a = (*arr);

    for (int i = 0; a[i] != NULL; i++)
        mx_strdel(&a[i]);
    free(*arr);
    *arr = NULL;
}
