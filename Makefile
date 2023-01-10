NAME =			password.a

SUBDIR =		libft

SRCS =			ft_generate_password.c ft_get_input.c ft_print_output.c

OBJS =			${SRCS:.c=.o}

GCCW =			gcc -Wall -Werror -Wextra

AR =			ar -rc

RM =			rm -f

${NAME}:		${SUBDIR} ${OBJS}
				mv libft/libft.a ${NAME}
				${AR} ${NAME} ${OBJS}
				${GCCW} ${NAME} -o executable && ./executable && rm executable
				${MAKE} -s fclean

${SUBDIR}:		
				cd libft && ${MAKE} -s

${OBJS}:		${SRCS}
				${GCCW} -c ${SRCS}

all:			${NAME}

clean:			
				${RM} ${OBJS}
				cd libft && ${MAKE} -s clean

fclean:			clean
				${RM} ${NAME}
				cd libft && ${MAKE} -s fclean

re:				fclean all

.PHONY:			all clean fclean re ${SUBDIR}