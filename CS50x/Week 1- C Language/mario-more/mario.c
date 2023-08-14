#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    // Prompt the user for a valid height between 1 and 8
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Iterate through each row to print the pyramid
    for (int i = 0; i < height; i++)
    {
        // Print spaces for left pyramid
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        // Print hashes for left pyramid
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        // Print gap between pyramids
        printf("  ");

        // Print hashes for right pyramid
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        // Move to the next line
        printf("\n");
    }
}
