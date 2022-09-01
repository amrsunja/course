#include "libft.h"
#include <stdio.h>

int main (void) {
    char *dst = "hello";
	size_t len = ft_strlen(dst);

	printf("len: %zu\n", len);

    return (0);
}
