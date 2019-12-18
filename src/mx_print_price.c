#include "pathfinder.h"

static void output_for(t_pf *pf, t_rec *rec, int *output, int *triger) {
    int s = 0;

    while (output[s] != rec->i && s + 1 != pf->pC)
        s++;
    for (int x = s + 1; x <= pf->pC; x++) {
        if (output[x] != rec->i && (*triger) > 0) {
            mx_printstr(" + ");
        }
        if (output[x - 1] == rec->i && output[x] != rec->i) {
            mx_printint(pf->mat[output[x - 1]][output[x]]);
            (*triger) += 1;
        }
        else if (output[x - 1] != rec->i && output[x] != rec->i) {
            mx_printint(pf->mat[output[x - 1]][output[x]]);
            (*triger) += 1;
        }
    }
}

int mx_print_price(t_pf *pf, t_rec *rec, int *output) {
    int triger = 0;

    mx_printchar('\n');
    mx_printstr("Distance: ");
    output_for(pf, rec, output, &triger);
    if (triger > 1) {
        mx_printstr(" = ");
        mx_printint(pf->dey->l[rec->s]);
    }
    return triger;
}
