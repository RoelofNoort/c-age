#include <stdio.h>
#include <stdbool.h>

#include "age.h"

int main()
{
    printf("How old are you: ");
    int age = get_age(0, 100);

    bool is_old_enough = is_over_18(age);

    if(is_old_enough)
    {
        printf("You are old enough");
    } else {
        printf("Sorry, you are not old enough");
    }

    return 0;
}