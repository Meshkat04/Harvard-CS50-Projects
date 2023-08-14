#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("start size: ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("end size: ");
    }
    while (end < start);

    // TODO: Calculate number of Years until we reach threshold
    int Years = 0;
    while (start < end)

    {
        int born = start / 3;
        int passed_away = start / 4;
        start = start + born - passed_away;
        Years++;
    }

    // TODO: Print number of Years
    printf("Years: %d\n", Years);
}
