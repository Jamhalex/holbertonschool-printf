  Printf Project

  Table of Content


   Project Overview
The Printf Project is a tailored reimplementation of the standard C library function printf. Its purpose is to replicate the functionality of printf by supporting selected format specifiers, while also providing developers with a deeper understanding of variadic functions and low-level system calls.
     Purpose
The purpose of this project is to:
  Strengthen understanding of C programming concepts and exercise in variadic functions, format parsing, and modular design.
  Build a foundational understanding of how standard library functions are implemented.
  Foster collaboration through team-based development.

    Main Features
  Custom implementation of the _printf function.
  Support for a subset of printf conversion specifiers.
  Extensive testing to ensure reliability and consistency.

    Intended Audience
This project is designed for:
  Holberton students learning the intricacies of C programming.
  Developers interested in understanding how functions like _printf are implemented under the hood.

   Supported Specifiers

    What is a format specifier?
A format specifier is a special sequence of characters used in formatted input and output functions (like printf) to define how data should be formatted and displayed or read.

| Format Specifier | Description                               | Example Output       |
|------------------|-------------------------------------------|----------------------|
| %c               | Prints a single character                 | Input: %c -> H       |
| %s               | Prints a string of characters             | Input: %s -> Hello   |
| %d               | Prints a signed decimal integer           | Input: %d -> 42      |
| %i               | Prints a signed integer (identical to %d) | Input: %i -> 42      |
| %b               | Prints a Unsined integer (binary)         | Input: %b -> 1100001 |
| %u               | Prints a Unsined integer                  | Input: %u -> 300     |
| %o               | Prints a Unsined octal 			       | Input: %o -> 100     |
| %x               | Prints a Unsined hexadecimal (lower)      | Input: %x -> abcde   |
| %X               | Prints a Unsined hexadecimal (UPPERC)     | Input: %X -> ABCDE   |
| %                | Prints a literal % character              | Input: %% -> %       |

    Compilation Instructions
All the files that were used are compiled using:
'gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c'

   Language
The implementation of the _printf() function is being carried out in the C programming language. As a low-level language, C provides the flexibility to construct and manage funtions from the ground up, allowing us to precisely define their behavior and outputs. At this stage, we are still building our foundational knowledge of C, and this projects serves as a practical exercise to reinforce our understanding by recreating _printf() entirely from scratch.

   Contributors
This project was successfully carried out through collaboration:

  Johnson Martinez:   [GitHUB profile](https://github.com/Jamhalex)

Hello, I'm Johnson Martinez, one of the developers behind this project. I invite you to explore my work and connect with me professionally on GitHub. I look forward to networking and sharing ideas with you!

  Eloy A. Alicea Sánchez :   [GitHub Profile](https://github.com/eloyarnel)

Hi there! I'm Eloy A. Alice, a passionate developer and contributor to this project. Feel free to check out my work and connect with me on GitHub and LinkedIn. I’m always excited to network and exchange ideas with fellow professionals!


  Eugenio Martinez :   [GitHub Profile]( https://github.com/Krotos69)

Best regards! I'm Eugen Martinez, a creative, passionate, and highly motivated developer, and a contributor to this project.  I'm always excited to connect and exchange ideas with other professionals and learn from them!
