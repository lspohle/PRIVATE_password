#ifndef PASSWORD_H
# define PASSWORD_H
// Included libraries
# include "libft/libft.h"
# include <time.h>
# include <stdbool.h>
# include <stdio.h>
// Defined colors 
# define GREEN "\e[38;5;41;1m"
# define RED "\e[38;5;203;1m"
# define CYAN "\e[38;5;44;1m"
# define MINT "\e[38;5;43;1m"
# define BLUE "\e[38;5;32;1m"
# define YELLOW "\e[38;5;227m"
# define ESCAPE "\033[0m"
// Defined maximum length of generated password
# ifndef MAX_LENGTH
#  define MAX_LENGTH 25
# endif
// Available set of characters
# define UPPERCASE "ABCDEFGHIJKLMNOPQRSTUVWXYZ" // 
# define LOWERCASE "abcdefghijklmnopqrstuvwxyz"
# define DIGITS "0123456789"
# define SPECIALS "!@#$%^&*/()=?{}[]+<>;:"

// Overview of characters included by the user
typedef     struct
{
    bool    includes_uppercase;
    bool    includes_lowercase;
    bool    includes_digits;
    bool    includes_specials;
}           choice;
// Prototyped functions
void	print_welcome(void);
char    ask_for_customization_of_password(void);
choice  include_types_of_characters(choice user, char  *type);
choice  check_types_of_characters(choice user);
void	print_invalid_choice_of_characters(void);
void    generate_password(choice user);
void    ask_for_length(int *length);
void	print_invalid_length(void);
void    generate_base(choice user, char **base);
void    print_password(char	*password);

#endif