#include "generator.h"

int	main(void)
{
	choice user;

	user.includes_uppercase = true;
	user.includes_lowercase = true;
	user.includes_digits = true;
	user.includes_specials = true;

	user = include_types_of_characters(user, "uppercase characters");
	user = include_types_of_characters(user, "lowercase characters");
	user = include_types_of_characters(user, "digits");
	user = include_types_of_characters(user, "special characters");

	
	generate_password(user);
}

