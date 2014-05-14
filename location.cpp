#include "location.h"

using namespace std;

Location::Location(){

	name = "";
	description = "";
	visited = false;
}

Location::Location(string _name, string _description){

	name = _name;
	description = _description;
	visited = false;
}

void setPosition(int& _x, int& _y){

	int pos;
    pos = (y * width) + x;
    position = pos;
}

void Location::describe(){

	cout << description << endl;
}

bool Location::firstTime(){

	return !(visited);
}

std::istream& operator >>(std::istream& is, Location& l){

	is >> l.name;
	is >> l.description;

	return is;
}
