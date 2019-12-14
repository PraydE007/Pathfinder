#include "pathfinder.h"

t_dey *mx_create_dey(int pC) {
    t_dey *dey = (t_dey *)malloc(sizeof(t_dey));
    dey->l = (int *)malloc(sizeof(int) * pC);
    dey->t = (int *)malloc(sizeof(int) * pC);
    dey->f = (int **)malloc(sizeof(int *) * pC);

    for (int y = 0; y < pC; y++) {
        dey->l[y] = 0;
        dey->t[y] = 0;
        dey->f[y] = (int *)malloc(sizeof(int) * pC);
        for (int x = 0; x < pC; x++) {
            dey->f[y][x] = 0;
        }
    }
    return dey;
}
