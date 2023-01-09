#ifndef GENERATOR_H
# define GENERATOR_H
# include "libft/libft.h"
# include <time.h>
# include <stdbool.h>
# include <stdio.h>
# define UPPERCASE "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
# define LOWERCASE "abcdefghijklmnopqrstuvwxyz"
# define DIGITS "0123456789"
# define SPECIALS "!@#$%^&*"

typedef     struct
{
    bool    includes_uppercase;
    bool    includes_lowercase;
    bool    includes_digits;
    bool    includes_specials;
}           choice;

void    choose_length(int *length);
choice  include_types_of_characters(choice user, char  *type);
void    generate_base(choice user, char **base);
void    generate_password(choice user);

#endif