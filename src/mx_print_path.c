#include "pathfinder.h"

void mx_print_path(char **pA, int start, int end) {
    mx_printstr(DELIM_LINE);
    mx_printstr("Path: ");
    mx_printstr(pA[start]);
    mx_printstr(" -> ");
    mx_printstr(pA[end]);
}
