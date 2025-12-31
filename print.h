#ifndef OUTPUT_H
#define OUTPUT_H

#include <stdio.h>

#define print(format, ...) printf(format __VA_OPT__(,) __VA_ARGS__)
#define println(format, ...) printf(format "\n" __VA_OPT__(,) __VA_ARGS__)
#define printerr(format, ...) printf("\033[31m" format "\033[0m\n" __VA_OPT__(,) __VA_ARGS__)

#endif /* OUTPUT_H */
