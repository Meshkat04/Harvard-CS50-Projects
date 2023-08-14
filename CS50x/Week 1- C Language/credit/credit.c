#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long card_number = get_long("Number: ");
    long num = card_number;
    int sum = 0;
    int digit_count = 0;

    while (num > 0)
    {
        int digit = num % 10;
        if (digit_count % 2 == 1)
        {
            int product = digit * 2;
            sum += product % 10 + product / 10;
        }
        else
        {
            sum += digit;
        }
        num /= 10;
        digit_count++;
    }

    bool is_valid = (sum % 10 == 0);

    if (is_valid)
    {
        if ((digit_count == 15) && ((card_number / 10000000000000 == 34) || (card_number / 10000000000000 == 37)))
        {
            printf("AMEX\n");
        }
        else if ((digit_count == 16) && (card_number / 100000000000000 >= 51 && card_number / 100000000000000 <= 55))
        {
            printf("MASTERCARD\n");
        }
        else if ((digit_count == 13 || digit_count == 16) && (card_number / 1000000000000 == 4))
        {
            printf("VISA\n");
        }
        else if (digit_count == 16 && (card_number / 1000000000000000 == 4))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
