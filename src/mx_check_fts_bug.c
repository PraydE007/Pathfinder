#include "pathfinder.h"

static bool is_symbol(char c) {
    if ((c >= 65 && c <= 90) || ((c >= 97) && (c <= 122))) {
        return true;
    }
    return false;
}

int mx_check_fts_bug(char *str) {
    if (!is_symbol(str[0]))
        return 1;
    return 0;
}
