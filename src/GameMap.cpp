#include "GameMap.h"
#include <iostream>

using namespace std;

GameMap::GameMap()
{
    //ctor
    PlayerCell = NULL;
}

void GameMap::Draw(){
    for(int i = 0; i < 15; i++){
        for(int j = 0; j<10;j++){
            cout << Cells[i][j].id;
        }
        cout << endl;
    }
}

void GameMap::SetPlayerCell(int PlayerX, int PlayerY){

    if(PlayerCell != NULL){
        PlayerCell->id=0;
    }
    PlayerCell = &Cells[PlayerX][PlayerY];
    PlayerCell->id = 3;
    //cout << "Las coordenadas del jugador estan en: " << PlayerX << "," << PlayerY << endl;

}
