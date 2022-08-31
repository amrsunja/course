#include "libc.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    // The memcpy() function copies n bytes from memory area src to memory area dst.
    // If dst and src overlap, behavior is undefined.  Applications in
    // which dst and src might overlap should use memmove(3) instead.
    // returns the original value of dst

    unsigned char *src2; 
    unsigned char *dst2;

    src2 = (unsigned char *) src;
    dst2 = (unsigned char *) dst;

    if (!dst && !src)
        return (0);
    
    while (n-- > 0)
        *dst2++ = *src2++;

    return (dst);
}