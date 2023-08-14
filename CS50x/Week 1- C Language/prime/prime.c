#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    // 1 is not a prime number
    if (number <= 1)
    {
        return false;
    }

    // 2 is a prime number
    if (number == 2)
    {
        return true;
    }

    // Check for divisibility from 2 to the square root of the number
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false; // number is divisible by i, so it's not prime
        }
    }

    return true; // If number is not divisible by any number, it is prime
}
