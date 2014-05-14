#include <cstdlib>
#include <iostream>
#include <fstream>
#include "map.h"
#include "player.h"

using namespace std;

void move(Player a, string b, Map c){

	switch(b){
		case "north" : 
		case "south" :
		case "east" :
		case "west" :
	}
}

int main(int argc, const char** argv){

	Player playerA;

	ifstream filemap(argv[1]);
    Map mapA;
    filemap >> mapA;
    filemap.close();

	string action;
	string object;

	int x = 0;
	int y = 0;

	while(action != "quit"){

		cin >> action >> object;

		switch(action){

			case "go" : move(playerA, object, mapA);
		}

	}
	

	return 0;
}