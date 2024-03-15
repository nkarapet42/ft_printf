<h1 align="center" id="title">ft_printf</h1>

<p align="center"><img src="https://socialify.git.ci/nkarapet42/ft_printf/image?font=KoHo&language=1&logo=https%3A%2F%2Fgithub.com%2Fnkarapet42%2Fft_printf%2Fassets%2F157054887%2Feefbc507-03a0-423d-9163-754fbd2dc75e&name=1&owner=1&pattern=Brick%20Wall&theme=Light" alt="ft_printf" /></p>

## Grade: 100/100

#### ft_printf() Available Specifiers:  
`%c` - Prints a single character  
`%s` - Prints a string  
`%p` - Prints a pointer adress  
`%d` or `%i` - Prints a signed integer  
`%u` - Prints an unsigned integer  
`%x` or `%X` - Prints an unsigned integer in hexadecimal format  

#### Makefile Available Targets:  
`make` or `make all` - Makes _libftprintf.a_    
`make clean` - Deletes all the resulting object files  
`make fclean` - Deletes _libftprintf.a_ and all the resulting object files  
`make re` - Deletes everything (object files and _libftprintf.a_) and rebuilds _libftprintf.a_ 

##### To keep track of what's inside your resulting _libftprintf.a_ run `ar -t libftprintf.a`

### Basic Usage
For example, let's create a ``main.c`` file.

```c
// Include the header
#include "ft_printf.h"

int main(void)
{
      // Call the function
      ft_printf("Hello World");
      return (0);
}
```

Compile the ``main.c`` file with the ft_printf library and run the program:
```bash
cc main.c libftprintf.a && ./a.out
```
Output should be:
```
Hello World
```
