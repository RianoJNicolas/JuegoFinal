#include "MapCell.h"
#include <iostream>

using namespace std;


MapCell::MapCell()
{
    //ctor
    id = 0;
}

bool MapCell::isBlocked(){
    if(id == '1'){
        return true;
    }
    else{
        return false;
    }
}
