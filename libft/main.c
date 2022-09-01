#include "libft.h"

int main (void) {
    char *dst = "hello";
	size_t len = ft_strlen(dst);

    char *hh;


    hh = ft_calloc(10, sizeof(int));
    hh[0] = 1;
    hh[1] = 2;
    hh[2] = 3;
    hh[4] = 5;

    for (int i = 0; hh[i]; i++) {
        printf("d: %d\n", hh[i]);
    }

    return (0);
}
