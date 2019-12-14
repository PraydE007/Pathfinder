#include "pathfinder.h"

void mx_print_error(char *str1, char *str2, char *str3) {
    if (str2 == NULL || str3 == NULL) {
        write(2, str1, mx_strlen(str1));
    }
    else {
        write(2, str1, mx_strlen(str1));
        write(2, str2, mx_strlen(str2));
        write(2, str3, mx_strlen(str3));
    }
    exit(0);
}
