#include "libft.h"

void *ft_memset(void *b, int c, size_t len) {
    // This function will writes *len *c bytes to the buffer *b.
    // And it will return the first char of *b

    unsigned int i;
    unsigned char *temp_buffer;

    i = 0;
    temp_buffer = (unsigned char *) b;

    while (len-- > 0)
        temp_buffer[i++] = (unsigned char) c;

    b = (void *) temp_buffer;
    return (b);
}