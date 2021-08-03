#include <stdio.h>
#include <stdlib.h>
char Digits[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'}; //global variable
int Choice, Player;                                                   //global variable
int CheckForWin();                                                    //Function Declaration
void DisplayBoard();                                                  //Function Declaration
void MarkBoard(char Mark);                                            //Function Declaration
int main()
{
    int GameStaus;
    char Mark;
    Player = 1;
    do 
    {
        DisplayBoard();
        //change turns
        Player = (Player%2)?1:2;
        //Get Input
        printf("Player %d ,Enter a Number: ",Player);
        scanf("%d",&Choice);
        //set the correct character based on the player
        Mark=(Player==1)?'X':'O';
        MarkBoard(Mark);
        GameStaus = CheckForWin();
        Player++;
    }while(GameStaus == -1);
    if(GameStaus == 1)
    printf("===> Player %d win \n\n",--Player);
    else{
        printf("===> Game draw \n\n");
    }
    return 0;
}
int CheckForWin() //Function which return integer value to tell that wheather a player is win or not...-1 for game is over with result,-1is game in progress,0 Game is over with no result..
{
    int returing = 0;
    if (Digits[1] == Digits[2] && Digits[2] == Digits[3])
        returing = 1;
    else if (Digits[4] == Digits[5] && Digits[5] == Digits[6])
        returing = 1;
    else if (Digits[7] == Digits[8] && Digits[8] == Digits[9])
        returing = 1;
    else if (Digits[1] == Digits[4] && Digits[4] == Digits[7])
        returing = 1;
    else if (Digits[2] == Digits[5] && Digits[5] == Digits[8])
        returing = 1;
    else if (Digits[3] == Digits[6] && Digits[6] == Digits[9])
        returing = 1;
    else if (Digits[1] == Digits[5] && Digits[5] == Digits[9])
        returing = 1;
    else if (Digits[3] == Digits[5] && Digits[5] == Digits[7])
        returing = 1;
    else if (Digits[7] == Digits[8] && Digits[8] == Digits[9])
        returing = 1;
    else if (Digits[1] != '1' && Digits[2] != '2' && Digits[3] != '3' && Digits[4] != '4' && Digits[5] != '5' && Digits[6] != '6' && Digits[7] != '7' && Digits[8] != '8' && Digits[9] != '9')
        returing = 0;
    else
        returing = -1;
    return returing;
}
void DisplayBoard() //draw the board with player mark
{
printf("\n\n\t Tic Tac Toe \n\n");
printf("Player1(X) -- Player2(O) \n\n\n");
printf("    |    |    \n");
printf(" %c  | %c  | %c \n",Digits[1],Digits[2],Digits[3]);
printf(" ___|____|____ \n");
printf("    |    |     \n");
printf(" %c  | %c  | %c \n",Digits[4],Digits[5],Digits[6]);
printf(" ___|____|____ \n");
printf("    |    |     \n");
printf(" %c  | %c  | %c \n",Digits[7],Digits[8],Digits[9]);
printf("    |    |     \n\n");
}
void MarkBoard(char Mark)
{
    if(Choice==1 && Digits[1]=='1')
     Digits[1]=Mark;
    else if(Choice==2 && Digits[2]=='2')
     Digits[2]=Mark;
      else if(Choice==3 && Digits[3]=='3')
     Digits[3]=Mark;
      else if(Choice==4 && Digits[4]=='4')
     Digits[4]=Mark;
      else if(Choice==5 && Digits[5]=='5')
     Digits[5]=Mark; 
     else if(Choice==6 && Digits[6]=='6')
     Digits[6]=Mark; 
     else if(Choice==7 && Digits[7]=='7')
     Digits[7]=Mark;
      else if(Choice==8 && Digits[8]=='8')
     Digits[8]=Mark;
      else if(Choice==9 && Digits[9]=='9')
     Digits[9]=Mark;
     else
     {
     printf("Invalid Move");
     Player--;
     }
}
