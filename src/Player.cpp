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
        lastY = y;
        y = y-1;
        //cout << "El jugador se mueve hacia arriba" << endl;
        break;

    case 's':
        lastY = y;
        y = y+1;
        //cout << "El jugador se mueve hacia abajo" << endl;
        break;

    case 'd':
        lastX = x;
        x = x+1;
        //cout << "El jugador se mueve hacia derecha" << endl;
        break;

    case 'a':
        lastX = x;
        x = x-1;
        //cout << "El jugador se mueve hacia izquierda" << endl;
        break;
    }
    cout << "Mi jugador esta en las coordenadas: " << x << "," << y << endl;
}

void Player::ResetToSafePosition(){
    x = lastX;
    y = lastY;
}
