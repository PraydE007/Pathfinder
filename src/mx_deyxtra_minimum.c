#include "pathfinder.h"

void mx_dey_minimum(t_pf **pf, int i, int pC) {
    long index = 0;
    int max = 0;

    while (1) {
        for (int j = 0; j < pC; j++)
            if ((*pf)->dey->l[j] > (*pf)->dey->l[max])
                 max = j;
        for (int j = 0; j < pC; j++) {
            if ((*pf)->dey->l[j] <= (*pf)->dey->l[max]
                && (*pf)->dey->t[j] != 1)
                max = j;
            index = max;
        }
        (*pf)->dey->t[index] = 1;
        if (mx_check_for_trigers((*pf)->dey, pC) == 1)
            break;
        mx_push_new_dey(pf, i, index, pC);
    }
}
