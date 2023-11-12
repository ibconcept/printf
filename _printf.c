#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int count = 0;

    for (; *format != '\0'; format++) {
        if (*format == '%' && *(format + 1) != '\0') {
            format++;
            switch (*format) {
                case 'c':
                    count += putchar(va_arg(args, int));
                    break;
                case 's':
                    count += printf("%s", va_arg(args, char *));
                    break;
                case '%':
                    count += putchar('%');
                    break;
                default:
                    putchar('%');
                    count++;
                    break;
            }
        } else {
            putchar(*format);
            count++;
        }
    }

    va_end(args);

    return count;
}

int main() {
    _printf("This is a simple %s example. The character is %c and this is a percent sign: %%\n", "printf", 'A');
    return 0;
}

