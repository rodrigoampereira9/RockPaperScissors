#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int playerAiTurn();


int main() {

    int player1 = 0;
    int player1Points = 0;
    int player2 = 0;
    int player2Points = 0;
    bool gameOver = false;
    int Ai = 0;
    int AiPoints = 0;
    int modoDeJogo = 0;


    printf("JOGO ROCK-PAPER-SCISSOR\n");
    printf("Escolher modo de jogo: \n");
    printf("1.VS AI\n2.VS PLAYER\nR: ");
    scanf("%d", &modoDeJogo);

    if (modoDeJogo == 1)
    {
        do
        {
            printf("\nPLAYER 1 TURN:\n");
            printf("Chose your option\n");
            printf("1.ROCK\n2.PAPER\n3.SCISSOR\nR: ");
            scanf(" %d", &player1);

            printf("\nAI TURN:\n");
            Ai = playerAiTurn();

            if (player1Points == 3 && AiPoints != 3)
                {
                    gameOver = true;
                    printf("\nPlayer 1 WON the game");
                    break;
                } else if (AiPoints == 3  && player1Points != 3)
                {
                    gameOver = true;
                    printf("\nAi Won the game");
                    break;
                }

            if (player1 == 1 && Ai == 2)
            {
                printf("\nAi WON this round");
                printf("\nPlayer1: Rock\nAi: Paper\n");
                AiPoints +=1;
                
                
            }else if (player1 == 1 && Ai == 3)
            {
                printf("\nPlayer1 WON this round");
                printf("\nPlayer1: Rock\nAi: Scissor\n");
                player1Points +=1;

            } else if (player1 == 2 && Ai == 1)
            {
                printf("\nPlayer1 WON this round");
                printf("\nPlayer1: Paper\nAi: Rock\n");
                player1Points +=1;

            } else if (player1 == 2 && Ai == 3)
            {
                printf("\nAi WON this round");
                printf("\nPlayer1: Paper\nAi: Scissor\n");
                AiPoints +=1;

            } else if (player1 == 3 && Ai == 1)
            {
                printf("\nAi WON this round");
                printf("\nPlayer1: Scissor\nAi: Rock\n");
                AiPoints +=1;

            } else if (player1 == 3 && Ai == 2)
            {
                printf("\nPlayer1 WON this round");
                printf("\nPlayer1: Scissor\nAi: Paper\n");
                player1 +=1;

            } else{
                printf("\nAi: %d\n", Ai);
                printf("Player1: %d\n", player1);
                printf("Empate esta ronda\n");
            }
            

        } while (gameOver == false);
        
    }
    
        
    return 0;
}


int playerAiTurn(){

    srand(time(NULL));

    int min  = 1;
    int max = 3;

    int randomNum = (rand() % (max - min + 1)) + min;

    int playerAi = randomNum;

    return playerAi;
}


/* 
TO FINISH:
Add vs Player
When a user puts an input wrong need to leave a message like "Wrong option"
When a user puts an input while player turns into a an infinite loop
*/