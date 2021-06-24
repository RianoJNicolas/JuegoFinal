#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
    //constructor
    x = 1;
    y = 1;

}

void Player::Callinput(){
    char UserInput = ' ';
    cin >> UserInput;

    switch(UserInput){
    case 'w':
        y = y-1;
        //cout << "El jugador se mueve hacia arriba" << endl;
        break;

    case 's':
        y = y+1;
        //cout << "El jugador se mueve hacia abajo" << endl;
        break;

    case 'd':
        x = x+1;
        //cout << "El jugador se mueve hacia derecha" << endl;
        break;

    case 'a':
        x = x-1;
        //cout << "El jugador se mueve hacia izquierda" << endl;
        break;
    }
    cout << "Mi jugador esta en las coordenadas: " << x << "," << y << endl;
}
