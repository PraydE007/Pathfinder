#include "pathfinder.h"

static bool is_symbol(char c) {
    if (c >= 32 && c <= 126) {
        return true;
    }
    return false;
}

int mx_check_fts_bug(char *str) {
    if (!is_symbol(str[0]))
        return 1;
    return 0;
}
