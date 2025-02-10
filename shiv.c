// try to do something unexpected//
/*here accepting there the ladder at 45-67,76-87,12-34,56-67,85-91,24-46
and the snakes at 99-84,78-64,35-18,49-28,24-8,18-4*/
#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int disc();
void scoreboard(int p[4], int n);

int main()
{

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int a[4]; // assigning the variable for each palayer
    int t, q, n, x;
    int i;
    a[0] = 0;
    a[1] = 0;
    a[2] = 0;
    a[3] = 0;
    printf("\033[1;32mNow GOing to enter to the new game\033[0m\n", i + 1);
    srand(time(NULL));
x:
    printf("enter the no of player\n");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("enter the no of palyer between 2&4\n");
        goto x;
    }
    do
    {
        for (i = 0; i < n; i++)
        {

            SetConsoleTextAttribute(hConsole, 1);
            printf("player %d your turn \n", i + 1);
            printf("enter any key to roll the disc\n");
            scanf("%d", &q);
            t = disc();
            printf("you rolled %d \n", t);
            a[i] = a[i] + t;
            
           
        
            if (a[i] == 45)
            {
                printf("\033[1;32mplayer %d got ladder \033[0m\n", i + 1); // Green
                a[i] = 67;
            }
            else if (a[i] == 76)
            {
                printf("\033[1;32mplayer %d got ladder \033[0m\n", i + 1); // Green
                a[i] = 87;
            }
            else if (a[i] == 12)
            {
                printf("\033[1;32mplayer %d got ladder \033[0m\n", i + 1); // Green
                a[i] = 34;
            }
            else if (a[i] == 56)
            {
                printf("\033[1;32mplayer %d got ladder \033[0m\n", i + 1); // Green
                a[i] = 67;
            }
            else if (a[i] == 85)
            {
                printf("\033[1;32mplayer %d got ladder \033[0m\n", i + 1); // Green
                a[i] = 91;
            }
            else if (a[i] == 24)
            {
                printf("\033[1;32mplayer %d got ladder \033[0m\n", i + 1); // Green
                a[i] = 46;
            }
            else if (a[i] == 99)
            {
                printf("\033[1;31mplayer %d bitten by snake \033[0m\n", i + 1); // red
                a[i] = 84;
            }
            else if (a[i] == 78)
            {
                printf("\033[1;31mplayer %d bitten by snake \033[0m\n", i + 1); // red
                a[i] = 64;
            }
            else if (a[i] == 35)
            {
                printf("\033[1;31mplayer %d bitten by snake \033[0m\n", i + 1); // red
                a[i] = 18;
            }
            else if (a[i] == 49)
            {
                printf("\033[1;31mplayer %d bitten by snake \033[0m\n", i + 1); // red
                a[i] = 28;
            }
            else if (a[i] == 24)
            {
                printf("\033[1;31mplayer %d bitten by snake \033[0m\n", i + 1); // red
                a[i] = 8;
            }
            if (a[i] == 100)
            {
                printf("\033[1;35mplayer %d won the game \033[0m\n", i + 1); // red
                printf("\033[1;35mthe game is end here\033[0m\n", i + 1);
                return 0;
            }
        }
        scoreboard(a, n);

    } while (a[0] != 100 && a[1] != 100 && a[2] != 100 && a[3] != 100);
    return 0;
    getch();
}

// calling the function for the scoreboard
void scoreboard(int p[4], int n)
{
    int i, j, pos, a, k;
    int l;
    // defing the value of pos from 1-100

    for (i = 10; i >= 1; i--)
    {
        a = 1;
        for (k = 0; k < 10; k++)
        {
            printf("\033[1;36m--\033[0m \t");
        }
        printf("\n");
        for (j = 10; j >= 1; j--)
        {
            if (i % 2 == 0)
            {
                pos = (i - 1) * 10 + j;
            }
            else
            {
                pos = (i - 1) * 10 + a;
                a++;
            }
            // printing scoreboard from 1-100
            for (l = 0; l < n; l++)
            {
                if (pos == p[l])
                {
                    pos = 1111;
                }
            }
            printf("\033[1;32m||%d||\033[0m\t", pos);
        }

        printf("\n\n");
    }
}

int disc()
{
    return (rand() % 6) + 1; // Generates a number between 1 and 6
}
