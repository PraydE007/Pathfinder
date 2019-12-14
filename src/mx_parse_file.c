#include "pathfinder.h"

t_pf *mx_parse_file(char ***wordsArr, int argc, char **argv) {
    char *file = NULL;
    t_pf *pf = NULL;
    int count;

    mx_check_for_open(argc, argv);
    file = mx_file_to_str(argv[1]);
    (*wordsArr) = mx_strsplit(file, '\n');
    mx_strdel(&file);
    mx_check_first_line((*wordsArr)[0]);
    pf = mx_create_pf_variables(*wordsArr);
    mx_check_lines(pf, *wordsArr);
    count = mx_parse_str(&(pf->pA), *wordsArr, pf->wC);
    if (count != pf->pC)
        mx_print_error(ERROR_LOGIC, NULL, NULL);
    mx_parse_mat(&pf, *wordsArr);
    return pf;
}
