#include "libft.h"

void ft_bzero(void *buffer, size_t bytes_count)
{
    // This function will writes n zeroed ('\0') bytes to the string s.
    // If n is zero bzero() does nothing.
    ft_memset(buffer, '\0', bytes_count);
}