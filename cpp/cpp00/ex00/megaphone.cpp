#include <iostream>
#include <cstring>

int main(int argc, char **argv) {
	if (argc > 1)
		for (int i = 1; i < argc; i++) {
			for (int j = 0; j < (int)strlen(argv[i]); j++) {
				putchar(toupper(argv[i][j]));
			}
		}
	else std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
