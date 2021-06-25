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

bool GameMap::SetPlayerCell(int PlayerX, int PlayerY){
    if(Cells[PlayerY][PlayerX].isBlocked()==false){

        if(PlayerCell != NULL){
            PlayerCell->id = 0;
        }

        PlayerCell = &Cells[PlayerY][PlayerX];
        PlayerCell->id = '3';
        return true;
    }
    else{
       return false;
    }

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
    int row = 0;
    ifstream MyFile("Map.txt");

    if(MyFile.is_open()){

        while(getline(MyFile,line)){

            for(int p = 0; p < line.length(); p++){
                if(line[p]=='0'){
                    Cells[row][p].id = 0;
                }
                else{
                    Cells[row][p].id = line[p];
                }
            }

            row++;

        }

    }
    else{
        cout << "FATAL ERROR: MAP FILE NOT BE LOADED" << endl;
    }
}
