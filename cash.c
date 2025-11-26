#include <cs50.h>
#include <stdio.h>

// prototypes of coin functions
int quarter(int c);
int dime(int c);
int nickel(int c);
// decleration using const int for coin values (quarter, dime, nickel)
const int quarter_value = 25, dime_value = 10, nickel_value = 5;

int main(void)
{
    // declaration of change variable and coin return variable
    int change, coins;

    do
    {
        // decleration of change variable from user input
        change = get_int("Change owed:");
    }
    // logic check to ensure user types in a integer
    while (change < 0);

    // first quarter_function 'biggest bite' that returns new change value and stores quarters used
    int quarter_coins = quarter(change);
    change = change - (quarter_value * quarter_coins);

    // second dime function that returns new change value and stores dimes used
    int dime_coins = dime(change);
    change = change - (dime_value * dime_coins);

    // third nickel function that returns new change value and stores dimes used
    int nickel_coins = nickel(change);
    change = change - (nickel_value * nickel_coins);

    // stores amount of coins given, 'change' here is reffered to as the pennies left over
    coins = quarter_coins + dime_coins + nickel_coins + change;

    // print function to return user amount of coins given
    printf("%i\n", coins);
}
// quarter function, divides change by quarter value
int quarter(int c)
{
    return c / quarter_value;
}
// dime function, divides change by quarter value
int dime(int c)
{
    return c / dime_value;
}
// nickel function, divides change by quarter value
int nickel(int c)
{
    return c / nickel_value;
}