#include "ft_printf.h"

int main (void)
{
	int École;
	École = 42;
	ft_printf_string("hello world\n");
	//ft_printf("%s\n", "hello world");
	write (1, "%", 1);
	write (1, "\n", 1);
	ft_printf("look an %s\n", );
	ft_printf("look a %c\n", 'c');
}
