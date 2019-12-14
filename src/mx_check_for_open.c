#include "pathfinder.h"

void mx_check_for_open(int argc, char **argv) {
    int file = 0;
    char buf;

    if (argc != 2)
        mx_print_error(ERROR_USAGE, NULL, NULL);
    if ((file = open(argv[1], O_RDONLY)) == -1)
        mx_print_error(ERROR_FILE, argv[1], ERROR_EXIST);
    if (read(file, &buf, 1) == 0)
        mx_print_error(ERROR_FILE, argv[1], ERROR_EMPTY);
    close(file);
}
