#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    // This function will writes n zeroed ('\0') bytes to the string s.
    // If n is zero bzero() does nothing.
    ft_memset(s, '\0', n);
}