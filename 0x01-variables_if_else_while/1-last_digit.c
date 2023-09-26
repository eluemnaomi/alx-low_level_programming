#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - this is the main function
 *
 *  Return: always 0
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
int lasted;

srand(time(0));
n = rand() - RAND_MAX / 2;
lasted = n % 10;

if (lasted > 5)
{

printf("Last digit of %d is %d and is greater than 5\n", n, lasted);

}

else  if (lasted == 0)
{

printf("Last digit of %d is %d and is 0\n", n, lasted);

}

else 
{

printf("Last digit of %d is %d and is less than 6 and not 0\n", n,lasted);

}
return (0);
