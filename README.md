Libft - Custom Static C Library NOTES


Function Index
Character Handling	String Manipulation	Memory Management	
ft_isalpha	ft_strlen	ft_memset	ft_putchar_fd	
ft_isdigit	ft_strlcpy	ft_bzero	ft_putstr_fd	
ft_isalnum	ft_strlcat	ft_memcpy	ft_putendl_fd	
ft_isascii	ft_strchr	ft_memmove	ft_putnbr_fd	
ft_isprint	ft_strrchr	ft_memchr		
ft_toupper	ft_strnstr	ft_memcmp		
ft_tolower	ft_strncmp	ft_calloc		
ft_strdup		
ft_atoi			
ft_substr			
ft_strjoin			
ft_strtrim			
ft_split			
ft_itoa			
ft_strmapi			
ft_striteri			


Character Handling
ft_isalpha.c
Description: Checks if the given character is an alphabetic letter.
Prototype: int ft_isalpha(int c);
Usage Example:
if (ft_isalpha('a')) {
    // Do something if 'a' is an alphabetic character
}

ft_isdigit.c
Description: Checks if the given character is a digit (0-9).
Prototype: int ft_isdigit(int c);
Usage Example:
if (ft_isdigit('5')) {
    // Do something if '5' is a digit
}

ft_isalnum.c
Description: Checks if the given character is alphanumeric (a letter or a digit).
Prototype: int ft_isalnum(int c);
Usage Example:
if (ft_isalnum('a')) {
    // Do something if 'a' is an alphanumeric character
}

ft_isascii.c
Description: Checks if the given character is an ASCII character (0-127).
Prototype: int ft_isascii(int c);
Usage Example:
if (ft_isascii(65)) {
    // Do something if 65 is an ASCII character
}

ft_isprint.c
Description: Checks if the given character is a printable character, including space.
Prototype: int ft_isprint(int c);
Usage Example:
if (ft_isprint(' ')) {
    // Do something if ' ' is a printable character
}

ft_toupper.c
Description: Converts a lowercase letter to its corresponding uppercase letter.
Prototype: int ft_toupper(int c);
Usage Example:
char lowercase = 'a';
char uppercase = ft_toupper(lowercase);
// Now `uppercase` should contain 'A'


ft_tolower.c
Description: Converts an uppercase letter to its corresponding lowercase letter.
Prototype: int ft_tolower(int c);
Usage Example:
char uppercase = 'A';
char lowercase = ft_tolower(uppercase);
// Now `lowercase` should contain 'a'

String Manipulation
ft_strchr.c
Description: Locates the first occurrence of a character in a string.
Prototype: char *ft_strchr(const char *s, int c);
Usage Example:
const char *str = "Hello, World!";
char *ptr = ft_strchr(str, 'o');
if (ptr != NULL) {
    printf("Found 'o' at position: %ld\n", ptr - str);
} else {
    printf("Character 'o' not found.\n");
}

ft_strrchr.c
Description: Locates the last occurrence of a character in a string.
Prototype: char *ft_strrchr(const char *s, int c);
Usage Example:
const char *str = "Hello, World!";
char *ptr = ft_strrchr(str, 'o');
if (ptr != NULL) {
    printf("Found last 'o' at position: %ld\n", ptr - str);
} else {
    printf("Character 'o' not found.\n");
}

ft_strlen.c
Description: Computes the length of a string (not including the terminating null character).
Prototype: size_t ft_strlen(const char *s);
Usage Example:
const char *str = "Hello, World!";
size_t length = ft_strlen(str);
printf("Length of the string '%s' is %zu\n", str, length);

ft_strncmp.c
Description: Compares two strings up to the first n characters.
Prototype: int ft_strncmp(const char *s1, const char *s2, size_t n);
Usage Example:
const char *str1 = "Hello";
const char *str2 = "Hella";
int result = ft_strncmp(str1, str2, 4);
if (result == 0) {
    printf("First 4 characters of '%s' and '%s' are equal.\n", str1, str2);
} else if (result < 0) {
    printf("First 4 characters of '%s' are less than '%s'.\n", str1, str2);
} else {
    printf("First 4 characters of '%s' are greater than '%s'.\n", str1, str2);
}

ft_strlcpy.c
Description: Copies a string from src to dst with a maximum size of dsize.
Prototype: size_t ft_strlcpy(char *dst, const char *src, size_t dsize);
Usage Example:
char dst[20];
const char *src = "Hello, World!";
size_t copied = ft_strlcpy(dst, src, sizeof(dst));
printf("Copied '%zu' characters from '%s' to '%s'\n", copied, src, dst);

