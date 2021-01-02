#include <stdio.h>
#include <stdbool.h>


bool is_over_18(int age)
{
    if(age > 18)
    {
        return true;
    } else {
        return false;
    }
}

int get_age(int min, int max)
{
    int input;
    do
    {
        scanf("%d", &input);
        if(input < min) printf("Sorry, must be at least %d\n", min);
        if(input > max) printf("Sorry, must be at most %d\n", max);
    }
    while(input < min || input > max);

    return input;
}