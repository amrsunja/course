#include "get_next_line.h"

char *get_next_line(int file_descriptor)
{
    char            *readed_char;
    char            *string;
    unsigned int    readed_bytes;
    unsigned int    line_len;

    line_len = READ_BY_ONE;
    readed_char = ft_calloc(line_len+1, sizeof(*readed_char));
    readed_bytes = read(file_descriptor, readed_char, 1);

    if (readed_char == NULL || readed_bytes == -1 || !readed_bytes)
        return (NULL);

    while (readed_bytes)
    {
        printf("%s", readed_char);

        if ((char *) readed_char == '\n')
            break;
        line_len++;
        readed_bytes = read(file_descriptor, readed_char, 1);
    }
    printf("\n%s\n", readed_char);
    free(readed_char);
    
    return (string);
}


int main(void)
{
    char *file = "files/test1";
    int file_descriptor = open(file, O_RDONLY);
    
    //printf("%s", get_next_line(file_descriptor));
    get_next_line(file_descriptor);

    close(file_descriptor);
    return (0);
}