#include "pathfinder.h"

int **mx_create_mat(int pC) {
    int **mat = (int **)malloc(sizeof(int *) * pC);

    for (int x = 0; x < pC; x++) {
        mat[x] = (int *)malloc(sizeof(int) * pC);
        for (int y = 0; y < pC; y++) {
            mat[x][y] = 2147483647;
        }
    }
    return mat;
}
