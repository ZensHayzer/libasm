#include "libasm.h"

int main() {
/*
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
*/
	// Correction tests
	printf("\n\nTests for correction : \n");

	// ft_strlen
	printf("\n\nft_strlen :\n\n");
	const char *strn = "";
	size_t length1 = ft_strlen(strn);
	printf("Length of '%s' is %zu\n", strn, length1);
	const char *strl = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas in tortor sagittis, hendrerit mauris ut, commodo dui. Vivamus dignissim est in sem lacinia porttitor. Nulla sit amet est et neque aliquam mollis. Fusce libero massa, consectetur eu sem in, egestas vehicula libero. Fusce non ultrices neque, et congue ligula. Duis eleifend erat ac velit dignissim dapibus. Integer vitae odio in sem ultrices tincidunt. Etiam urna erat, mollis ut orci ut, cursus convallis tortor. Maecenas nec faucibus arcu. Nullam viverra aliquet sem vitae pretium. Sed rutrum turpis a quam semper, quis egestas sapien sagittis. Morbi consectetur aliquet velit luctus dignissim.Mauris fermentum metus vel finibus faucibus. Vestibulum est quam, vehicula quis suscipit quis, convallis at erat. Proin convallis lacinia ante in dignissim. Praesent et arcu eleifend neque pulvinar lacinia vitae ut ex. Duis consectetur ligula ac rutrum rutrum. Nam vitae nulla felis. Duis ullamcorper eros eu eros porttitor, nec commodo ac.";
	size_t length2 = ft_strlen(strl);
	printf("Length of '%s' is %zu\n", strl, length2);

	// ft_strcpy
	printf("\n\nft_strcpy :\n\n");
	char copy[20];
	ft_strcpy(copy, strn);
	printf("\norigin : %s \ncopy : %s\n", strn, copy);
	char copy1[1000];
	ft_strcpy(copy1, strl);
	printf("\norigin : %s \n\ncopy : %s\n", strl, copy1);

	// ft_strcmp
	printf("\n\nft_strcmp :\n\n");
	const char *strTest = "Hellu, world!";
	int ret = ft_strcmp(strn, strn);
	printf("Good : %i\n", ret);
	ret = ft_strcmp(strn, strTest);
	printf("Bad : %i\n\n", ret);

	ret = ft_strcmp(strl, strl);
	printf("Good : %i\n", ret);
	ret = ft_strcmp(strl, strTest);
	printf("Bad : %i\n", ret);

	// ft_write
	printf("\n\nft_write :\n\n");
	ret = ft_write(1, strn, length1);
	printf("\nreturn good test : %d\n\n", ret);
	ret = ft_write(1, strl, length2);
	printf("\nreturn good test : %d\n", ret);

	//ft_strdup
	printf("\n\nft_strdup :\n\n");
	char *duplicate_string = ft_strdup(strn);

	if (duplicate_string) {
		printf("Original string: %s\n\n", strn);
		printf("Duplicate string: %s\n", duplicate_string);
		free(duplicate_string);
	} else {
		printf("memory allocation failed\n");
	}

	printf("\n");

	char *duplicate_string2 = ft_strdup(strl);

	if (duplicate_string2) {
		printf("Original string: %s\n\n", strl);
		printf("Duplicate string: %s\n", duplicate_string2);
		free(duplicate_string2);
	} else {
		printf("memory allocation failed\n");
	}

	return 0;
}
