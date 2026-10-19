#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

    char *endptr;

    long number = strtol(argv[1], &endptr, 10);

    printf("%ld\n", number);

    return 0;

}