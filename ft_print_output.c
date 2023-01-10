#include "password.h"

// Welcoming the user
void	print_welcome(void)
{
	ft_printf(BLUE"\n ╔══════════════════════════════════════════════════════╗\n");
	ft_printf(BLUE" ║"CYAN"          Welcome to YOUR password generator!         "BLUE"║\n");
	ft_printf(BLUE" ╚══════════════════════════════════════════════════════╝");
    ft_printf(GREEN"\n       ╔═════════════════════════════════════════╗\n");
	ft_printf(GREEN"       ║"CYAN"       YOUR password, YOUR choice!       "GREEN"║\n");
	ft_printf(GREEN"       ╚═════════════════════════════════════════╝\n\n"ESCAPE);
}

// Displaying the generated password
void    print_password(char	*password)
{
    ft_printf(CYAN"\n════════════════════════════════════════════════════════\n"ESCAPE);
	ft_printf("YOUR new password: "GREEN"%s", password);
	ft_printf(CYAN"\n════════════════════════════════════════════════════════\n"ESCAPE);
}

// Displaying invalid length
void	print_invalid_length(void)
{
	ft_printf(BLUE"\n════════════════════════════════════════════════════════\n"ESCAPE);
	ft_printf(RED"	   You requested an invalid length!"ESCAPE"\nTherefore your password is of max length (%i characters).", MAX_LENGTH);
	ft_printf(BLUE"\n════════════════════════════════════════════════════════\n"ESCAPE);
}

// Displaying invalid choice of characters
void	print_invalid_choice_of_characters(void)
{
	ft_printf(BLUE"\n════════════════════════════════════════════════════════\n"ESCAPE);
	ft_printf(RED"	   Your choice of characters is invalid!"ESCAPE"\nTherefore your password includes all existing characters.");
	ft_printf(BLUE"\n════════════════════════════════════════════════════════\n"ESCAPE);
}