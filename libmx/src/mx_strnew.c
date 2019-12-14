#include "libmx.h"

char *mx_strnew(const int size) {
	char *str = (char *)malloc(sizeof(char) * (size + 1));
	int i = 0;

	if (str == NULL)
		return NULL;
	while (str[i]) {
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return str;
}
