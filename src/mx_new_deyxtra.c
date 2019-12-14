#include "pathfinder.h"

void mx_new_dextra(t_dey **dey, int i, int pC) {
    for (int x = 0; x < pC; x++) {
        if (x == i) {
            (*dey)->l[x] = 0;
        }
        else
            (*dey)->l[x] = 2147483647;
        for (int y = 0; y < pC; y++) {
            (*dey)->f[x][y] = i;
        }
        (*dey)->t[x] = 0;
    }
}
