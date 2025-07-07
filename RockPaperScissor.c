#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int playerplayer2Turn();


int main() {

    int player1 = 0;
    int player1Points = 0;
    int Ai = 0;
    int AiPoints = 0;
    bool gameOver = false;
    int player2 = 0;
    int player2Points = 0;
    int modoDeJogo = 0;


    printf("JOGO ROCK-PAPER-SCISSOR\n");
    printf("Escolher modo de jogo: \n");
    printf("1.VS Ai\n2.VS PLAYER\nR: ");
    scanf("%d", &modoDeJogo);

    while (modoDeJogo != 1 && modoDeJogo != 2)
    {
        printf("\n Invalid Choise\n");
        printf("\nEscolher modo de jogo: \n");
        printf("1.VS Ai\n2.VS PLAYER\nR: ");
        scanf("%d", &modoDeJogo);
    }
    

    if (modoDeJogo == 1)
    {
        do
        {
            printf("\nPLAYER 1 TURN:\n");
            printf("Chose your option\n");
            printf("1.ROCK\n2.PAPER\n3.SCISSOR\nR: ");
            scanf(" %d", &player1);
            

            printf("\nplayer2 TURN:\n");
            player2 = playerplayer2Turn();
            

            if (player1Points == 2 && player2Points != 2)
                {
                    gameOver = true;
                    printf("\nPlayer 1 WON the game");
                    break;
                } else if (player2Points == 2  && player1Points != 2)
                {
                    gameOver = true;
                    printf("\nplayer2 Won the game");
                    break;
                }

            if (player1 == 1 && player2 == 2)
            {
                printf("\nplayer2 WON this round");
                printf("\nPlayer1: Rock\nplayer2: Paper\n");
                player2Points +=1;
                
                
            }else if (player1 == 1 && player2 == 3)
            {
                printf("\nPlayer1 WON this round");
                printf("\nPlayer1: Rock\nplayer2: Scissor\n");
                player1Points +=1;

            } else if (player1 == 2 && player2 == 1)
            {
                printf("\nPlayer1 WON this round");
                printf("\nPlayer1: Paper\nplayer2: Rock\n");
                player1Points +=1;

            } else if (player1 == 2 && player2 == 3)
            {
                printf("\nplayer2 WON this round");
                printf("\nPlayer1: Paper\nplayer2: Scissor\n");
                player2Points +=1;

            } else if (player1 == 3 && player2 == 1)
            {
                printf("\nplayer2 WON this round");
                printf("\nPlayer1: Scissor\nplayer2: Rock\n");
                player2Points +=1;

            } else if (player1 == 3 && player2 == 2)
            {
                printf("\nPlayer1 WON this round");
                printf("\nPlayer1: Scissor\nplayer2: Paper\n");
                player1Points +=1;

            } else{
                printf("\nplayer2: %d\n", player2);
                printf("Player1: %d\n", player1);
                printf("Empate esta ronda\n");
            }
            

        } while (gameOver == false);
        
    } else if (modoDeJogo == 2)
    {
        do
        {
            printf("\nPLAYER 1 TURN:\n");
            printf("Chose your option\n");
            printf("1.ROCK\n2.PAPER\n3.SCISSOR\nR: ");
            scanf(" %d", &player1);

            printf("\nPLAYER 2 TURN:\n");
            printf("Chose your option\n");
            printf("1.ROCK\n2.PAPER\n3.SCISSOR\nR: ");
            scanf(" %d", &player2);

            

            if (player1Points == 3 && player2Points != 3)
                {
                    gameOver = true;
                    printf("\nPlayer 1 WON the game");
                    break;
                } else if (player2Points == 3  && player1Points != 3)
                {
                    gameOver = true;
                    printf("\nPlayer 2 Won the game");
                    break;
                }

            if (player1 == 1 && player2 == 2)
            {
                printf("\nPlayer 2 WON this round");
                printf("\nPlayer1: Rock\nPlayer2: Paper\n");
                player2Points +=1;
                
                
            }else if (player1 == 1 && player2 == 3)
            {
                printf("\nPlayer 1 WON this round");
                printf("\nPlayer1: Rock\nPlayer2: Scissor\n");
                player1Points +=1;

            } else if (player1 == 2 && player2 == 1)
            {
                printf("\nPlayer 1 WON this round");
                printf("\nPlayer1: Paper\nPlayer2: Rock\n");
                player1Points +=1;

            } else if (player1 == 2 && player2 == 3)
            {
                printf("\nPlayer 2 WON this round");
                printf("\nPlayer1: Paper\nPlayer2: Scissor\n");
                player2Points +=1;

            } else if (player1 == 3 && player2 == 1)
            {
                printf("\nPlayer 2 WON this round");
                printf("\nPlayer1: Scissor\nPlayer2: Rock\n");
                player2Points +=1;

            } else if (player1 == 3 && player2 == 2)
            {
                printf("\nPlayer 1 WON this round");
                printf("\nPlayer1: Scissor\nPlayer2: Paper\n");
                player1 +=1;

            } else{
                printf("\nPlayer2: %d\n", player2);
                printf("Player1: %d\n", player1);
                printf("Empate esta ronda\n");
            }
            

        } while (gameOver == false);
     

    }
    
    
        
    return 0;
}


int playerplayer2Turn(){

    srand(time(NULL));

    int min  = 1;
    int max = 3;

    int randomNum = (rand() % (max - min + 1)) + min;

    int playerplayer2 = randomNum;

    return playerplayer2;
}


/* 
TO FINISH:
Add vs Player
When a user puts an input wrong need to leave a message like "Wrong option"
When a user puts an input while player turns into a an infinite loop
*/