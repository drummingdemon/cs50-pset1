/*
 *  mario.c
 *
 *  Harvard CS50x3 - Problem Set 1 - Mario Pyramid
 *
 *  Recreates the Mario half-pyramid at the end of World 1-1 
 *
 *  Gábor Hargitai <gabriel.hargitai@gmail.com>
 *
 */

#include <stdio.h>
#include <cs50.h>

// declaration of functions
void drawSpaces(int space);
void drawBlocks(int block);

int main(void)
{

    int height = 0;

    // user prompt for valid input
    printf("Height (1-23): ");

    do 
    { 
        height = GetInt(); 
        if (height > 23 || height < 0)
        {
            printf("Invalid input!\n");
        }
    } 
    while (height < 0 || height > 23);
    
    // building of the half-pyramid based on the given height input
    for (int i=2; i < height + 2; i++) 
    {
        drawSpaces(height - i + 1);
        drawBlocks(i);
        printf("\n");
    }

    return 0;

}
// function responsible for using whitespace characters as spacers
void drawSpaces(int space)
{
    for (int i=0; i < space; i++)
    {
        printf(" ");
    }
}

// function responsible for using hashmarks as building blocks
void drawBlocks(int block)
{ 
    for (int i=0; i < block; i++)
    {
        printf("#");
    }
}
