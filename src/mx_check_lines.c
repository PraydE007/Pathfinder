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

static bool check_points(char *str, int *x, char delim) {
    bool result = false;

    while (is_symbol(str[(*x)])) {
        result = true;
        (*x)++;
    }
    if (str[(*x)] != delim) 
        result = false;
    (*x)++;
    return result;
}

static bool check_decimal(char *str, int *x, int i) {
    bool result = false;
    char *strnum = mx_strndup(&str[(*x)], 20);
    long len = 0;

    if (strnum == NULL)
        mx_print_error(ERROR_LINE, mx_itoa(i + 1), ERROR_INVALID);
    else {
        len = mx_atoi(strnum);
        if (len <= 0 || len > 2147483647)
            mx_print_error(ERROR_LINE, mx_itoa(i + 1), ERROR_INVALID);
    }
    while(is_number(str[(*x)])) {
        result = true;
        (*x)++;
    }
    if (str[(*x)] != '\0')
        result = false;
    mx_strdel(&strnum);
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
        tree = check_decimal(wordsArr[i], &x, i);
        if (!one || !two || !tree)
            mx_print_error(ERROR_LINE, mx_itoa(i + 1), ERROR_INVALID);
    }
}
