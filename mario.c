#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
    n = get_int("Height: "); //asks the user for the height and assigns that value to n
    }
    while (n < 1 || n > 8); //a while loop that determines if the user inputted a value between 1 and 8

    for (int k = n; k > 0; k--) //this for loop sets k to n and counts down to 0 (aslo decides how many rows to make)
    {
    {
     int s = k - 1; // solves for s , s being the amount of blank space to put before the blocks
     int b = n - s; // solves for b, b being the amount of blocks created in each iteration of the loops below
// For each row
    for (int i = 0; i < s; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < b; i++)
    {
        printf("#");
    }
    {
        printf("  ");
    }
    for (int i = 0; i < b; i++)
    {
        printf("#");
    }
        printf("\n"); //creates the next row k times
    }
    }
}




