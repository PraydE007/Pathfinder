#include "pathfinder.h"

static void clear_output(int o, int **output, int i) {
    for (int x = 0; x < o; x++) {
        (*output)[x] = i;
    }
}

static void generate_output_recusrive(t_pf *pf, int **output, t_rec *rec) {
    t_rec new_rec;

    for (int y = pf->pC - 1; y >= 0; y--) {
        if (pf->dey->f[rec->o][y] != rec->i) {
            clear_output(rec->o, output, rec->i);
            (*output)[rec->p] = rec->o;
            new_rec = mx_create_rec(rec->p - 1, pf->dey->f[rec->o][y],
                rec->i, rec->s);
            generate_output_recusrive(pf, output, &new_rec);
        }
        else if (y == 0) {
            clear_output(rec->o, output, rec->i);
            (*output)[rec->p] = rec->o;
            mx_print_path(pf->pA, rec->i, rec->s);
            mx_print_route(pf, rec, *output);
            mx_print_price(pf, rec, *output);
            mx_print_end();
        }
    }
}

void mx_create_output(t_pf *pf, int **output, int i) {
    t_rec rec;

    for (int o = i + 1; o < pf->pC; o++) {
        for (int x = 0; x <= pf->pC; x++)
            (*output)[x] = i;
        rec = mx_create_rec(pf->pC - 1, o, i, o);
        generate_output_recusrive(pf, output, &rec);
    }
}
