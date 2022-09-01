#include "libft.h"

void	*ft_calloc(size_t count, size_t type_size)
{
	unsigned char	*allocated_memory;
	unsigned int	total_bytes_count;
	unsigned int	i;

	total_bytes_count = count * type_size;
	allocated_memory = (void *)malloc(count * type_size);
	i = 0;

	if (allocated_memory == NULL)
		return (NULL);

	while (total_bytes_count--)
		allocated_memory[i++] = 0;

	return ((void *) allocated_memory);
}
