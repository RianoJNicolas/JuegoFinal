#include "GameMap.h"
#include <iostream>
#include <fstream>

using namespace std;

GameMap::GameMap()
{
    //ctor
    PlayerCell = NULL;
    LoadMapFromFile();
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
    PlayerCell = &Cells[PlayerY][PlayerX];
    PlayerCell->id = 3;
    //cout << "Las coordenadas del jugador estan en: " << PlayerX << "," << PlayerY << endl;

}

void GameMap::LoadMapFromFile(){
    /*ofstream FileCreated("Map.txt");

    if(FileCreated.is_open()){

    }
    else{
        cout << "FATAL ERROR: MAP FILE NOT BE LOADED" << endl;
    }
*/
    string line;
    ifstream MyFile("Map.txt");

    if(MyFile.is_open()){


    }
    else{
        cout << "FATAL ERROR: MAP FILE NOT BE LOADED" << endl;
    }
}
