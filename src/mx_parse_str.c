#include "pathfinder.h"

static void check_points_count(int j, t_pf **pf) {
    if (j > (*pf)->pC)
        mx_print_error(ERROR_LOGIC, NULL, NULL);
}

static void count_plus(int *count, int *j) {
    (*count) += 1;
    (*j) += 1;
}

static void del_buf(char ***ar1, char ***ar2) {
    mx_del_strarr(ar1);
    mx_del_strarr(ar2);
}

int mx_parse_str(t_pf **pf, char **wordsArr) {
    int j = 0;
    int count = 0;

    for (int i = 1; i < (*pf)->wC; i++) {
        char **ar1 = mx_strsplit(wordsArr[i], '-');
        char **ar2 = mx_strsplit(ar1[1], ',');

        check_points_count(j, pf);
        if (mx_get_arrstr_index((const char **)((*pf)->pA), ar1[0]) == -1) {
            ((*pf)->pA)[j] = mx_strndup(ar1[0], mx_strlen(ar1[0]));
            count_plus(&count, &j);
        }
        if (mx_get_arrstr_index((const char **)((*pf)->pA), ar2[0]) == -1) {
            ((*pf)->pA)[j] = mx_strndup(ar2[0], mx_strlen(ar2[0]));
            count_plus(&count, &j);
        }
        del_buf(&ar1, &ar2);
    }
    return count;
}
