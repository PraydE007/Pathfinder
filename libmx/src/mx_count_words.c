#include "libmx.h"

int mx_count_words(const char *str, char c) {
    int i = 0;
    int strfinded = 0;
    int count = 0;

    if (str == NULL)
        return -1;
    while (str[i] != '\0') {
        if (str[i] != c && !strfinded) {
            strfinded = 1;
            count++;
        }
        if (str[i] == c)
            strfinded = 0;
        i++;
    }
    return count;
}
