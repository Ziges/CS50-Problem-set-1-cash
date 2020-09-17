#include <stdio.h>
#include <cs50.h>
#include <math.h>

//write problem in pseudocode first!

int main(void)
{
    //prompt user for an amount of change, accept only non-negative inputs.
    float change;
    do
    {
        change = get_float("Change owed: ");
    }
    while (change <= 0);


    //Multiply change by 100 to convert to cents.
    int cents = round(change * 100);

    //set coin counter to 0, increase as per below.
    int coins = 0;

// One solution:

while (cents > 0)
    {
     //check if cents is divisible by one of four coin types. For each type, increase counter by 1 & update new value of cents. Repeats until cents = 0.
     if (cents >= 25)
     {
         coins++;
         cents -= 25;
     }
     else if (cents >= 10)
     {
         coins++;
         cents -= 10;
     }
     else if (cents >= 5)
     {
         coins++;
         cents -= 5;
     }
     else
     {
         coins++;
         cents -= 1;
     }
}

// When cents == 0, printf counter value (the least nr. of coins needed) given back to user as change.
printf("%i\n", coins);
}



// another solution:

// //while we can use quarter, update coins & cents by below
//     while (cents / 25 >= 1)
//     {
//         int amount = cents / 25;
//         coins += amount;
//         cents = cents - amount * 25;
//     }

//     //while we can use dime, update coins & cents by below
//     while (cents / 10 >= 1)
//     {
//         int amount = cents / 10;
//         coins += amount;
//         cents = cents - amount * 10;
//     }

// //while we can use nickel, update coins & cents by below
//     while (cents / 5 >= 1)
//     {
//         int amount = cents / 5;
//         coins += amount;
//         cents = cents - amount * 5;
//     }

// //while we can use penny, update coins & cents by below
//     while (cents / 1 >= 1)
//     {
//         int amount = cents / 1;
//         coins += amount;
//         cents = cents - amount * 1;
//     }
//     printf("%i\n", coins);
// }



