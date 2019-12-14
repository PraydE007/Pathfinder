#include "libmx.h"

int mx_arr_size(const char **str) {
    int len = 0;
    for (len = 0; str[len] != NULL; len++);
    return len;
}
