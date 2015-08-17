/*
 *  greedy.c
 *
 *  Harvard CS50x3 - Problem Set 1 - Greedy
 *
 *  Simulates the Greedy Algorithm in the form of a coin dispenser. 
 *
 *  Gábor Hargitai <gabriel.hargitai@gmail.com>
 *
 */
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // setting variables
    float input = 0.0;
    int inputMod = 0;
    int modulo = 0;
    int coinsUsed = 0;
    
    printf("O hai, how many coins?\n");
    
    // getting the initial amount
    do
    {
        input = GetFloat();
        
        if (input < 0.0)
        {
            printf("Invalid input!");
        }
    }
    while (input <= 0);
    
    // converting cents for easier calculation    
    inputMod = round(input * 100);
  
    // calculating usable amount of quarters
    modulo = inputMod % 25;
   
    if (modulo == 0) 
    {
        coinsUsed = coinsUsed + (inputMod / 25);
        printf("%d\n", coinsUsed);
        exit(0);   
    }
    else
    {
        coinsUsed = coinsUsed + ((inputMod - modulo) / 25);
        inputMod = modulo;
    }
    
    // calculating usable amount of dimes
    modulo = inputMod % 10;
    
    if (modulo == 0) 
    {
        coinsUsed = coinsUsed + (inputMod / 10);
        printf("%d\n", coinsUsed);
        exit(0);   
    }
    else
    {
        coinsUsed = coinsUsed + ((inputMod - modulo) / 10);
        inputMod = modulo;
    }

    // calculating usable amount of nickels
    modulo = inputMod % 5;
    
    if (modulo == 0) 
    {
        coinsUsed = coinsUsed + (inputMod / 5);
        printf("%d\n", coinsUsed);
        exit(0);   
    }
    else
    {
        coinsUsed = coinsUsed + ((inputMod - modulo) / 5);
        inputMod = modulo;
    }
    
    // calculating usable amount of pennies
    modulo = inputMod % 1;
    
    if (modulo == 0) 
    {
        coinsUsed = coinsUsed + (inputMod / 1);
        printf("%d\n", coinsUsed);
        exit(0);   
    }
    else
    {
        coinsUsed = coinsUsed + ((inputMod - modulo) / 1);
        inputMod = modulo;
    }
    
    return 0;
}
