#include "get_next_line.h"


char *get_next_line(int file_descriptor)
{
    char            *readed_char;
    char            *string;
    int				readed_bytes;

    string = ft_calloc(2, sizeof(*string));
	readed_char = ft_calloc(2, sizeof(*readed_char));
    readed_bytes = read(file_descriptor, readed_char, READ_BY_ONE);

    if (string == NULL || readed_bytes == -1 || !readed_bytes)
        return (NULL);

    while (readed_bytes)
    {
		string = add_item_in_string(string, *readed_char);
		if ((char) *readed_char == '\n')
			break;
		readed_bytes = read(file_descriptor, readed_char, READ_BY_ONE);
    }
	free(readed_char);
	readed_char = NULL;
    return (string);
}


int main(void)
{
    char *file = "files/test1";
	
    int file_descriptor = open(file, O_RDONLY);
    
    printf("%s", get_next_line(file_descriptor));
    printf("%s", get_next_line(file_descriptor));
    printf("%s", get_next_line(file_descriptor));
    printf("%s", get_next_line(file_descriptor));
    printf("%s", get_next_line(file_descriptor));
    printf("%s", get_next_line(file_descriptor));
    printf("%s", get_next_line(file_descriptor));
    printf("%s", get_next_line(file_descriptor));
    printf("%s", get_next_line(file_descriptor));
    printf("%s", get_next_line(file_descriptor));
    //get_next_line(file_descriptor);
	/*char *str = (char *)ft_calloc(10, sizeof(char));
	str[0] = 'h';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';

	str = add_element_in_string(str, 'g');
    printf("%s\n", str);
	*/

    //close(file_descriptor);
    return (0);
}
