# YOUR password, YOUR choice - a password generator with customization 

> ## “In the beginning, I looked around and could not find quite the car I dreamed of. So I decided to build it myself.” - Ferry Porsche

<a name="0"></a>
# [Table of content](#0)
- [Introduction](#1)
- [Probabilities](#2)
- [Your benefit](#3)
- [Example](#4)
- [Installation](#5)	
- [Implementation](#6)
- [Deinstallation](#7)


<a name="1"></a>
# [Introduction](#1)
Note that I used my own [library](https://github.com/lspohle/PRIVATE_rps/tree/main/libft) for [printf](https://github.com/lspohle/PRIVATE_password/blob/main/libft/ft_printf.c), [strlen](https://github.com/lspohle/PRIVATE_password/blob/main/libft/ft_strlen.c) and [stncmp](https://github.com/lspohle/PRIVATE_password/blob/main/libft/ft_strncmp.c).

|Type|Characters|Amount|
|:--:|:--------:|:----:|
|Uppercase|ABCDEFGHIJKLMNOPQRSTUVWXYZ|26|
|Lowercase|abcdefghijklmnopqrstuvwxyz|26|
|Digits|0123456789|10|
|Specials|!@#$%^&*/()=?{}[]+<>;:|22|

<a name="2"></a>
# [Probabilities](#2)

<img width="400" alt="Graph to display probabilities" src="https://user-images.githubusercontent.com/121381385/215053161-c0ef3d49-3838-4155-8b04-1b641ab84704.png">

<img width="400" alt="Graph data" src="https://user-images.githubusercontent.com/121381385/215053236-99fecd9a-6e2d-4a35-8a24-15eeda49e939.png">

<a name="3"></a>
# [Your benefit](#3)

-  **Install and implement easily**

     - [x] You can easily implement *YOUR password, YOUR choice* as explained in [Installation](#3) and [Implementation](#4).
-  **Customize your password**

     - [x] You can easily customize the set of characters and the amount of characters you wish to include in your password.
-  **Generate your password independently**

      - [x] You can generate the password of your choice whenever and wherever you wish. The command `gp` is independent from its source code. 
-  **Adjust the maximal length of your password**

      - [x] You may easily adjust the maximal length of your generated password by modifying the global variable `MAX_LENGTH` in [password.h](https://github.com/lspohle/PRIVATE_password/blob/main/password.h).
-  **Works on various operating systems**

      - [x] *YOUR password, YOUR choice* works on various operating systems (such as macOS and Linux). Keep in mind that you need `gcc` (a compiler for C) and `git` (an open source distributed version control system). They are pre-installed on macOS and Linux but not on Windows.

<a name="4"></a>
# [Example](#4)
<img width="400" alt="Example password" src="https://user-images.githubusercontent.com/121381385/215055207-a4561755-dc26-418c-8a62-9891f5f11804.png">


<a name="5"></a>
# [Installation](#5)
- Install *YOUR password, YOUR choice* by cloning the current repository, and creating an alias for your password generator.
      
      cd ~ && git clone https://github.com/lspohle/PRIVATE_password.git && cd PRIVATE_password && bash script.sh

<a name="6"></a>
# [Implementation](#6)
- Implement it by running the following command whenever and wherever you wish.

       gp

<a name="7"></a>
# [Deinstallation](#7)
- Deinstall *YOUR password, YOUR choice* from your device.
      
      cd ~ && rm -rf PRIVATE_password
- Remove the formerly created alias `gp` from your ZSH configuration file.
