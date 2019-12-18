#ifndef PATHFINDER_H
#define PATHFINDER_H

/* DEFINES */

#define ERROR_USAGE "usage: ./pathfinder [filename]\n"
#define ERROR_FILE "error: file "
#define ERROR_EXIST " does not exist\n"
#define ERROR_EMPTY " is empty\n"
#define ERROR_LINE "error: line "
#define ERROR_INVALID " is not valid\n"
#define ERROR_LOGIC "error: invalid number of islands\n"
#define DELIM_LINE "========================================\n"

/* -------- */

/* INClUDES */

#include "libmx/inc/libmx.h"

/* -------- */

/* DECLARATIONS */

typedef struct s_rec {
    int p;
    int o;
    int i;
    int s;
} t_rec;

typedef struct s_dey {
    int *l;
    int **f;
    int *t;
} t_dey;

typedef struct s_pf {
    int pC;
    int wC;
    int **mat;
    char **pA;
    t_dey *dey;
} t_pf;

t_pf *mx_create_pf_variables(char **wordsArr);
t_pf *mx_parse_file(char ***wordsArr, int argc, char **argv);

t_dey *mx_create_dey(int pC);

t_rec mx_create_rec(int p, int o, int i, int s);

void mx_print_end();
void mx_check_lines(t_pf *pf, char **wordsArr);
void mx_check_first_line(char *line);
void mx_del_tdarray(t_dey **arr, int size);
void mx_check_for_open(int argc, char **argv);
void mx_del_mat(int ***mat, int pC);
void mx_create_output(t_pf *pf, int **output, int i);
void mx_quit(t_pf **pf, int **output, char ***wordsArr);
void mx_print_path(char **pA, int start, int end);
void mx_new_dextra(t_dey **dey, int i, int pC);
void mx_print_error(char *str1, char *str2, char *str3);
void mx_print_route(t_pf *pf, t_rec *rec, int *output);
void mx_dey_minimum(t_pf **pf, int i, int pC);
void mx_parse_mat(t_pf **pf, char **wordsArr);
void mx_push_new_dey(t_pf **pf, int i, long index, int pC);

int mx_check_fts_bug(char *str);
int mx_check_number(char *line);
int **mx_create_mat(int pC);
int mx_check_for_trigers(t_dey *dey, int pC);
int mx_print_price(t_pf *pf, t_rec *rec, int *output);
int mx_parse_str(t_pf **pf, char **wordsArr);

char **mx_create_points(int pC);

/* -------- */

#endif
