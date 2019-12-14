#include "pathfinder.h"

int mx_check_for_trigers(t_dey *dey, int pC) {
    for (int i = 0; i < pC; i++)
        if (dey->t[i] == 0)
            return 0;
    return 1;
}
