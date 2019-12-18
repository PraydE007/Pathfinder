#include "pathfinder.h"

void mx_print_route(t_pf *pf, t_rec *rec, int *output) {
    int s = 0;

    while (output[s] != rec->i && s + 1 != pf->pC)
        s++;
    mx_printchar('\n');
    mx_printstr("Route: ");
    for (int x = s; x <= pf->pC; x++) {
        if (x == s || output[x] != rec->i) {
            mx_printstr(pf->pA[output[x]]);
            if (x != pf->pC - 1)
                mx_printstr(" -> ");
        }
    }
}
