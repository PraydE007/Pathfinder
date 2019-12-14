#include "pathfinder.h"

void mx_del_mat(int ***mat, int pC) {
    for (int y = 0; y < pC; y++) {
        free((*mat)[y]);
        (*mat)[y] = NULL;
    }
    free(*mat);
    *mat = NULL;
}
