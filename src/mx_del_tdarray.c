#include "pathfinder.h"

void mx_del_tdarray(t_dey **arr, int size) {
    free((*arr)->l);
    (*arr)->l = NULL;
    free((*arr)->t);
    (*arr)->t = NULL;
    for (int y = 0; y < size; y++) {
        free((*arr)->f[y]);
        (*arr)->f[y] = NULL;
    }
    free((*arr)->f);
    (*arr)->f = NULL;
}
