#include "pathfinder.h"

void mx_quit(t_pf **pf, int **output, char ***wordsArr) {
    free(*output);
    *output = NULL;
    mx_del_strarr(wordsArr);
    mx_del_tdarray(&((*pf)->dey), (*pf)->pC);
    free((*pf)->dey);
    (*pf)->dey = NULL;
    mx_del_mat(&((*pf)->mat), (*pf)->pC);
    mx_del_strarr(&((*pf)->pA));
    free(*pf);
    *pf = NULL;
}
