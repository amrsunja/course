#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t type_size)
{
    unsigned char   *allocated_memory;
    unsigned int    i;
    unsigned int    total_byte_count;

    total_byte_count = count * type_size;
    allocated_memory = (void *)malloc(total_byte_count);
    i = 0;
    
    if (allocated_memory == NULL)
        return (NULL);
    while (total_byte_count--)
        allocated_memory[i++] = 0;
    return ((void *) allocated_memory);
}