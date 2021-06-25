#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "MapCell.h"

class GameMap
{
    public:
        GameMap();

        MapCell* PlayerCell;
        MapCell Cells[15][10];

        void Draw();

        // Esta funcion obtiene las coordenadas de player y actualiza el mapa
        bool SetPlayerCell(int PlayerX, int PlayerY);


    protected:
        void LoadMapFromFile();

    private:
};

#endif // GAMEMAP_H
