#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"

using namespace std;

int main()
{
    bool isGameOver = false;
    Player Hero;
    GameMap Map;

    cout << "inicia el juego" << endl;
    while(isGameOver == false){
        //Aquie es el loop de nuestro juego
        Hero.Callinput();
        Map.Draw();
    }

    return 0;
}
