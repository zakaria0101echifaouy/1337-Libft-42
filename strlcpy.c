#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
    size_t  len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}

size_t strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;

    i = 0;

}