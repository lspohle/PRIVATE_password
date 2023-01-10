#include "password.h"

// Generating base randomly character by character
void    generate_base(choice user, char **base)
{
    int random_base = rand() % 4;

    if (random_base == 0 && user.includes_uppercase == true)
        *base = UPPERCASE;
    else if (random_base == 1 && user.includes_lowercase == true)
        *base = LOWERCASE;
    else if (random_base == 2 && user.includes_digits == true)
        *base = DIGITS;
    else if (random_base == 3 && user.includes_specials == true)
        *base = SPECIALS;
    else
        generate_base(user, base);
}

// Generating password randomly character by character
void    generate_password(choice user)
{
    char    *base;
	char	*password;
	int		length;

	ask_for_length(&length);
	password = (char *) malloc (length * sizeof(char));
	srand(time(0));
	for (int i = 0; i < length; i++)
	{
		generate_base(user, &base);
		password[i] = base[rand() % ft_strlen(base)];
	}
	print_password(password);
    free (password);
}

// The heart of the program
int	main(void)
{
	choice user;

	user.includes_uppercase = true;
	user.includes_lowercase = true;
	user.includes_digits = true;
	user.includes_specials = true;

    print_welcome();
    if (ask_for_customization_of_password() == 'y')
    {
        ft_printf("\n");
        user = include_types_of_characters(user, "uppercase characters");
	    user = include_types_of_characters(user, "lowercase characters");
	    user = include_types_of_characters(user, "digits");
	    user = include_types_of_characters(user, "special characters");
		user = check_types_of_characters(user);
    }
	generate_password(user);
}