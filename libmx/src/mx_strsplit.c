#include "libmx.h"

static void split_start_word(const char *s, char c, int *iStartWord) {
    while (s[(*iStartWord)] == c)
        (*iStartWord) += 1;
}

static void split_end_word(const char *s, char c, int *iEndWord) {
    while ((s[(*iEndWord)] != c) && (s[(*iEndWord)] != 0))
        (*iEndWord) += 1;
}

char **mx_strsplit(const char *s, char c) {
    char **str = NULL;
    int iStartWord = 0;
    int iEndWord = 0;
    int iWord = 0;

    if (s == 0) return 0;
    str = (char **)malloc(sizeof(char **) * mx_count_words(s,c) + 1);
    while (s[iStartWord]) {
        split_start_word(s, c, &iStartWord);
        iEndWord = iStartWord;
        split_end_word(s, c, &iEndWord);
        if (iStartWord == iEndWord) 
        	break;
        str[iWord] = (char *)malloc(iEndWord - iStartWord + 1);
        mx_strncpy(str[iWord], &s[iStartWord], iEndWord - iStartWord);
        iWord++;
        iStartWord = iEndWord;
    }
    str[iWord] = 0;
    return str;
}
