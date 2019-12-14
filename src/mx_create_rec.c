#include "pathfinder.h"

t_rec mx_create_rec(int p, int o, int i, int s) {
    t_rec rec;

    rec.p = p;
    rec.o = o;
    rec.i = i;
    rec.s = s;
    return rec;
}
