#include "libasm.h"

int main() {

	// ft_strlen
	const char *str = "Hello, world!";
	size_t length = ft_strlen(str);
	printf("Length of '%s' is %zu\n", str, length);

	// ft_strcpy
	char copy[20];
	ft_strcpy(copy, str);
	printf("origin : %s \ncopy : %s\n", str, copy);

	// ft_strcmp
	const char *strTest = "Hellu, world!";
	int ret = ft_strcmp(str, copy);
	printf("Test 1 (str && cpy): %i\n", ret);
	ret = ft_strcmp(str, strTest);
	printf("Test 2 (str && false atr): %i\n", ret);

	// ft_write
	ret = ft_write(1, str, length);
	printf("\nreturn good test : %d\n", ret);

	// ft_read
	char buffer[128];
	size_t bytes_read;
	bytes_read = ft_read(0, buffer, sizeof(buffer));

	if ((int)bytes_read == -1) {
		ft_write(2, "Error reading from stdin\n", 25);
		return 1;
	}

	// Print the data read
	ft_write(1, "Data read from stdin: ", 22);
	ft_write(1, buffer, bytes_read);

	//ft_strdup
	const char *original_string = "Hello, world!";
	char *duplicate_string = ft_strdup(original_string);

	if (duplicate_string) {
		printf("Original string: %s\n", original_string);
		printf("Duplicate string: %s\n", duplicate_string);
		free(duplicate_string);
	} else {
		printf("memory allocation failed\n");
	}

	return 0;
}