ft_strlcat.c
Description: Concatenates a string from src to dst with a maximum size of dsize.
Prototype: size_t ft_strlcat(char *dst, const char *src, size_t dsize);
Usage Example:
char dst[20] = "Hello";
const char *src = ", World!";
size_t concatenated = ft_strlcat(dst, src, sizeof(dst));
printf("Concatenated '%zu' characters: '%s'\n", concatenated, dst);

ft_strnstr.c
Description: Locates the first occurrence of the substring little in the string big, where the search is limited to the first len characters of big.
Prototype: char *ft_strnstr(const char *big, const char *little, size_t len);
Usage Example:
const char *big = "Hello, World!";
const char *little = "World";
char *found = ft_strnstr(big, little, strlen(big));
if (found != NULL) {
    printf("Found '%s' in '%s' starting at position: %ld\n", little, big, found - big);
} else {
    printf("Substring '%s' not found in '%s'\n", little, big);
}

ft_strdup.c
Description: Duplicates a string s by allocating memory for a copy and returning a pointer to it.
Prototype: char *ft_strdup(const char *s);
Usage Example:
const char *original = "Hello, World!";
char *duplicate = ft_strdup(original);
if (duplicate != NULL) {
    printf("Original string: %s\n", original);
    printf("Duplicate string: %s\n", duplicate);
    free(duplicate); // Free allocated memory when done
} else {
    printf("Memory allocation failed.\n");
}

ft_atoi.c
Description: Converts a string nptr to an integer.
Prototype: int ft_atoi(const char *nptr);
Usage Example:
const char *str = "12345";
int num = ft_atoi(str);
printf("Converted string '%s' to integer: %d\n", str, num);

ft_substr.c
Description: Allocates and returns a substring from the string s, starting at index start and of maximum length len.
Prototype: char *ft_substr(const char *s, unsigned int start, size_t len);
Usage Example:
const char *str = "Hello, World!";
char *substring = ft_substr(str, 7, 5);
if (substring != NULL) {
    printf("Original string: %s\n", str);
    printf("Substring from index 7 with length 5: %s\n", substring);
    free(substring); // Free allocated memory when done
} else {
    printf("Memory allocation failed.\n");
}

ft_strjoin.c
Description: Concatenates two strings s1 and s2 into a new string.
Prototype: char *ft_strjoin(const char *s1, const char *s2);
Usage Example:
const char *str1 = "Hello, ";
const char *str2 = "World!";
char *joined = ft_strjoin(str1, str2);
if (joined != NULL) {
    printf("Joined string: %s\n", joined);
    free(joined); // Free allocated memory when done
} else {
    printf("Memory allocation failed.\n");
}

ft_strtrim.c
Description: Allocates and returns a copy of the string s1 with the characters specified in set removed from the beginning and the end of the string.
Prototype: char *ft_strtrim(const char *s1, const char *set);
Usage Example:
const char *str = "   Hello, World!   ";
const char *set = " ";
char *trimmed = ft_strtrim(str, set);
if (trimmed != NULL) {
    printf("Original string: '%s'\n", str);
    printf("Trimmed string: '%s'\n", trimmed);
    free(trimmed); // Free allocated memory when done
} else {
    printf("Memory allocation failed.\n");
}

ft_split.c
Description: Splits the string s into an array of strings using the delimiter c.
Prototype: char **ft_split(char const *s, char c);
Usage Example:
const char *str = "Split,this,string";
char delimiter = ',';
char **split_strings = ft_split(str, delimiter);
if (split_strings != NULL) {
    int i = 0;
    while (split_strings[i] != NULL) {
        printf("Split[%d]: %s\n", i, split_strings[i]);
        free(split_strings[i]);
        i++;
    }
    free(split_strings); // Free allocated memory when done
} else {
    printf("Memory allocation failed.\n");
}

ft_itoa.c
Description: Converts an integer n into a null-terminated string representation.
Prototype: char *ft_itoa(int n);
Usage Example:
int num = 12345;
char *str_num = ft_itoa(num);
if (str_num != NULL) {
    printf("Integer %d as a string: %s\n", num, str_num);
    free(str_num); // Free allocated memory when done
} else {
    printf("Memory allocation failed.\n");
}

ft_strmapi.c
Description: Applies the function f to each character of the string s to create a new string.
Prototype: char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
Usage Example:
// Example function to convert characters to uppercase
char uppercase(unsigned int index, char c) {
    return (char)(c >= 'a' && c <= 'z' ? c - 32 : c);
}

const char *str = "hello";
char *new_str = ft_strmapi(str, uppercase);
if (new_str != NULL) {
    printf("Original string: %s\n", str);
    printf("Modified string: %s\n", new_str);
    free(new_str); // Free allocated memory when done
} else {
    printf("Memory allocation failed.\n");
}

