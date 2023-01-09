#include "generator.h"

void    generate_password(choice user)
{
    char    *base;
	char	*password;
	int		length;

	choose_length(&length);
	password = (char *) malloc (length * sizeof(char));
	srand(time(0));
	for (int i = 0; i < length; i++)
	{
		generate_base(user, &base);
		password[i] = base[rand() % ft_strlen(base)];
	}
	ft_printf("Password: %s\n", password);
    free (password);
}

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