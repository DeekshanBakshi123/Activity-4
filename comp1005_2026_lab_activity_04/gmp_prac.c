#include <stdio.h>
#include <gmp.h>

int main(int argc, char **argv)
{

    mpz_t number; //declare an mpz integer


   mpz_init(number); //initializes the integer
   mpz_set_ui(number, 5); //set integer number to 5
   mpz_mul_ui(number, number, 6); // multiply number to 5, number = number * 5
   
   gmp_printf("%Zd", number); //prints number

   mpz_clear(number); //releases memory
   return 0;

}