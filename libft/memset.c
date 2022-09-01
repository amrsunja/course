#include "libft.h"

void *ft_memset(void *buffer, int to_write, size_t bytes_count) {
    // This function will writes *len *c bytes to the buffer *b.
    // And it will return the first char of *b

    unsigned int i;
    unsigned char *temp_buffer;

    i = 0;
    temp_buffer = (unsigned char *) buffer;

    while (bytes_count-- > 0)
        temp_buffer[i++] = (unsigned char) to_write;

    buffer = (void *) temp_buffer;
    return (buffer);
}