#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"

using namespace std;

int main()
{

    Player Hero;
    GameMap Map;

    Map.DrawIntro();
    Map.Draw();

    while(Map.isGameOver == false){
        //Aqui es el loop de nuestro juego
        cout << "Ingresa el comnado de movimiento: " << endl;
        cout << " 'a' --> Izquierda " << endl;
        cout << " 'w' --> Arriba " << endl;
        cout << " 's' --> Abajo " << endl;
        cout << " 'd' --> Derecha " << endl;
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
