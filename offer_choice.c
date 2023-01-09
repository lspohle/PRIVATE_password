#include "generator.h"

choice include_types_of_characters(choice user, char  *type)
{
    char    answer;

    ft_printf("Do you wish to include %s? [y/n]\n", type);

    scanf(" %c", &answer);
    if (answer == 'n')
    {
        if (ft_strncmp(type, "uppercase characters", ft_strlen(type)) == 0)
            user.includes_uppercase = false;
        else if (ft_strncmp(type, "lowercase characters", ft_strlen(type)) == 0)
            user.includes_lowercase = false;
        else if (ft_strncmp(type, "digits", ft_strlen(type)) == 0)
            user.includes_digits = false;
        else if (ft_strncmp(type, "special characters", ft_strlen(type)) == 0)
            user.includes_specials = false;
    }
    return (user);
}

void    choose_length(int *length)
{
    ft_printf("What length shall your generated password have?\n");
    scanf("%i", length);
}