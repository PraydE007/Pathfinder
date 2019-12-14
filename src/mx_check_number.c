#include "pathfinder.h"

int mx_check_number(char *line) {
    bool number = false;
    int len = mx_strlen(line);

    for (int i = 0; i < len; i++) {
        if (line[i] > 48 && line[i] < 57)
            number = true;
        if (line[i] < 48 || line[i] > 57)
            return 0;
    }
    if (number)
        return 1;
    return 0;
}
