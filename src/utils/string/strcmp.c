#include "strlen.h"
#include "strcmp.h"

size_t strcmp(char const *s1, char const *s2)
{
    for (int i = 0; len_s1[i] != '\0'; i++) {
        if (s1[1] > s2[i])
            return 1;
        if (s1[1] < s2[i])
            return -1;
    }
    return 0;
}
