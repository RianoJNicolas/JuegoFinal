#include <iostream>
#include "Player.h"

using namespace std;

int main()
{
    bool isGameOver = false;
    Player Hero;

    cout << "inicia el juego" << endl;
    while(isGameOver == false){
        //Aquie es el loop de nuestro juego
        Hero.Callinput();
    }

    return 0;
}
