# YOUR password, YOUR choice - a password generator with customization 

> ## “In the beginning, I looked around and could not find quite the car I dreamed of. So I decided to build it myself.” - Ferry Porsche

A couple of weeks ago, I wouldn't have even imagined that I could write my own password generator. As long as we dare to get out of our comfort zone, and face new challenges we'll thrive. Note that I used my own [library](https://github.com/lspohle/PRIVATE_rps/tree/main/libft) for [printf](https://github.com/lspohle/PRIVATE_password/blob/main/libft/ft_printf.c), [strlen](https://github.com/lspohle/PRIVATE_password/blob/main/libft/ft_strlen.c) and [stncmp](https://github.com/lspohle/PRIVATE_password/blob/main/libft/ft_strncmp.c).

1. `Git clone` the current repository, and create an alias for YOUR password generator.
      
       cd ~ && git clone https://github.com/lspohle/PRIVATE_password.git && cd PRIVATE_password && bash script.sh
2. Generate YOUR password whenever and wherever you wish. The command 'gp' is independent. You may run the command independent from the source code's location.

       gp
# Opportunities presented by YOUR password, YOUR choice
- You can easily customize the set of characters and the amount of charaters you wish to include into your password.
- You can generate the password of your choice whenever and wherever you wish. The command 'gp' is independent from its source code. 
- You may easily adjust the maximal length of your generated password by modifying the global variable `MAX_LENGTH`in [password.h](https://github.com/lspohle/PRIVATE_password/blob/main/password.h).
- `YOUR password, YOUR choice` is easy to implement, and it should work on various operating systems (macOS and Ubuntu, for example). Keep in mind that you need `gcc` (a compiler for C) and `git` (an open source distributed version control system). They are pre-installed on macOS and Linux (they are not pre-installed on Windows).

<img width="415" alt="Bildschirmfoto 2023-01-09 um 23 38 45" src="https://user-images.githubusercontent.com/121381385/211426434-1ff4cd0e-d503-402e-a323-6b87de001bfa.png">

# Probabilities

<img width="390" alt="Pie chart" src="https://user-images.githubusercontent.com/121381385/211666924-788d1582-ed9b-4fe1-8b63-1175bc03074d.png">
<img width="883" alt="Tree diagramm" src="https://user-images.githubusercontent.com/121381385/211666934-c2c88774-2639-4d0f-9d98-d83a0da96ee5.png">
