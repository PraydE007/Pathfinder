#include "pathfinder.h"

void mx_check_first_line(char *line) {
    int len = mx_strlen(line);

    for (int i = 0; i < len; i++) {
        if (line[i] < 48 || line[i] > 57)
            mx_print_error(ERROR_LINE, "1", ERROR_INVALID);
    }
}
