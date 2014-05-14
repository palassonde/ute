#include "map.h"

Map::Map(){

	name = " ";
	height = 0;
	width = 0;
}

Map::Map(string _name, int _height, int _width){

	name = _name;
	height = _height;
	width = _width;
}

Map::~Map() {
	delete [] world;
}

Location Map::getLocation(int& x, int& y){

	int pos;
    pos = (y * width) + x;
    return world[pos];
}

string Map::getName(){

	return name;
}

std::istream& operator >>(std::istream& is, Map& m){

    int height, width;
    is >> height >> width;
    m.height = height;
    m.width = width;
    m.world = new Location[height*width];
    Location l;

    for(int y=0;y<height;y++){
    	for(int x=0;x<width;x++){
 
            is >> l;
            l.setPosition(y,x);
        	m.world[m.size] = l;
            m.size++;
        }
    }

    return is;
}