#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
	int compte;

	while (format[compte] != '\0')
	{
		compte++;
	}
	if(format [compte] == '\0')
	{
	write (1, format,	compte);
	}
	return (0);
}
