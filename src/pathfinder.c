#include "pathfinder.h"

int main(int argc, char *argv[]) {
    char **wordsArr = NULL;
    t_pf *pf = mx_parse_file(&wordsArr, argc, argv);
    int *output = (int *)malloc(sizeof(int) * pf->pC + 1);

    for (int i = 0; i < pf->pC - 1; i++) {
        mx_new_dextra(&(pf->dey), i, pf->pC);
        mx_dey_minimum(&pf, i, pf->pC);
        mx_create_output(pf, &output, i);
    }
    mx_quit(&pf, &output, &wordsArr);
    return 0;
}
