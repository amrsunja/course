#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#define READ_BY_ONE 1

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
#include <fcntl.h>

char    *get_next_line(int fd);
void	*ft_calloc(size_t count, size_t type_size);

#endif