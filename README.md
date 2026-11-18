*This activity has been created as part of the 42 curriculum by mquaibl.*

# Libft

## Description

Libft is a static C library built during the 42 Common Core. The goal is to
reimplement commonly used C library functions, add string and output utilities,
and learn how to manage memory and singly linked lists. The resulting archive,
`libft.a`, can be linked into other C programs.

The library implements **43 mandatory functions** from the Libft v1.3 subject:

| Part | Functions | What they cover |
| --- | ---: | --- |
| Libc functions | 23 | Character tests, strings, memory and allocation |
| Additional functions | 11 | String utilities, integer conversion and file-descriptor output |
| Linked lists | 9 | Creating, traversing, modifying and freeing lists |

In this version of the subject, the linked-list functions are mandatory, not
bonus functions.

### Function reference

**Libc functions (23):**

`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`,
`ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`,
`ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`,
`ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`,
`ft_atoi`, `ft_calloc`, `ft_strdup`.

**Additional functions (11):**

`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`,
`ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`,
`ft_putendl_fd`, `ft_putnbr_fd`.

**Linked-list functions (9):**

`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`,
`ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`,
`ft_lstmap`.

Function declarations and the `t_list` structure are available in `libft.h`.
Functions that allocate memory return data that the caller must release when
it is no longer needed. For example, strings returned by `ft_split` and the
array of pointers itself must all be freed.

## Instructions

Run the following commands at the root of this repository:

```sh
make          # Build libft.a
make clean    # Remove object files
make fclean   # Remove object files and libft.a
make re       # Rebuild from scratch
```

The Makefile uses `cc -Wall -Wextra -Werror` and `ar` to produce the static
library. It does not rebuild the library when its sources are unchanged.

To use the library from your own C program, include its header:

```c
#include "libft.h"
```

After running `make`, compile your program with:

```sh
cc -Wall -Wextra -Werror your_program.c -I. -L. -lft -o your_program
```

The file `your_program.c` is an illustrative filename, not part of this
repository.

### Optional manual tests

Each `ft_*.c` file ends with an example `main(void)` enclosed in a block
comment. These examples are intentionally inactive and are not compiled into
`libft.a`. To try one, copy its contents into a temporary test file outside
the submission, or temporarily remove its comment delimiters, compile that
source with `libft.a`, and restore the comment before committing.

For instance, after `make`, uncommenting the example in `ft_strlen.c` allows:

```sh
cc -Wall -Wextra -Werror ft_strlen.c libft.a -o test_strlen
./test_strlen
```

Never leave an active `main` function in the submitted library sources.

## Resources

- **Libft v1.3 subject** (2026), available on the 42 student intranet:
  requirements, prototypes, permitted external functions and evaluation rules.
- [42 Norminette](https://github.com/42School/norminette): official code-style
  checker used for 42 projects.
- [Linux manual pages](https://man7.org/linux/man-pages/): documentation for
  functions such as `malloc`, `free`, `write` and standard string operations.
- [C reference](https://en.cppreference.com/w/c): reference for C language and
  standard-library behavior.

### Use of AI

AI assistance was used as a learning and review aid.
