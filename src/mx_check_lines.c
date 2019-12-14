#include "pathfinder.h"

static bool is_symbol(char c) {
    if ((c >= 65 && c <= 90) || ((c >= 97) && (c <= 122))) {
        return true;
    }
    return false;
}

static bool is_number(char c) {
    if ((c >= 48) && (c <= 57)) 
        return true;
    return false;
}

static bool check_points(char *str, int *i, char delim) {
    bool result = false;

    while (is_symbol(str[(*i)])) {
        result = true;
        (*i)++;
    }
    if (str[(*i)] != delim) 
        result = false;
    (*i)++;
    return result;
}

static bool check_decimal(char *str, int *i) {
    bool result = false;

    while(is_number(str[(*i)])) {
        result = true;
        (*i)++;
    }
    if (str[(*i)] != '\0')
        result = false;
    return result;
}

void mx_check_lines(t_pf *pf, char **wordsArr) {
    bool one = false;
    bool two = false;
    bool tree = false;
    int x = 0;

    for (int i = 1; i < pf->wC; i++) {
        x = 0;
        one = check_points(wordsArr[i], &x, '-');
        two = check_points(wordsArr[i], &x, ',');
        tree = check_decimal(wordsArr[i], &x);
        if (!one || !two || !tree)
            mx_print_error(ERROR_LINE, mx_itoa(i + 1), ERROR_INVALID);
    }
}
