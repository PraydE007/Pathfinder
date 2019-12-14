#include "pathfinder.h"

char **mx_create_points(int pC) {
    char **pA = (char **)malloc(sizeof(char *) * pC + 1);
    for (int i = 0; i <= pC; i++)
        pA[i] = NULL;
    return pA;
}
