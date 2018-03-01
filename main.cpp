#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
        SecretDoor game;



        int PlayedGames  = 0;

        int WonGames = 0;

        char input;




        cout<<"How many games you want to play?"<<endl;

        cin>>PlayedGames;



                for(int i = 0; i < PlayedGames; i++) 
                {


                        game.newGame();


                        game.guessDoorC();
                        game.guessDoorC();



                       if ( game.isWinner() == true)




                        {

                                WonGames++;

                        }
                }

        cout<<"You won this many "<<WonGames<<" times!"<<endl;



        return 0;
}
