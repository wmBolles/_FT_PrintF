<h1> Ft_Printf </h1>

<bold>Recode the original printf function in libc </bold>
```
int    ft_printf(const char*, ...);
```

This simple project is a great choice for learning about variadic macros / functions and ellipses and more.<br>
Developed for 42 school / 1337 cursus.<br>
And write a library that contains ft_printf(), a
function that will mimic the original printf()

### Conversions
```
The Mandatory Part:

• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.

```
### to compile.
```
gcc -Wall -Wextra -Werror ft_printf.c fmt/*.c -lft
```

### Bonus Part
comming soon...
