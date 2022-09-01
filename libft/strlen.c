#include "libft.h"

size_t	ft_strlen(const char *string)
{
	size_t	len;

	len = 0;
	while (string[len++])
		;
	return (len);
}
