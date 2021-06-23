#include "GameMap.h"
#include <iostream>

using namespace std;

GameMap::GameMap()
{
    //ctor
}

void GameMap::Draw(){
    for(int i = 0; i < 15; i++){
        for(int j = 0; j<10;j++){
            cout << 0;
        }
        cout << endl;
    }
}

