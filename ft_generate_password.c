#include "password.h"

// Generating base randomly character by character
void    generate_base(choice user, char **base)
{
    int random_base = rand() % 83;

	
    if (user.includes_uppercase == true && random_base >= 0 && random_base <= 25)
        *base = UPPERCASE;
    else if (user.includes_lowercase == true && random_base >= 26 && random_base <= 51)
        *base = LOWERCASE;
    else if (user.includes_digits == true && random_base >= 52 && random_base <= 61)
        *base = DIGITS;
    else if (user.includes_specials == true && random_base >= 62 && random_base <= 83)
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