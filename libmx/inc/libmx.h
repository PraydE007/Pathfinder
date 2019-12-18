#ifndef LIBMX_H
#define LIBMX_H

/* DEFINES */

/* -------- */

/* INClUDES */

#include <unistd.h>
#include <wchar.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdbool.h>

/* -------- */

/* DECLARATIONS */

char *mx_itoa(int number);
char *mx_strnew(const int size);
char *mx_file_to_str(const char *file);
char **mx_strsplit(const char *s, char c);
char *mx_strndup(const char *s1, size_t n);
char *mx_strncpy(char *dst, const char *src, int len);

long mx_atoi(char *str); //
int mx_nbrlen(long long n); //
int mx_strlen(const char *s);
int mx_arr_size(const char **str); //
int mx_count_words(const char *str, char c);
int mx_strcmp(const char *s1, const char *s2);
int mx_get_arrstr_index(const char **arr, const char *str); //

void mx_printint(int n);
void mx_printchar(char c);
void mx_strdel(char **str);
void mx_printstr(const char *s);
void mx_del_strarr(char ***arr);

/* -------- */

#endif
