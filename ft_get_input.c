#include "password.h"

// Offering the user the opportunity of adjusting the default set of characters
char    ask_for_customization_of_password(void)
{
    char    answer;

    ft_printf("It's up to you! Specify the length of your password!\n");
    ft_printf("Select the type of characters you wish to include!\n");
    ft_printf("To assure enhanced safety, all types of characters will\nbe included if you don't modify your selection.\n\n");

    ft_printf(YELLOW"Would you like to adjust the set of characters?"ESCAPE" [y/n]\n");
    scanf(" %c", &answer);
    return (answer);
}

// Asking specifically for including characters
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

// Checking the user's choice of characters
choice check_types_of_characters(choice user)
{
    if (user.includes_uppercase == true || user.includes_lowercase == true
	    || user.includes_digits == true || user.includes_specials == true)
        return (user);
    print_invalid_choice_of_characters();
    user.includes_uppercase = true;
	user.includes_lowercase = true;
	user.includes_digits = true;
	user.includes_specials = true;
    return (user);
}

// Asking for user's desired length of the passwort that will be generated
void    ask_for_length(int *length)
{
    ft_printf(YELLOW"\nWhat length shall your generated password have?\n"ESCAPE);
    scanf("%i", length);
    if (*length > MAX_LENGTH || *length < 1)
    {
        *length = MAX_LENGTH;
        print_invalid_length();
    }
}