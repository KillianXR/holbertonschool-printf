#ifndef _MAIN_H_
#define _MAIN_H_int 
typedef struct 
{
char tableau;
void (*func)(va_list);
} CharactèreSpéciale;
CharactèreSpéciale Spéciale[] = 
{
    {'c', print_char},
    {'s', print_string},
    {'%', print_percent},
    {'d', print_decimal},
    {'i', print_integer},
}
;
int _printf(const char *format, ...);
#endif