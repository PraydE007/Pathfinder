#include "libmx.h"

int mx_get_arrstr_index(const char **arr, const char *str) {
    if (arr == NULL || str == NULL)
        return -2;
    for (int i = 0; arr[i] != NULL; i++) {
        if (mx_strcmp(arr[i], str) == 0)
            return i;
    }
    return -1;
}
