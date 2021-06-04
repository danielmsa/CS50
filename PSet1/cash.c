#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float N;
    do
    {
        //Get a value from the user
        N = get_float("change owed: ");
    }
    while (N < 0);
    
    //Convert dollar to cents
    int cents = round(N * 100);
    int coins = 0;
   
    //Insert the coins available
    int denominations [] = {25, 10, 5, 1};
    int size = 4;
    for (int i = 0; i < size; i++)
    {
        coins += cents / denominations [i];
        cents %= denominations [i];
    }
    //Print the total of coins to give the change
    printf("%i\n", coins);
}