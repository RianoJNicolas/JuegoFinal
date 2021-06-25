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

    Map.DrawIntro();

    while(isGameOver == false){
        //Aqui es el loop de nuestro juego
        Hero.Callinput();

        // Aqui actualizamos la informacion del heroe en el mapa
        if(Map.SetPlayerCell(Hero.x,Hero.y)){
            // Aqui dibujamos el mapa
            Map.Draw();
        }
        else{
            Hero.ResetToSafePosition();
            // Aqui dibujamos el mapa
            Map.Draw();
        }



    }

    return 0;
}
