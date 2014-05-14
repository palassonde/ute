#include "player.h"

Player::Player(){

	name = "Player 1"
	health = 100;
	position = 0;
}

int getPosition(int& x, int& y){

	int pos;
    pos = (y * width) + x;
    position = pos;
}
