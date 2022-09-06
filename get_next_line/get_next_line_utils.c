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

size_t	str_len(const char *str) {
	size_t	len;

	len = 0;
	while (str[len++])
		;

	return (len);
}

char	*add_item_in_string(char *oldString, char sym) {
	size_t			string_len;
	unsigned int	i;
	char			*newString;

	i = -1;
	string_len = str_len(oldString);
	newString = (char *)ft_calloc(string_len + 2, sizeof(*newString));
	if (!newString)
		return (NULL);

	while (oldString[++i])
		newString[i] = oldString[i];
	newString[i] = sym;
	free(oldString);
	oldString = NULL;

	return (newString);
}
