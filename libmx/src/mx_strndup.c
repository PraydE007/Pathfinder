#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
	char *dup = NULL;

	if (s1 == NULL)
		return NULL;
	dup = mx_strncpy(mx_strnew(n), s1, n);
	return dup;
}