ft_striteri.c
Description: Applies the function f to each character of the string s, passing its index as the first argument.
Prototype: void ft_striteri(char *s, void (*f)(unsigned int, char*));
Usage Example:
// Example function to modify characters in place
void modify_string(unsigned int index, char *c) {
    if (*c >= 'a' && *c <= 'z') {
        *c = *c - 32; // Convert to uppercase
    }
}

char str[] = "hello";
ft_striteri(str, modify_string);
printf("Modified string: %s\n", str);

Memory Management
ft_memset.c
Description: Fills the first n bytes of the memory area pointed to by s with the constant byte c.
Prototype: void *ft_memset(void *s, int c, size_t n);
Usage Example:
char buffer[10];
ft_memset(buffer, 'A', sizeof(buffer));
printf("Buffer after memset: %s\n", buffer); // Output: "AAAAAAAAAA"

ft_bzero.c
Description: Sets the first n bytes of the memory area pointed to by s to zero.
Prototype: void ft_bzero(void *s, size_t n);
Usage Example:
char buffer[10];
ft_bzero(buffer, sizeof(buffer));
printf("Buffer after bzero: %s\n", buffer); // Output: "\0\0\0\0\0\0\0\0\0\0"

ft_memcpy.c
Description: Copies n bytes from memory area src to memory area dest. The memory areas must not overlap.
Prototype: void *ft_memcpy(void *dest, const void *src, size_t n);
Usage Example:
char src[] = "Hello";
char dest[10];
ft_memcpy(dest, src, sizeof(src));
printf("Copied string: %s\n", dest); // Output: "Hello"

ft_memmove.c
Description: Copies n bytes from memory area src to memory area dest. The memory areas may overlap.
Prototype: void *ft_memmove(void *dest, const void *src, size_t n);
Usage Example:
char buffer[20] = "Hello, World!";
ft_memmove(buffer + 7, buffer + 5, 7);
printf("After memmove: %s\n", buffer); // Output: "Hello, World World!"

ft_memchr.c
Description: Locates the first occurrence of byte c in the first n bytes of the memory area pointed to by s.
Prototype: void *ft_memchr(const void *s, int c, size_t n);
Usage Example:
const char *str = "Hello, World!";
char *found = ft_memchr(str, 'W', strlen(str));
if (found != NULL) {
    printf("Found 'W' at position: %ld\n", found - str);
} else {
    printf("Character 'W' not found.\n");
}

ft_memcmp.c
Description: Compares the first n bytes of memory areas s1 and s2.
Prototype: int ft_memcmp(const void *s1, const void *s2, size_t n);
Usage Example:
const char *str1 = "Hello";
const char *str2 = "Hella";
int result = ft_memcmp(str1, str2, 4);
if (result == 0) {
    printf("First 4 bytes of '%s' and '%s' are equal.\n", str1, str2);
} else if (result < 0) {
    printf("First 4 bytes of '%s' are less than '%s'.\n", str1, str2);
} else {
    printf("First 4 bytes of '%s' are greater than '%s'.\n", str1, str2);
}

ft_calloc.c
Description: Allocates memory for an array of count elements each of size size, initialized to zero.
Prototype: void *ft_calloc(size_t count, size_t size);
Usage Example:
size_t num_elements = 5;
size_t element_size = sizeof(int);
int *array = ft_calloc(num_elements, element_size);
if (array != NULL) {
    printf("Allocated memory for array of %zu elements\n", num_elements);
    // Use `array` as needed
    free(array); // Don't forget to free allocated memory
} else {
    printf("Memory allocation failed.\n");
}

File Operations
ft_putchar_fd.c
Description: Writes the character c to the file descriptor fd.
Prototype: void ft_putchar_fd(char c, int fd);
Usage Example:
char ch = 'A';
int fd = 1; // STDOUT_FILENO
ft_putchar_fd(ch, fd);

ft_putstr_fd.c
Description: Writes the string s to the file descriptor fd.
Prototype: void ft_putstr_fd(char *s, int fd);
Usage Example:
char *message = "Hello, World!";
int fd = 1; // STDOUT_FILENO
ft_putstr_fd(message, fd);

ft_putendl_fd.c
Description: Writes the string s followed by a newline ('\n') to the file descriptor fd.
Prototype: void ft_putendl_fd(char *s, int fd);
Usage Example:
char *message = "Hello, World!";
int fd = 1; // STDOUT_FILENO
ft_putendl_fd(message, fd);

ft_putnbr_fd.c
Description: Writes the integer n to the file descriptor fd.
Prototype: void ft_putnbr_fd(int n, int fd);
Usage Example:
int number = 12345;
int fd = 1; // STDOUT_FILENO
ft_putnbr_fd(number, fd);

