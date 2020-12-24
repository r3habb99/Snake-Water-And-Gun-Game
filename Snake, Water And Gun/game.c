#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int snakeWaterGun(char player2, char player1)
{
    // returns 1 if you win , -1 if you lose And 0 if draw.
    /*
                        Condition For Draw Or Tie
                        Cases Covered :
                        ss
                        gg
                        ww
    */
    if (player2 == player1)
    {
        return 0;
    }
    /* 
                        Non-Draw Conditions
                        Cases Covered :
                        sg
                        gs
                        sw
                        ws
                        gw
                        wg 
    */
    if (player1 == 's' && player2 == 'g')
    {
        return -1;
    }
    else if (player1 == 'g' && player2 == 's')
    {
        return 1;
    }

    if (player1 == 's' && player2 == 'w')
    {
        return 1;
    }
    else if (player1 == 'w' && player2 == 's')
    {
        return -1;
    }

    if (player1 == 'g' && player2 == 'w')
    {
        return -1;
    }
    else if (player1 == 'w' && player2 == 'g')
    {
        return 1;
    }
}

int main()
{
    char player1, player2;
    printf("Lets Start The Game!\n\n");
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33)
    {
        player1 = 's';
    }
    else if (number > 33 && number < 66)
    {
        player1 = 'w';
    }
    else
    {
        player1 = 'g';
    }

    printf("Enter 's' For Snake, 'w' For Water And 'g' For Gun! \n");
    scanf("%c", &player2);

    int result = snakeWaterGun(player1, player2);
    printf("You Choose %c And Computer Choose %c\n\n", player2, player1);

    if (result == 0)
    {
        printf("OOPs Game Draw!\n");
    }
    else if (result == 1)
    {
        printf("Congratulation You Win!\n");
    }
    else
    {
        printf("Sorry Better Luck Next Time. \nYou Lose!\n");
    }
    return 0;
}