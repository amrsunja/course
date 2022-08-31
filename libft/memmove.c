#include "libc.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    // The memmove() function copies len bytes from string src to string dst.
    // The two strings may overlap; the copy is always done in a non-destructive
    // manner.
    // The memmove() function returns the original value of dst.
    size_t          i;
    unsigned char   *dst2;
    unsigned char   *src2;

    i = 0;
    dst2 = (unsigned char *) dst;
    src2 = (unsigned char *) src;

    while (len-- > 0)
    {
        if (dst2 > src2)
            dst2[len] = src2[len];
        else
        {
            dst2[i] = src2[i];
            i++;
        }
    }
    return (dst);
}