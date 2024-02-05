# 42cursus libft

<h1 align="center">
    42cursus libft
</h1>

<p align="center">
    <b><i>First repo for 42cursus' libft project</i></b><br>
</p>

## 🗣️ About

Welcome to my libft project! This is the first repository for the 42cursus curriculum, where the goal is to create a custom C library containing essential functions. This library can then be used in various projects throughout the cursus.

### Functions from `<ctype.h>` library

- [`ft_isascii`] - Test for ASCII character.
- [`ft_isalnum`] - Alphanumeric character test.
- [`ft_isalpha`] - Alphabetic character test.
- [`ft_islower`] - Lower-case character test.
- [`ft_isupper`] - Upper-case character test.
- [`ft_isdigit`] - Decimal-digit character test.
- [`ft_isprint`] - Printing character test (space character inclusive).
- [`ft_isspace`] - White-space character test.
- [`ft_isblank`] - Space or tab character test.
- [`ft_tolower`] - Upper case to lower case letter conversion.
- [`ft_toupper`] - Lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

- [`ft_atoi`]   - Convert ASCII string to integer.
- [`ft_calloc`] - Memory allocation.

### Functions from `<strings.h>` library

- [`ft_bzero`]  - Write zeroes to a byte string.
- [`ft_memset`] - Write a byte to a byte string.
- [`ft_memchr`] - Locate byte in byte string.
- [`ft_memcmp`] - Compare byte string.
- [`ft_memmove`] - Copy byte string.
- [`ft_memcpy`] - Copy memory area.

### Functions from `<string.h>` library

- [`ft_strlen`]    - Find length of string.
- [`ft_strchr`]    - Locate character in string (first occurrence).
- [`ft_strrchr`]   - Locate character in string (last occurrence).
- [`ft_strnstr`]   - Locate a substring in a string (size-bounded).
- [`ft_strcmp`]    - Compare strings.
- [`ft_strncmp`]   - Compare strings (size-bounded).
- [`ft_strcpy`]    - Copy strings.
- [`ft_strncpy`]   - Copy strings (size-bounded).
- [`ft_strdup`]    - Save a copy of a string (with malloc).
- [`ft_strndup`]   - Save a copy of a string (with malloc, size-bounded).
- [`ft_strcat`]    - Concatenate strings (s2 into s1).
- [`ft_strncat`]   - Concatenate strings (s2 into s1, size-bounded).
- [`ft_strlcpy`]   - Size-bounded string copying.
- [`ft_strlcat`]   - Size-bounded string concatenation.

### Non-standard functions

- [`ft_swap`]        - Swap value of two integers.
- [`ft_putchar`]     - Output a character to stdout.
- [`ft_putchar_fd`]  - Output a character to a given file.
- [`ft_putstr`]      - Output string to stdout.
- [`ft_putstr_fd`]   - Output string to a given file.
- [`ft_putendl`]     - Output string to stdout with newline.
- [`ft_putendl_fd`]  - Output string to a given file with newline.
- [`ft_putnbr`]      - Output integer to stdout.
- [`ft_putnbr_fd`]   - Output integer to a given file.
- [`ft_itoa`]        - Convert integer to ASCII string.
- [`ft_substr`]      - Extract substring from string.
- [`ft_strtrim`]     - Trim beginning and end of string with specified characters.
- [`ft_strjoin`]     - Concatenate two strings into a new string (with malloc).
- [`ft_split`]       - Split string with specified character as delimiter into an array of strings.
- [`ft_strmapi`]     - Create a new string from modifying a string with a specified function.

### Linked list functions

- [`ft_lstnew`]       - Create a new list.
- [`ft_lstsize`]      - Count elements of a list.
- [`ft_lstlast`]      - Find the last element of a list.
- [`ft_lstadd_back`]  - Add a new element at the end of a list.
- [`ft_lstadd_front`] - Add a new element at the beginning of a list.
- [`ft_lstdelone`]    - Delete an element from a list.
- [`ft_lstclear`]     - Delete a sequence of elements of a list from a starting point.
- [`ft_lstiter`]      - Apply a function to the content of all list's elements.
- [`ft_lstmap`]       - Apply a function to the content of all list's elements into a new list.

## Usage

To use this library in your projects, follow these steps:

1. Clone the repository:

    ```bash
    git clone https://github.com/yedunay/libft.git
    ```

2. Navigate to the project directory:

    ```bash
    cd libft
    ```

3. Compile the library:

    ```bash
    make
    ```

4. You can now use the compiled library (`libft.a`) in your projects.

## Contributing

Feel free to contribute to the project by submitting issues, suggesting improvements, or proposing new features. Pull requests are welcome!
