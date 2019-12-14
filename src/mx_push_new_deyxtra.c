#include "pathfinder.h"

static void push_condition(t_pf **pf, int i, long index, int y) {
    if ((*pf)->dey->l[index] + (*pf)->mat[index][y] == (*pf)->dey->l[y]) {
        for (int x = 0; x < (*pf)->pC; x++) {
            if ((*pf)->dey->f[y][x] == i) {
                (*pf)->dey->f[y][x] = index;
                break;
            }
        }
    }
    else {
        (*pf)->dey->l[y] = (*pf)->dey->l[index] + (*pf)->mat[index][y];
        for (int x = 0; x < (*pf)->pC; x++)
            (*pf)->dey->f[y][x] = i;
        (*pf)->dey->f[y][0] = index;
    }
}

void mx_push_new_dey(t_pf **pf, int i, long index, int pC) {
    for (int y = 0; y < pC; y++) {
        if ((*pf)->mat[index][y] != 2147483647
            && (*pf)->dey->l[index] + (*pf)->mat[index][y] <= (*pf)->dey->l[y]
            && (*pf)->dey->t[y] == 0)
        {
            push_condition(pf, i, index, y);
        }
    }
}
