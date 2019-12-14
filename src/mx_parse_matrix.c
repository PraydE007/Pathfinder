#include "pathfinder.h"

void mx_parse_mat(t_pf **pf, char **wordsArr) {
    int index1 = 0;
    int index2 = 0;

    for (int y = 0; y < (*pf)->wC - 1; y++) {
        char **ar1 = mx_strsplit(wordsArr[y + 1], '-');
        char **ar2 = mx_strsplit(ar1[1], ',');
        index1 = mx_get_arrstr_index((const char **)((*pf)->pA), ar1[0]);
        index2 = mx_get_arrstr_index((const char **)((*pf)->pA), ar2[0]);
        ((*pf)->mat)[index1][index2] = mx_atoi(ar2[1]);
        ((*pf)->mat)[index2][index1] = mx_atoi(ar2[1]);
        mx_del_strarr(&ar1);
        mx_del_strarr(&ar2);
    }
}
