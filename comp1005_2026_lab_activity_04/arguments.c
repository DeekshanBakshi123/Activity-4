#include <stdio.h>
/* char ** is equivalent to *argv[] */
int main(int argc, char **argv)
{

    printf("argument count:%d\n", argc);
    printf("first argument:%s\n", argv[1]);

    return 0;

}