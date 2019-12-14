#include "pathfinder.h"

int mx_parse_str(char ***pA, char **wordsArr, int wC) {
    int j = 0;
    int count = 0;

    for (int i = 1; i < wC; i++) {
        char **ar1 = mx_strsplit(wordsArr[i], '-');
        char **ar2 = mx_strsplit(ar1[1], ',');
        if (mx_get_arrstr_index((const char **)(*pA), ar1[0]) == -1) {
            (*pA)[j] = mx_strndup(ar1[0], mx_strlen(ar1[0]));
            count++;
            j++;
        }
        if (mx_get_arrstr_index((const char **)(*pA), ar2[0]) == -1) {
            (*pA)[j] = mx_strndup(ar2[0], mx_strlen(ar2[0]));
            count++;
            j++;
        }
        mx_del_strarr(&ar1);
        mx_del_strarr(&ar2);
    }
    return count;
}
