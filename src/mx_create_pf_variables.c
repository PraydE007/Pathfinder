#include "pathfinder.h"

t_pf *mx_create_pf_variables(char **wordsArr) {
    t_pf *pf = (t_pf *)malloc(sizeof(t_pf));
    long pc = mx_atoi(wordsArr[0]);

    if (pc > 2147483647 || pc <= 0)
        mx_print_error(ERROR_LINE, "1", ERROR_INVALID);
    pf->pC = pc;
    pf->wC = mx_arr_size((const char **)wordsArr);
    pf->wC -= mx_check_fts_bug(wordsArr[pf->wC - 1]);
    pf->mat = mx_create_mat(pf->pC);
    pf->pA = mx_create_points(pf->pC);
    pf->dey = mx_create_dey(pf->pC);
    return pf;
}
