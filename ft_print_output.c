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